int	ft_strlen(char *str)
{
	int	i;
	i = 0; 
	while(str[i])
		i++;
	return (i);
}
/*#include <stdio.h>
int	main(void)
{
	printf("la longueur de hello est : %d", ft_strlen("hello"));
}*/
