/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_tabulation_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescamp <mdescamp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 14:58:11 by mdescamp          #+#    #+#             */
/*   Updated: 2017/02/12 15:04:23 by mdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		atoi_tabulation_test(void)
{
	if (atoi("\t\v123") == ft_atoi("\t\v123"))
		return (0);
	else
		return (-1);
}
