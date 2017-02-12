/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_num_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescamp <mdescamp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 16:07:41 by mdescamp          #+#    #+#             */
/*   Updated: 2017/02/12 16:11:18 by mdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"

int		isalpha_num_test(void)
{
	if (isalpha('1') == ft_isalpha('1'))
		return (0);
	else
		return (-1);
}
