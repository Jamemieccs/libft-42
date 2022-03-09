/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhongka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:00:18 by kkhongka          #+#    #+#             */
/*   Updated: 2022/03/10 04:43:12 by kkhongka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ans;
	unsigned int	i;

	if (!s)
		return (NULL);
	ans = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ans)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ans[i] = f(i, s[i]);
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
