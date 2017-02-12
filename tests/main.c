/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcordier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:32:23 by lcordier          #+#    #+#             */
/*   Updated: 2017/02/11 17:32:24 by lcordier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int		basic_test(void)
{
		ft_strcpy("test", "lol");
		return (0);
}

int		null_test(void)
{
		return (-1);
}

int		basic_test(void);
int		null_test(void);

int		main(void)
{
	t_test *testlist;
	t_ret	*val;

	testlist = NULL;
	val = malloc(sizeof(t_ret));
	val->tot = 0;
	val->fail = 0;
	ft_printf("STRLEN:\n");
	load_test(&testlist, "Basic test", &basic_test);
	load_test(&testlist, "NULL test", &null_test);
	launch_tests(&testlist, val);
	ft_printf("%i/%i tests\n", val->tot-val->fail, val->tot);
	if (val->fail > 0)
		return (-1);
	return (0);
}
