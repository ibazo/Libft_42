/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibazo <ibazo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:27:07 by ibazo             #+#    #+#             */
/*   Updated: 2024/03/20 11:56:47 by ibazo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static size_t	ft_wordcounter(char const *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static size_t	ft_lenforc(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			break ;
		i++;
	}
	return (i);
}

static void	ft_freedom(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		len;
	int		words;

	words = ft_wordcounter(s, c);
	arr = (char **)malloc((words + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s ++;
		len = ft_lenforc(s, c);
		arr[i] = (char *)malloc((len + 1) * sizeof(char));
		if (!arr[i])
			return (ft_freedom(arr), NULL);
		ft_strlcpy(arr[i], s, len + 1);
		s += len;
		i ++;
	}
	arr[words] = NULL;
	return (arr);
}

// int main(void)
// {
// 	char	**str;
// 	int		i;

// 	str = ft_split("", '\0');
// 	i = 0;
// 	while(str[i] != NULL)
// 	{
// 		printf("%s\n", str[i]);
// 		i++;
// 	}
// 	ft_freedom(str, i);
// 	printf("Number: %d\n", i);
// }
