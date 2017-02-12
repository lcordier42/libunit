/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescamp <mdescamp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 15:19:37 by mdescamp          #+#    #+#             */
/*   Updated: 2017/02/12 15:49:35 by mdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

int		strncpy_basic_test(void)
{
	char	*tmp;

	tmp = (char*)malloc(sizeof(char) * 4);
	if (strncpy(tmp, "Peche", 3) == ft_strncpy(tmp, "Peche", 3))
	{
		free(tmp);
		return (0);
	}
	else
	{
		free(tmp);
		return (-1);
	}
}
