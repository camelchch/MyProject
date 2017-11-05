#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*cp_big;
	const char	*cp_little;

	if(!*little)
		return ((char *)big);
	while(*big && len > 1)
	{
		while(*big && *big != *little && len > 1)
		{
			big++;
			len--;
		}
		cp_big = big;
		cp_little = little;
		while(*cp_big && *cp_little && *cp_big == *cp_little)
		{
			cp_big++;
			cp_little++;
		}
		if(!*cp_little)
			return ((char *)little);
		big++;
		len--;
	}
	return (NULL);
}
