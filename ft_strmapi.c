#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int,char))
{
	char		*new_string;
	unsigned	int	i;

	i = 0;
	if(!(new_string = (char *)malloc(sizeof(s))))
	return (NULL);
	while(*(s + i))
	{
	*(new_string + i) = f(i,*(s + i));
	i++;
	}
	*(new_string + i) = '\0';
	return (new_string);
}
