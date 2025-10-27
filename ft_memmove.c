/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:01:32 by mfontain          #+#    #+#             */
/*   Updated: 2025/10/27 10:34:43 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *src)
{
	int	len;
	while(src[len])
		len++;
	return(len);
}
void	*ft_memmove(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	int	destlen;
	int	srclen;
	unsigned char	*desttab;
	unsigned char	*srctab;


	destlen = ft_strlen(dest);
	srclen = ft_strlen((char *)src);
	desttab = (unsigned char *)dest;
	srctab = (unsigned char *)src;
	i = 0;
	if (destlen < srclen)
		return(desttab);
	else
	{
		while(i <= n)
		{	
			desttab[i] = srctab[i];
			i++;
		}
	}
	return(desttab);
	
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char txtd[] = "abcdefghi";
	//char txts[] = "12345678999";
	char txtd2[] = "abcdefghi";
	char txts2[] = "12345678999";

	printf("txtd = %s\n", txtd);	
	printf("txtd2 = %s\n", txtd);	
	//memmove(txtd,txts, 20);
	ft_memmove(txtd2, txts2, 20);
	printf("txtd apres = %s\n", txtd);
	printf("txtd2 apres = %s\n", txtd);
	
	
}
