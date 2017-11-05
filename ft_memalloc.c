#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*new_me;

	if(!(new_me = malloc(size)))
		return (NULL);
	bzero(new_me, size);//is it necessary to do so or just *new_me = 0?
	return (new_me);
}
