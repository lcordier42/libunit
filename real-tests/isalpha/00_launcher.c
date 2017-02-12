/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescamp <mdescamp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 16:07:35 by mdescamp          #+#    #+#             */
/*   Updated: 2017/02/12 18:29:09 by mdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "isalpha_tests.h"
#include "libunit.h"
#include <stdlib.h>
#include "../../config.h"

int		isalpha_launcher(void)
{
	t_test	*list;
	t_cate	*list2;

	list = NULL;
	list2 = NULL;
	if (ISALPHA_ALPHA == 1)
		add_test_to_list(&list, "Alpha test", isalpha_alpha_test);
	if (ISALPHA_NUM == 1)
		add_test_to_list(&list, "Num test", isalpha_num_test);
	add_categorie_to_list(&list2, "ISALPHA", &list);
	return (start_test(&list2));
}
