/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibazo <ibazo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:58:58 by ibazo             #+#    #+#             */
/*   Updated: 2024/03/20 11:57:14 by ibazo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	t;

	i = 0;
	if (needle[i] == '\0')
	{
		return ((char *)&haystack[i]);
	}
	while (haystack[i] && i < len)
	{
		t = 0;
		while (haystack[i + t] == needle[t] && i + t < len)
		{
			t ++;
			if (!needle[t])
			{
				return ((char *)&haystack[i]);
			}
		}
		i ++;
	}
	return (NULL);
}
