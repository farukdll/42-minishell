/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_pwd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <fpektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:42:01 by fpektas           #+#    #+#             */
/*   Updated: 2023/01/09 16:52:32 by fpektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell_builtins.h"

int	command_pwd(void)
{
	int		exit;
	char	*str;

	exit = 0;
	str = getcwd(NULL, 0);
	printf("%s\n", str);
	free(str);
	return (exit);
}
