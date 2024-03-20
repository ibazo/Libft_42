/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibazo <ibazo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:04:59 by ibazo             #+#    #+#             */
/*   Updated: 2024/03/20 11:56:45 by ibazo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static	char	*ft_miniitoa(long n, int t)
{
	char	*numbers;

	numbers = (char *)ft_calloc((t + 1), sizeof(char));
	if (!numbers)
		return (NULL);
	if (n < 0)
		n *= -1;
	numbers[0] = '-';
	while (n > 0)
	{
		numbers[t - 1] = n % 10 + '0';
		t --;
		n = n / 10;
	}
	return (numbers);
}

char	*ft_itoa(int n)
{
	int		t;
	int		n2;

	if (n == 0)
		return (ft_strdup("0"));
	t = 0;
	n2 = n;
	while (n2)
	{
		n2 = n2 / 10;
		t ++;
	}
	return (ft_miniitoa(n, t + (n < 0)));
}
