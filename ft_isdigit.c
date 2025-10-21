int	ft_isdigit(int c)
{
	if (c >= 0 && c <= 9)
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
		printf("pour i = %d ft_isdigit i =  %d\n", i, ft_isdigit(i));
		i++;
	}
}*/
