/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuhamma <rmuhamma@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 22:28:28 by rmuhamma          #+#    #+#             */
/*   Updated: 2024/06/26 22:31:37 by rmuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stddef.h>
#include "libft.h"

int	count_substr(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 1;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (s[i + 1] != c)
				count++;
		}
		i++;
	}
	if (s[0] == c)
		count--;
	if (s[i - 1] == c)
		count--;
	return (count);
}

int	ft_delimstrl(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	return (len);
}

void	putstr(char *dest, char const *str, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	count = count_substr(s, c);
	str = malloc (sizeof(char *) * (count + 1));
	if (!str)
		return (NULL);
	while (i < ft_strlen(s) && j < count)
	{
		while (s[i] == c)
			i++;
		str[j] = malloc(sizeof(char) * (ft_delimstrl(s + i, c) + 1));
		if (!str[j])
			return (NULL);
		putstr(str[j++], s + i, ft_delimstrl(s + i, c));
		i += ft_delimstrl(s + i, c);
	}
	str[j] = NULL;
	return (str);
}
/*
int main()
{
    char	str[] = "Hello, world!";
    char	**result = ft_split(str, ' ');
    int		i;

    i = 0;
    while (result[i])
    {
        printf("'%s'\n", result[i]);
        i++;
    }
    return (0);
}
*/