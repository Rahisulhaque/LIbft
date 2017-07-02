/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhaque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 18:51:07 by rhaque            #+#    #+#             */
/*   Updated: 2017/07/01 18:51:09 by rhaque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;
	unsigned char	a;

	a = c;
	dest = (unsigned char*)dst;
	source = (unsigned char*)src;
	while (n-- > 0)
	{
		if ((*dest++ = *source++) == a)
			return (void*)(dest);
	}
	return (NULL);
}
