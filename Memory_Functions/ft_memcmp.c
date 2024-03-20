/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibazo <ibazo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:56:59 by ibazo             #+#    #+#             */
/*   Updated: 2024/03/20 11:56:26 by ibazo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s1;
	i = 0;
	if (n > 0)
	{
		while (i < n && n > 0 && str[i] == ((unsigned char *)s2)[i])
		{
			if ((str[i] && str[i] == '\0') || i == n - 1)
				return (0);
			i ++;
		}
		return (str[i] - ((unsigned char *)s2)[i]);
	}
	return (0);
}
