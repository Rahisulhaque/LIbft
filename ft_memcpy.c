/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhaque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 18:55:57 by rhaque            #+#    #+#             */
/*   Updated: 2017/07/01 18:58:20 by rhaque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *dest;
	unsigned char *source;

	dest = (unsigned char*)dst;
	source = (unsigned char*)src;
	while (n-- > 0)
		*dest++ = *source++;
	return (dst);
}
