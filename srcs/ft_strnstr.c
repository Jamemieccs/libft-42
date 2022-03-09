/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhongka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:21:18 by kkhongka          #+#    #+#             */
/*   Updated: 2022/02/27 13:10:30 by kkhongka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	j = 0;
	while (j < len && haystack[j])
	{
		i = 0;
		while (needle[i] && haystack[j] && needle[i] == haystack[j])
		{
			i++;
			j++;
			if (j > len)
				return (0);
		}
		if (!needle[i])
			return ((char *)&haystack[j - i]);
		j = j - i + 1;
	}
	return (0);
}
