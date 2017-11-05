#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	length;

	length = ft_strlen(dest);
	while(*src)
		dest[length++] = *src++;
	dest[length] = *src;
	return (dest);
}
