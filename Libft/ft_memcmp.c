/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <fpektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 02:04:32 by fpektas           #+#    #+#             */
/*   Updated: 2023/01/09 17:00:51 by fpektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	idx;

	idx = 0;
	while (idx < n)
	{
		if (*((unsigned char *)s1 + idx) == *((unsigned char *)s2 + idx))
			idx++;
		else
			return ((*((unsigned char *)s1 + idx))
				- *((unsigned char *)s2 + idx));
	}
	return (0);
}
