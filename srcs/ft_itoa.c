/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhongka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 20:04:50 by kkhongka          #+#    #+#             */
/*   Updated: 2022/03/09 20:04:53 by kkhongka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	number_len(long num)
{
	size_t	len;

	len = 0;
	if (num < 0)
		len = 1;
	else if (num == 0)
		len = 1;
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*ans;
	long	num;
	size_t	len;

	num = (long)n;
	len = number_len(num);
	ans = (char *)malloc(sizeof(char) * (len + 1));
	if (!ans)
		return (NULL);
	if (n < 0)
	{
		ans[0] = '-';
		num *= -1;
	}
	else if (n == 0)
		ans[0] = '0';
	ans[len] = '\0';
	while (num)
	{
		ans[len - 1] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	return (ans);
}
