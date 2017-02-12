/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_nonum_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescamp <mdescamp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 15:10:27 by mdescamp          #+#    #+#             */
/*   Updated: 2017/02/12 15:10:51 by mdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		atoi_nonum_test(void)
{
	if (atoi("abcde") == ft_atoi("abcde"))
		return (0);
	else
		return (-1);
}
