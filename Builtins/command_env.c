/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_env.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <fpektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:41:16 by fpektas           #+#    #+#             */
/*   Updated: 2023/01/09 16:52:00 by fpektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell_builtins.h"

int	command_env(char **env)
{
	int	exit;

	print_line(env);
	exit = 0;
	return (exit);
}
