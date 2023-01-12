/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clearquotes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <fpektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:40:33 by fpektas           #+#    #+#             */
/*   Updated: 2023/01/09 17:05:59 by fpektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../parser_utils.h"

char	*ft_str_clearquotes(const char *str, char *ptr)
{
	int		i;
	int		n;
	char	c;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] == '"' || str[i] == '\'')
		{
			c = str[i];
			while (str[++i] && str[i] != c)
				ptr[n++] = str[i];
		}
		else
			ptr[n++] = str[i++];
	}
	return (ptr);
}
