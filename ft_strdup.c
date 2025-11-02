#include <stdlib.h>
//#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strdup(const char *src)
{
	char	*copy;
	size_t	len;
	
	copy = NULL;
	len = ft_strlen(src) + 1;
	copy = (char *) malloc(len * sizeof(char));
	if (!copy)
		return (NULL);
	len = 0;
	while(src[len])
	{
		copy[len] = src[len];
		len++;
	}
	copy[len] = '\0';
	return (copy);
}
/*#include <stdio.h>
int main()
{	
	char chaine[] = "une copie";
	char *copie;
	
	copie =  ft_strdup(chaine);

	printf("la copie contient :%s\n", copie);

	free(copie);
}*/
