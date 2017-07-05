

#include "libft.h"

int		ft_atoi_base(char const *str, int base)
{
	int			result;
	char		sign;
	char const	*x;

	result = 0;
	sign = '+';
	str = ft_skip_spaces(str);
	if (*str == '-' || *str == '+')
		sign = *(str++);
	while ((x = ft_memchr(ALPHANUMS, ft_tolower(*(str++)), base)) != NULL)
		result = result * base + (x - ALPHANUMS);
	return ((sign == '+') ? result : -result);
}
