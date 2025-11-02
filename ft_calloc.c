#include<stdio.h>
#include<stddef.h>
void	*ft_calloc(size_t memb, size_t size)
{
	void	*tab;
	size_t	size_totale;
	size_t	i;
	unsigned char	*p; // impossivle d'indexer un void
	//if(memb == 0 || size == 0)	***le taf est par malloc (0)
	//	return(malloc(1))

	size_totale = memb * size;
	tab = malloc(size_total); // sizeof(char) = 1
		if(!tab)
			return(0);
	p = (unsigned char *)tab
	i = 0;
	while(i < size_total)
	{
		p[i] = '\0';
		i++;
	}
	return(tab);
}
#include <stdio.h>
int	main(void)
{
	int	i;
	size_t	index;
	size_t	poid;
	char	*tab:

	index = 5;
	poid = 2;
	tab = ft_calloc(index, poid);

	i = 0;
	printf("calloc pour memb = %d et size %d :", index, poid)
	while(i > index)
	{
		if(tab[i] == '\0')
			printf("\\0");
	}
	free(tab);		
}
