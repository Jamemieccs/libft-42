/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhongka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 16:26:05 by kkhongka          #+#    #+#             */
/*   Updated: 2022/03/03 17:51:12 by kkhongka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1) + 1;
	s2 = (char *)malloc(len);
	if (!s2)
		return (NULL);
	i = 0;
	while (i < len)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
