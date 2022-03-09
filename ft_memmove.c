/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhongka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:06:00 by kkhongka          #+#    #+#             */
/*   Updated: 2022/03/07 10:55:09 by kkhongka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_temp;
	const char	*src_temp;

	if (!dst || !src)
		return (dst);
	dst_temp = dst;
	src_temp = src;
	if (src_temp < dst_temp && dst_temp < src_temp + len)
	{
		dst_temp += (len - 1);
		src_temp += (len - 1);
		while (len--)
			*dst_temp-- = *src_temp--;
	}
	else
	{
		while (len--)
			*dst_temp++ = *src_temp++;
	}
	return (dst);
}
