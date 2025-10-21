int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c>= 'a' && c <= 'z') || (c >= 0 && c <= 9))
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
		printf ("i = %d     ft_isalnum i = %d\n", i, ft_isalnum(i));
		i++;
	} 
}*/
