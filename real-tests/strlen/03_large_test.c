/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_large_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdescamp <mdescamp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:56:20 by mdescamp          #+#    #+#             */
/*   Updated: 2017/02/12 16:33:07 by mdescamp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	strlen_large_test(void)
{
	char	*tmp;

	tmp = strdup("Vita est illis semper in fuga uxoresque merce\nsunariae con");
	if (ft_strlen(tmp) == strlen(tmp))
		return (0);
	else
		return (-1);
}
