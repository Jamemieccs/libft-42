/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhongka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 20:03:52 by kkhongka          #+#    #+#             */
/*   Updated: 2022/03/09 20:09:16 by kkhongka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_word(char const *s, char c)
{
	size_t	flag;
	size_t	count;

	flag = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			flag++;
			count++;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (count);
}

char	**free_word(char **ans)
{
	int	i;

	i = 0;
	while (ans[i])
		free(ans[i++]);
	free(ans);
	return (NULL);
}

size_t	start_word(char const *s, char c, size_t before)
{
	size_t	i;

	i = 0;
	if (before == 0 && s[i] != c)
		return (0);
	while (s[before + i] != c && s[before + i])
		i++;
	if (before == 0 && (!s[i] || !s[i + 1]))
		return (0);
	while (s[before + i] == c && s[before + i])
		i++;
	return (before + i);
}

char	*slice_word(char const *s, char c, size_t start)
{
	size_t	len;
	size_t	i;
	char	*word;

	len = 0;
	i = 0;
	while (s[start + len] != c && s[start + len])
		len++;
	word = (char *)malloc(sizeof(char) * len + 1);
	if (!word || !s)
		return (NULL);
	while (i < len)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**ans;
	size_t	num;
	size_t	i;
	size_t	start;

	if (!s)
		return (NULL);
	num = count_word(s, c);
	ans = (char **)malloc(sizeof(char *) * (num + 1));
	if (!ans)
		return (NULL);
	i = 0;
	start = 0;
	while (i < num)
	{
		start = start_word(s, c, start) + 1;
		ans[i] = slice_word(s, c, (start - 1));
		if (!ans[i])
			return (free_word(ans));
		i++;
	}
	ans[i] = 0;
	return (ans);
}
