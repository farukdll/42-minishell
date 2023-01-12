/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <fpektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:43:32 by fpektas           #+#    #+#             */
/*   Updated: 2023/01/09 16:53:50 by fpektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell_builtins.h"

int	free_two_str(char **s1, char **s2)
{
	if (*s1)
		free(*s1);
	if (*s2)
		free(*s2);
	return (-1);
}

void	free_char_matrix(char ***matrix)
{
	int	i;

	i = -1;
	while (matrix[0][++i])
		ft_bzero(matrix[0][i], ft_strlen(matrix[0][i]));
	i = -1;
	while (matrix[0][++i])
		free(matrix[0][i]);
	free(matrix[0]);
}
