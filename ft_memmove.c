#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void	*dest, const void *src, size_t n)
{
	const void	*temp;

	if(!(temp = (const void *)malloc(n * sizeof(*temp))))
	return (NULL);
	temp = (const void *)ft_memcpy((void *)temp, src, n);
	return (ft_memcpy(dest, temp, n));
}
