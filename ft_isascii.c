/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:06:56 by mfontain          #+#    #+#             */
/*   Updated: 2025/10/21 18:07:11 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (c);
	return (0);
}
/*#include <stdio.h>
int	main(void)
{
	int	i;

	i = -2;
	while (i <= 127)
	{
		printf("pour i = %d ft_isascii i =  %d\n", i, ft_isascii(i));
		i++;
	}
}*/
