#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*cp_haystack;
	const char	*cp_needle;

	while(*haystack)
	{
		while(*haystack && *needle && *haystack != *needle)
			haystack++;
		cp_haystack = haystack;
		cp_needle = needle;
		while(*cp_haystack && *cp_needle && *cp_haystack == *cp_needle)
		{
			cp_haystack++;
			cp_needle++;
		}
		if(!*cp_needle)
			return ((char *)haystack);
			haystack++;
	}
	return (NULL);
}
