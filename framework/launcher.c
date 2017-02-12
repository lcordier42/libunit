/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <agiulian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 21:09:53 by agiulian          #+#    #+#             */
/*   Updated: 2017/02/12 02:18:21 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

static void	result_test(int result)
{
	if (result == 0)
	{
		ft_printf("\x1B[32m[OK]\x1B[0m\n");
		exit(0);
	}
	else
	{
		ft_printf("\x1B[31m[KO]\x1B[0m\n");
		exit(-1);
	}
}

static void	exec_test(t_ret *val, char *test_name, int (*f)(void))
{
	int pid;
	int	status;

	val->tot++;
	ft_printf("    > %s : ", test_name);
	if ((pid = fork()) == -1)
		return ;
	if (pid == 0)
		result_test(f());
	else
	{
		wait(&status);
		if (WIFSIGNALED(status))
		{
			if (WTERMSIG(status) == SIGSEGV)
				ft_printf("\x1B[33m[SEGF]\x1B[0m\n");
			else if (WTERMSIG(status) == SIGBUS)
				ft_printf("\x1B[33m[BUS]\x1B[0m\n");
			val->fail++;
		}
		else if (WEXITSTATUS(status))
			val->fail++;
	}
}

void		load_test(t_test **testlist, char *test_name, int (*f)(void))
{
	t_test *list;

	if (!(*testlist))
	{
		if (!(*testlist = ft_memalloc(sizeof(t_test))))
			return ;
		(*testlist)->test_name = test_name;
		(*testlist)->f = f;
		return ;
	}
	list = *testlist;
	while (list->next)
		list = list->next;
	if (!(list->next = ft_memalloc(sizeof(t_test))))
		return ;
	list = list->next;
	list->test_name = test_name;
	list->f = f;
}

void		launch_tests(t_test **testlist, t_ret *val)
{
	t_test *list;

	list = *testlist;
	while (list)
	{
		exec_test(val, list->test_name, list->f);
		list = list->next;
	}
	list = *testlist;
	while (*testlist)
	{
		list = (*testlist)->next;
		free(*testlist);
		*testlist = list;
	}
}
