#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *copy;

	copy = (char *)s;
	while(n > 0 && *copy++ != c)
		n--;
	if(n > 0)
		return ((void *)copy);
	else
		return (NULL);
}
