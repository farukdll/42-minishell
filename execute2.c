/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <fpektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:40:33 by fpektas           #+#    #+#             */
/*   Updated: 2023/01/09 17:09:29 by fpektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	executer(t_syntax_tree *tree)
{
	if (tree->type == EXEC)
		voyage_on_tree(tree);
	else
	{
		voyage_on_tree(tree->left);
		if (tree->right->type == PIPE)
			executer(tree->right);
		else
			voyage_on_tree(tree->right);
	}
	catch_childs_exit();
}
