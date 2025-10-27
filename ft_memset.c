/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 07:59:21 by mfontain          #+#    #+#             */
/*   Updated: 2025/10/27 07:59:27 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char *tab;
 
	i = 0;
	tab = (unsigned char *)s;
	while (i < n)
	{
		tab[i] = (unsigned char)c;
		i++;
	}
	return (tab);
}

#include <unistd.h>

int	main(void)
{
	char	txt[6] = "Hello";
	ft_memset(txt, 'A', 2);
	write(1, txt, 6);
}
