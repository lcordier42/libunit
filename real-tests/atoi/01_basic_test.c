/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescamp <mdescamp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 14:58:05 by mdescamp          #+#    #+#             */
/*   Updated: 2017/02/12 15:04:19 by mdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		atoi_basic_test(void)
{
	if (atoi("123456789") == ft_atoi("123456789"))
		return (0);
	else
		return (-1);
}
