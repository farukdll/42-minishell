/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <fpektas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 02:04:32 by fpektas           #+#    #+#             */
/*   Updated: 2023/01/09 17:00:28 by fpektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*new;

	nlst = NULL;
	while (lst)
	{
		new = ft_lstnew (f(lst->content));
		if (!new)
		{
			ft_lstclear(&lst, del);
			return (0);
		}
		ft_lstadd_back(&nlst, new);
		lst = lst->next;
	}
	return (nlst);
}
