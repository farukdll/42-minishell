/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <fpektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 02:04:32 by fpektas           #+#    #+#             */
/*   Updated: 2023/01/09 17:01:18 by fpektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t	i;

	if (dest == src || !num)
		return (dest);
	if (dest < src)
	{
		i = 0;
		while (i < num)
		{
			*((char *)dest + i) = *((char *)src + i);
			i++;
		}
	}
	else
	{
		while (num)
		{
			*((char *)(dest + num) - 1) = *((char *)src + num - 1);
			num--;
		}	
	}
	return (dest);
}
