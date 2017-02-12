/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_empty_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescamp <mdescamp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 14:34:54 by mdescamp          #+#    #+#             */
/*   Updated: 2017/02/12 14:38:56 by mdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		strcmp_empty_test(void)
{
	if (strcmp("", "") == ft_strcmp("", ""))
		return (0);
	else
		return (-1);
}
