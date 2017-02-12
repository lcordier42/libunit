/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescamp <mdescamp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 15:18:12 by mdescamp          #+#    #+#             */
/*   Updated: 2017/02/12 18:29:38 by mdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "strncpy_tests.h"
#include "libunit.h"
#include "../../config.h"

int		strncpy_launcher(void)
{
	t_test	*list;
	t_cate	*list2;

	list = NULL;
	list2 = NULL;
	if (STRNCPY_BASICS == 1)
		add_test_to_list(&list, "Basic test", strncpy_basic_test);
	if (STRNCPY_EMPTY == 1)
		add_test_to_list(&list, "Empty test", strncpy_empty_test);
	if (STRNCPY_SIZE_NULL == 1)
		add_test_to_list(&list, "Size null test", strncpy_sizenull_test);
	add_categorie_to_list(&list2, "STRNCPY", &list);
	return (start_test(&list2));
}
