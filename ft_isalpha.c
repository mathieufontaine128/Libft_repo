int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c>= 'a' && c <= 'z'))
		return (c);
	return (0);
}
/*#include <stdio.h>
int	 main(void)
{
	int	i;

	i = -2;
	while (i < 127)
	{
		printf ("i = %d     ft_isalpha i = %d\n", i, ft_isalpha(i));
		i++;
	} 
}*/
