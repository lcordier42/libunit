/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_doublesign_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescamp <mdescamp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 14:58:08 by mdescamp          #+#    #+#             */
/*   Updated: 2017/02/12 15:04:21 by mdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		atoi_doublesign_test(void)
{
	if (atoi("--123") == ft_atoi("--123"))
		return (0);
	else
		return (-1);
}
