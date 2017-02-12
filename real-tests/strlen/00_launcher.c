/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 05:50:17 by jchichep          #+#    #+#             */
/*   Updated: 2017/02/12 18:28:22 by mdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "strlen_tests.h"
#include "libunit.h"
#include "../../config.h"

int		strlen_launcher(void)
{
	t_test	*list;
	t_cate	*list2;

	list = NULL;
	list2 = NULL;
	if (STRLEN_BASICS == 1)
		add_test_to_list(&list, "Basic test", strlen_basic_test);
	if (STRLEN_EMPTY == 1)
		add_test_to_list(&list, "Empty test", strlen_empty_test);
	if (STRLEN_LARGE == 1)
		add_test_to_list(&list, "Large test", strlen_large_test);
	add_categorie_to_list(&list2, "STRLEN", &list);
	return (start_test(&list2));
}
