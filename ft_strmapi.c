

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	k;
	char			*str;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	str = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[k] = f(i, s[i]);
		i++;
		k++;
	}
	str[k] = '\0';
	return (str);
}
