/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhongka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:52:06 by kkhongka          #+#    #+#             */
/*   Updated: 2022/03/07 11:25:47 by kkhongka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ans;
	size_t	s_i;
	size_t	a_i;

	if (start > ft_strlen(s))
		ans = (char *)malloc(sizeof(char) * 1);
	else if ((start + len) > ft_strlen(s))
		ans = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else
		ans = (char *)malloc(sizeof(char) * (len + 1));
	if (!ans || !s)
		return (NULL);
	s_i = start;
	a_i = 0;
	while (s_i < ft_strlen(s) && a_i < len)
		ans[a_i++] = s[s_i++];
	ans[a_i] = '\0';
	return (ans);
}
