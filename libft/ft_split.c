/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macassag <macassag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:48:06 by macassag          #+#    #+#             */
/*   Updated: 2023/11/18 10:03:53 by macassag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_tab(char **sstr)
{
	size_t	j;

	j = 0;
	while (sstr[j])
		free(sstr[j++]);
	free(sstr);
}

static size_t	skip_c(const char *s, char c, size_t j)
{
	while (s[j] == c)
		j++;
	return (j);
}

static size_t	count_array(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i = skip_c(s, c, i);
		if ((s[i - 1] == c || s[0]) && s[i])
		{			
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

static char	**create_tab(const char *s, size_t count, char c)
{
	char	**sstr;
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	sstr = (char **) ft_calloc(count + 1, sizeof(char *));
	if (!sstr)
		return (NULL);
	while (i < count)
	{
		if (s[j] == c)
			j = skip_c(s, c, j);
		size = j;
		while (s[j] != c && s[j])
			j++;
		sstr[i] = (char *) ft_calloc((j - size + 1), sizeof(char));
		if (!sstr[i++])
		{
			free_tab(sstr);
			return (NULL);
		}
	}
	return (sstr);
}

char	**ft_split(char const *s, char c)
{
	char	**sstr;
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	count;

	i = 0;
	j = 0;
	count = count_array(s, c);
	sstr = create_tab(s, count, c);
	if (!sstr)
		return (NULL);
	while (i < count)
	{
		k = 0;
		while (s[j] == c && s[j])
			j++;
		while (s[j] != c && s[j])
			sstr[i][k++] = s[j++];
		i++;
	}
	return (sstr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s;
// 	char	**result;
// 	int	i;

// 	i = 0;
// 	s = "\0aa\0bbb";
// 	result = ft_split(s, '\0');
// 	while (i < 5)
// 		printf("%s", result[i++]);
// 	return (0);
// }
