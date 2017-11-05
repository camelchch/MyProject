#include "libft.h"

void	*ft_memcpy(void	*dest, const void *src, size_t n)
{
	char		*byte_dest;
	const char	*byte_src;

	byte_dest = dest;
	byte_src = src;
	while(n-- > 0)
		*byte_dest++ = (char)*byte_src++;
	return (dest);
}
