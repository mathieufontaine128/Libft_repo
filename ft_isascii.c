int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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
		printf("pour i = %d ft_isascii i =  %d\n", i, ft_isascii(i));
		i++;
	}
}*/
