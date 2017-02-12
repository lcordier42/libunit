/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_alpha_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescamp <mdescamp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 16:07:38 by mdescamp          #+#    #+#             */
/*   Updated: 2017/02/12 16:10:19 by mdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"

int		isalpha_alpha_test(void)
{
	if (isalpha('g') == ft_isalpha('g'))
		return (0);
	else
		return (-1);
}
