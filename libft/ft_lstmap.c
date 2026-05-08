/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gerramir <gerramir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 22:22:20 by gerramir          #+#    #+#             */
/*   Updated: 2026/05/01 19:30:05 by gerramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new2;
	void	*conte;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		conte = f(lst->content);
		new2 = ft_lstnew(conte);
		if (!new2)
		{
			del(conte);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, new2);
		lst = lst->next;
	}
	return (new);
}
