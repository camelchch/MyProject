#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s)
{
	char *copy;
	int		i;

	i = 0;
	if(!(copy = (char *)malloc(ft_strlen(s) + 1)))
		return (NULL);
	while(*s)
		copy[i++] = *s++;
	copy[i] = '\0';
	return (copy);
}
