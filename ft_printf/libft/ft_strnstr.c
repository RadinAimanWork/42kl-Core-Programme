/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuhamma <rmuhamma@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 10:48:50 by rmuhamma          #+#    #+#             */
/*   Updated: 2024/06/27 02:06:36 by rmuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include <stddef.h>
#include "libft.h"

/*
Locates the first occurrence of the null-terminated string needle in the string
haystack, where not more than len characters are searched
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if ((!haystack || !needle) && !len)
		return (NULL);
	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char str1[] = "Hello, world!";
	char str2[] = "world";
	char *result = ft_strnstr(str1, str2, 13);
	if (result)
		printf("'%s' found in '%s' at index %ld\n", str2, str1, result - str1);
	else
		printf("'%s' not found in '%s'\n", str2, str1);

	return (0);
}
*/