#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if(n == 0 )
		return (0);
	while(*s1 && *s2 && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	if(*s1 > *s2)
		return (1);
	else if(*s1 == *s2)
		return (0);
	else
		return (-1);
}
