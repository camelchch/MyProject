#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int		neg_or_pos;
	int		result;

	neg_or_pos = 1;
	result = 0;
	while(1 <=*nptr && *nptr <= 31)
		nptr++;
	if(*nptr == '-' || *nptr == '+')
	{
		if(*nptr == '-')
			neg_or_pos = -1;
		nptr++;
	}
	while(*nptr && *nptr >= '0' && *nptr <= '9')
		result =result*10 + *nptr++ - '0';
	result = result * neg_or_pos;
	return (result);
}


