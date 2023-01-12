/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_echo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <fpektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:40:54 by fpektas           #+#    #+#             */
/*   Updated: 2023/01/09 16:51:49 by fpektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell_builtins.h"

int	command_echo(char **str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (str[++i] && !ft_strncmp(str[i], "-n", 3))
		check = 0;
	while (str[i])
		printf("%s ", str[i++]);
	if (check)
		printf("\n");
	return (0);
}
