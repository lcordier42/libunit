/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcordier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:56:29 by lcordier          #+#    #+#             */
/*   Updated: 2017/02/11 23:58:11 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		LIBUNIT_H
# define	LIBUNIT_H

# include <sys/wait.h>
# include <signal.h>
# include <stdlib.h>
# include "libft/includes/libft.h"
# include "printf/ft_printf.h"

typedef struct	s_ret
{
	int fail;
	int tot;
}				t_ret;

typedef struct	s_test
{
	char				*test_name;
	int					(*f)(void);
	struct s_test		*next;
}				t_test;

void			launch_tests(t_test **testlist, t_ret *val);
void			load_test(t_test **test_list, char *test_name, int (*f)(void));

#endif
