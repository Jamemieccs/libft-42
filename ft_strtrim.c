/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhongka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:49:51 by kkhongka          #+#    #+#             */
/*   Updated: 2022/03/07 11:41:21 by kkhongka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	is_trim(char const *set, char c)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ans;
	size_t	start;
	size_t	len;
	size_t	i;

	if (!s1)
		return (NULL);
	start = 0;
	while (s1[start] && is_trim(set, s1[start]))
		start++;
	len = ft_strlen(s1);
	while (len > start && is_trim(set, s1[len - 1]))
		len--;
	ans = (char *)malloc(len - start + 1);
	if (!ans)
		return (NULL);
	i = 0;
	while (start < len)
		ans[i++] = s1[start++];
	ans[i] = '\0';
	return (ans);
}
