/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhongka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:44:28 by kkhongka          #+#    #+#             */
/*   Updated: 2022/03/07 11:38:36 by kkhongka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ans;
	size_t	a_i;
	size_t	s_i;

	if (!s1 || !s2)
		return (NULL);
	ans = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ans)
		return (NULL);
	a_i = 0;
	while (s1[a_i])
	{
		ans[a_i] = s1[a_i];
		a_i++;
	}
	s_i = 0;
	while (s2[s_i])
	{
		ans[a_i] = s2[s_i];
		s_i++;
		a_i++;
	}
	ans[a_i] = '\0';
	return (ans);
}
