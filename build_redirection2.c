/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_redirection2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <fpektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:40:33 by fpektas           #+#    #+#             */
/*   Updated: 2023/01/09 17:09:05 by fpektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	check_arger(char **cmd, int idx)
{
	if (is_redir(&cmd[0][idx]))
	{
		g_data.syntax_err = 1;
		return (0);
	}
	else if (cmd[0][idx] != ' ')
		return (1);
	return (0);
}
