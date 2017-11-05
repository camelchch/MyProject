#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while(c != *s && *s)
		s++;
	if(c == *s)
		return ((char *)s);
	else
		return (NULL);
}
