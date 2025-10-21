/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:07:48 by mfontain          #+#    #+#             */
/*   Updated: 2025/10/21 18:07:51 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	i = 0; 
	while(str[i])
		i++;
	return (i);
}
/*#include <stdio.h>
int	main(void)
{
	printf("la longueur de hello est : %d", ft_strlen("hello"));
}*/
