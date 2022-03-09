/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhongka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:46:34 by kkhongka          #+#    #+#             */
/*   Updated: 2022/03/06 15:31:30 by kkhongka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		src_len;

	src_len = 0;
	if (src == NULL)
		return (src_len);
	d = dst;
	s = src;
	while (*s)
	{
		if (src_len + 1 < dstsize)
			*d++ = *s;
		src_len++;
		s++;
	}
	if (dstsize)
		*d = '\0';
	return (src_len);
}
