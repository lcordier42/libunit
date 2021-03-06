/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiulian <arthur.giuliano@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 16:57:37 by agiulian          #+#    #+#             */
/*   Updated: 2016/11/08 16:40:30 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char*))
{
	if (!s || !f)
		return ;
	while (*s)
		f(s++);
}
