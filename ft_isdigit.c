/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:07:23 by mfontain          #+#    #+#             */
/*   Updated: 2025/10/21 18:07:26 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 0 && c <= 9)
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
		printf("pour i = %d ft_isdigit i =  %d\n", i, ft_isdigit(i));
		i++;
	}
}*/
