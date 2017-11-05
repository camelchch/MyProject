#include "libft.h"

int		ft_strequ(char *s1 const, char *s2 const)
{
	while(*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if(*s1 > *s2)
		return (1);
	else if(*s1 == *s2)
		return (0);
	else
		return (-1);
}
