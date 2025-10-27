void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char *tab;
 
	i = 0;
	tab = (unsigned char *)s;
	while (i < n)
	{
		tab[i] = (unsigned char)c;
		i++;
	}
	return (tab);
}

#include <unistd.h>

int	main(void)
{
	char	txt[6] = "Hello";
	ft_memset(txt, 'A', 2);
	write(1, txt, 6);
}
