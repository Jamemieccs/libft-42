/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhongka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:35:57 by kkhongka          #+#    #+#             */
/*   Updated: 2022/03/07 10:50:33 by kkhongka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst_temp;
	const char	*src_temp;

	if (!dst || !src)
		return (dst);
	dst_temp = dst;
	src_temp = src;
	while (n-- > 0)
	{
		*dst_temp++ = *src_temp++;
	}
	return (dst);
}
