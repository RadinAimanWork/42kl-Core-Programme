/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuhamma <rmuhamma@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 22:19:44 by rmuhamma          #+#    #+#             */
/*   Updated: 2024/06/26 22:26:54 by rmuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stddef.h>
#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && is_in_set(s1[start], set) == 1)
	{
		if (start == end)
			return (ft_strdup(""));
		start++;
	}
	while (end > 0 && is_in_set(s1[end], set))
		end--;
	return (ft_substr(s1, start, (end - start + 1)));
}
/*
int main()
{
	char	str[] = "Hello, world!";
	char	*result = ft_strtrim(str, "Helo!");
	printf("'%s'\n", result);
	free(result);
	return (0);
}
*/