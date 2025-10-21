int	ft_isprint(int c)
{
	if (c < ' ' || c > '~')
		return (c);
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	int	i;

	i = -2;
	while (i <= 127)
	{
		printf("pour i = %d ft_isprint i =  %d\n", i, ft_isprint(i));
		i++;
	}
}*/
