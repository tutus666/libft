#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	n;

	n = -1;
	while (s1[++n])
		;
	str = malloc(n + 1);
	if (!str)
		return (0);
	n = -1;
	while (s1[++n])
		str[n] = s1[n];
	str[n] = 0;
	return (str);
}
