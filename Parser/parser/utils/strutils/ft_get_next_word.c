/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_word.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <fpektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:40:33 by fpektas           #+#    #+#             */
/*   Updated: 2023/01/09 17:06:13 by fpektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../parser_utils.h"

size_t	ft_wordlen(char *str, char **arr)
{
	int		i;
	size_t	len;

	i = 0;
	len = 0;
	if (*str == '"' || *str == '\'')
		i = parser_quote_endidx(str + 1, *str);
	while (str[i] && str[i] == ' ')
		i++;
	while (str[i] && str[i] != ' ' && parser_array_cmp(&str[i], arr) == -1)
	{
		if (str[i] == '"' || str[i] == '\'')
		{
			i += parser_quote_endidx(&str[i + 1], str[i]);
			len += parser_quote_endidx(&str[i + 1], str[i]);
		}
		else
			i++;
	}
	return (i);
}

char	*ft_get_next_word(char *str, char **arr)
{
	int		i;
	int		n;
	char	*tmp;

	tmp = malloc(sizeof(char) * ft_wordlen(str, arr) + 1);
	i = 0;
	n = 0;
	if (*str == '"' || *str == '\'')
		i = parser_quote_endidx(str + 1,*str) + 1;
	while (str[i] && str[i] == ' ')
		i++;
	while (str[i] && str[i] != ' ' && parser_array_cmp(&str[i], arr) == -1)
		tmp[n++] = str[i++];
	tmp[n] = '\0';
	return (tmp);
}
