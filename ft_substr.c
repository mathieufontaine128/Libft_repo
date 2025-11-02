#include <stdlib.h>
int	ft_strlen(char const *str)
{
	int	len;

	len = 0;
	while(str[len])
		len++;
	return(len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	if (!s)
		return(NULL);
	s_len = ft_strlen(s);
	if(start >= s_len)
	{
		substr = malloc(1);
		if (substr)
			substr[0] = '\0';
		return(substr);
	}
	if(len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc(len + 1);
	if(!substr)
		return(NULL);
	i = 0;
	while(i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return(substr);
}

#include <stdio.h>
int	main(void)
{
	//char tab[] = "hello les amis"
	printf("donc : %s",(ft_substr("hello les amis", 3, 7)));
}
