/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_cleaning.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <fpektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:40:33 by fpektas           #+#    #+#             */
/*   Updated: 2023/01/09 17:10:08 by fpektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_heredoc_free(void)
{
	int	i;

	i = 0;
	if (g_data.heredoc)
	{
		while (i < g_data.count_her)
		{
			if (g_data.heredoc[i])
			{
				free(g_data.heredoc[i]);
				g_data.heredoc[i] = NULL;
			}
			i++;
		}
		free(g_data.heredoc);
		g_data.heredoc = NULL;
	}
}

int	ft_freeall(void *arg)
{
	t_arg	*tmp_arg;

	tmp_arg = (t_arg *)arg;
	if (g_data.infiles)
		free(g_data.infiles);
	g_data.infiles = NULL;
	if (g_data.outfiles)
		free(g_data.outfiles);
	g_data.outfiles = NULL;
	ft_heredoc_free();
	free(g_data.pids);
	g_data.pids = NULL;
	free(arg);
	arg = NULL;
	return (1);
}
