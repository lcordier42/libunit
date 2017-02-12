/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_same_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescamp <mdescamp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 14:34:51 by mdescamp          #+#    #+#             */
/*   Updated: 2017/02/12 14:39:29 by mdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		strcmp_same_test(void)
{
	if (strcmp("Banane", "Banane") == ft_strcmp("Banane", "Banane"))
		return (0);
	else
		return (-1);
}
