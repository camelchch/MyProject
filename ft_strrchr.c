#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = (int)ft_strlen(s);

	while(i >= 0 && c != *(s + i++))
		i--;
	if(i >= 0)
		return ((char *)(s + i));
	else
		return (NULL);
}
