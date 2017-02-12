/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescamp <mdescamp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 14:44:28 by mdescamp          #+#    #+#             */
/*   Updated: 2017/02/12 18:28:48 by mdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "atoi_tests.h"
#include "libunit.h"
#include "../../config.h"

int		atoi_launcher(void)
{
	t_test	*list;
	t_cate	*list2;

	list = NULL;
	list2 = NULL;
	if (ATOI_BASICS == 1)
		add_test_to_list(&list, "Basic test", atoi_basic_test);
	if (ATOI_DOUBLESIGN == 1)
		add_test_to_list(&list, "Doublesign test", atoi_doublesign_test);
	if (ATOI_TABULATION == 1)
		add_test_to_list(&list, "Tabulation test", atoi_tabulation_test);
	if (ATOI_NO_NUM == 1)
		add_test_to_list(&list, "No num test", atoi_nonum_test);
	add_categorie_to_list(&list2, "ATOI", &list);
	return (start_test(&list2));
}
