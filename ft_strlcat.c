#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	length;
	size_t	i;

	length = ft_strlen(dest);
	i = 0;
	while(*src && i < n - length - 1)
		dest[length + i++] = *src++;
	dest[length + i] = '\0';
	return (length + i);
}
