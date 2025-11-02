/*void	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while(s[i])
		i++;
	while(i >= 0)
	{
		if (s[i] == (char)c)
			return((char *)&s[i]);
		i--;
	}
	return(0);
}*/

void	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while(s[i])
		i++;
	if (s[i] == '\0')
		return((char *)&s[i]);
	i--;
	while(s[i] != (char)c)
	{
		if (s[i] == '\0')
			return((char *)&s[i]);
		i--;
	}
	return(0);
}
#include <stdio.h>
int	main(void)
{
	if (ft_strrchr("y a t il un u dans cette chaine", 'u') != NULL)
		printf("oui");
	else
		printf("non");
}
