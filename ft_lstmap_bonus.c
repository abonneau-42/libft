/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonneau <abonneau@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:33:04 by abonneau          #+#    #+#             */
/*   Updated: 2024/11/18 15:33:06 by abonneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*tmp_new;
	void	*content;

	newlst = NULL;
	if (!f || !del)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		tmp_new = ft_lstnew(content);
		if (!tmp_new)
		{
			del(content);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, tmp_new);
		lst = lst->next;
	}
	return (newlst);
}
