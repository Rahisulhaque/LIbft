

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t			i;

	dest = (unsigned char*)dst;
	source = (unsigned char*)src;
	i = -1;
	if (source < dest)
		while (len-- > 0)
			*(dest + len) = *(source + len);
	else
		while (++i < len)
			*(dest + i) = *(source + i);
	return (dst);
}
