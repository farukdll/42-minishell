/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <fpektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:40:33 by fpektas           #+#    #+#             */
/*   Updated: 2023/01/09 17:10:37 by fpektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_redirection	*ft_lstlast_redir(t_redirection *redir)
{
	if (redir == NULL)
		return (0);
	while (redir->next != NULL)
		redir = redir->next;
	return (redir);
}

void	ft_lstadd_back_redir(t_redirection **redir, t_redirection *new)
{
	if (redir && new)
	{
		if (!*redir)
			*redir = new;
		else
			ft_lstlast_redir(*redir)-> next = new;
	}
}
