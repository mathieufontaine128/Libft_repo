/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfontain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:39:28 by mfontain          #+#    #+#             */
/*   Updated: 2025/10/27 11:11:45 by mfontain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	len;

	i = 0;
	while(str[len])
		len++;
	return(len);
}
int	strlcpy(char *dest, const char *src, unsigned char size)
{
	int	buff;
	int	i;
	buff = ft_strlen(src);
	while (i < buff)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i+1] = '\0';

}
