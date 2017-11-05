#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_string;
	int		i;

	i = 0;
	if(!(new_string = (char *)malloc(sizeof(s))))
	return (NULL);
	while(*s)
	*(new_string + i++) = f(*s++);
	*(new_string + i) = '\0';
	return (new_string);
}
