//#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *txt;
	size_t	i;

	txt = (const unsigned char *)s;
	i = 0;
	while(i < n)
		{
			if (txt[i] == (unsigned char)c)
				return((void *)&txt[i]);
			i++;
		}
	return(0);
}
/*#include <stdio.h>
int	main(void)
{
	if(ft_memchr("un deux trois", 'o', 5) != 0)
		printf("oui");
	else
		printf("non");
}*/
