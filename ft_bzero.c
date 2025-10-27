/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 07:58:55 by mfontain          #+#    #+#             */
/*   Updated: 2025/10/27 07:59:02 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	i;
	unsigned char *tab;
 
	i = 0;
	tab = (unsigned char *)s;
	while (i < n)
	{
		tab[i] = '\0';
		i++;
	}
}

/*#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned int	i;
	char	txt[10];
	int	j;
	
	i = 0;
	while(i < 10)
	{
		memset(txt, 'O', 9);
		txt[9] = '\0';
		
		ft_bzero(txt, i);
		printf("ft_bzero(txt, %d): ", i);
		j = 0;	
		while(j < 10)
		{	
			if (txt[j] == '\0')
				printf(".");
			else
				printf("%c", txt[j]);	
			j++;
		}
		printf("\n");
		i++;
	}
}*/
