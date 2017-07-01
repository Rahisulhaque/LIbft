

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char*)s;
	while (n-- > 0)
	{
		if (*str++ == (unsigned char)c)
			return (unsigned char*)(s + i);
		i++;
	}
	return (NULL);
}
