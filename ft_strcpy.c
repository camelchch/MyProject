#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int		i;

	i = 0;
	while(*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}
