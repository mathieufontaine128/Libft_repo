/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:06:40 by mfontain          #+#    #+#             */
/*   Updated: 2025/10/21 18:06:43 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
