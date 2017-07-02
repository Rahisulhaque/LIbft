/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhaque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 17:18:51 by rhaque            #+#    #+#             */
/*   Updated: 2017/07/01 17:19:01 by rhaque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	a;

	i = 0;
	a = (unsigned char)c;
	if (a == '\0')
	{
		while (s[i] != '\0')
			i++;
		return (char*)(s + i);
	}
	while (s[i] != '\0')
	{
		if (s[i] == a)
			return (char*)(s + i);
		i++;
	}
	return (NULL);
}
