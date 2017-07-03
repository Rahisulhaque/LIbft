/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhaque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 17:39:41 by rhaque            #+#    #+#             */
/*   Updated: 2017/07/01 17:39:45 by rhaque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t d;
	size_t s;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	i = d;
	if (size <= i + 1)
		return (size + s);
	while (i + 1 < size && *src)
		*(dst + i++) = *src++;
	*(dst + i++) = '\0';
	return (d + s);
}
