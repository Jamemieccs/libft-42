/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhongka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 03:47:54 by kkhongka          #+#    #+#             */
/*   Updated: 2022/03/10 04:02:30 by kkhongka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*buff;

	if (!new)
		return ;
	buff = ft_lstlast(*lst);
	if (!buff)
	{
		*lst = new;
		return ;
	}
	buff->next = new;
}
