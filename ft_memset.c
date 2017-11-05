#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*set_byte;

	set_byte = s;
	while(n-- > 0)
		*set_byte++ = c;
	return (s);
}

