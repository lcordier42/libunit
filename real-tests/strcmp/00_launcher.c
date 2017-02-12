/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescamp <mdescamp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 16:18:52 by mdescamp          #+#    #+#             */
/*   Updated: 2017/02/12 18:29:24 by mdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strcmp_tests.h"
#include "libunit.h"
#include <stdlib.h>
#include "../../config.h"

int		strcmp_launcher(void)
{
	t_test	*list;
	t_cate	*list2;

	list = NULL;
	list2 = NULL;
	if (STRCMP_BASICS == 1)
		add_test_to_list(&list, "Basic test", strcmp_basic_test);
	if (STRCMP_SAME == 1)
		add_test_to_list(&list, "Same test", strcmp_same_test);
	if (STRCMP_EMPTY == 1)
		add_test_to_list(&list, "Empty test", strcmp_empty_test);
	add_categorie_to_list(&list2, "STRCMP", &list);
	return (start_test(&list2));
}
