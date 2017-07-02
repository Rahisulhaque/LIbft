/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhaque <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 17:46:35 by rhaque            #+#    #+#             */
/*   Updated: 2017/07/01 17:46:39 by rhaque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	k;

	i = 0;
	k = c;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == k)
			return (char*)(s + i);
		i--;
	}
	return (NULL);
}
