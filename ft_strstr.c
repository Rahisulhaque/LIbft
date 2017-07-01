

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int k;

	i = 0;
	if (little[0] == '\0')
		return (char*)(big);
	while (big[i] != '\0')
	{
		k = 0;
		while (big[i + k] == little[k] && little[k] != '\0')
			k++;
		if (little[k] == '\0')
			return (char*)(big + i);
		i++;
	}
	return (NULL);
}
