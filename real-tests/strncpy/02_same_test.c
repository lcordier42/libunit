/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_same_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescamp <mdescamp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 15:21:31 by mdescamp          #+#    #+#             */
/*   Updated: 2017/02/12 16:02:52 by mdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

int		strncpy_empty_test(void)
{
	char	*tmp;

	tmp = (char*)malloc(sizeof(char) * 4);
	if (strncpy(tmp, "", 3) == ft_strncpy(tmp, "", 3))
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
