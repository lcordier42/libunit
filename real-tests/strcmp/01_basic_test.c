/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescamp <mdescamp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 16:19:17 by mdescamp          #+#    #+#             */
/*   Updated: 2017/02/12 16:19:38 by mdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		strcmp_basic_test(void)
{
	if (strcmp("Bonjour", "Salut") == ft_strcmp("Bonjour", "Salut"))
		return (0);
	else
		return (-1);
}
