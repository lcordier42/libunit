/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_sizenull_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescamp <mdescamp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 15:22:14 by mdescamp          #+#    #+#             */
/*   Updated: 2017/02/12 15:28:03 by mdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		strncpy_sizenull_test(void)
{
	if (strncpy("Pomme", "Peche", 0) == ft_strncpy("Pomme", "Peche", 0))
		return (0);
	else
		return (-1);
}
