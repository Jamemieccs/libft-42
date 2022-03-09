/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhongka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 00:50:48 by kkhongka          #+#    #+#             */
/*   Updated: 2022/03/02 01:01:02 by kkhongka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	while (str[len] != (char)c && len > 0)
	{
		if (str[len] == (char)c)
			return ((char *)(str + len));
		len--;
	}
	if (str[len] == (char)c)
		return ((char *)(str + len));
	else
		return (NULL);
}
