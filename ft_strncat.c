#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	length;
	size_t	i;

	length = ft_strlen(dest);
	i = 0;
	while(*src && i < n)
		dest[length + i++] = *src++;
	dest[length + i] = '\0';
	return (dest);
}
