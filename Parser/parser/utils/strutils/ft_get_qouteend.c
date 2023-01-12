/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_qouteend.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <fpektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:40:33 by fpektas           #+#    #+#             */
/*   Updated: 2023/01/09 17:06:25 by fpektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../parser_utils.h"

int	ft_get_qoueteend(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			i += parser_quote_endidx(&str[i + 1], c);
		else if (str[i] == ' ')
			break ;
		else if (str[i])
			i++;
	}
	return (i);
}
