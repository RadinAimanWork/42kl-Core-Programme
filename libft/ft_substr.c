/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuhamma <rmuhamma@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 22:11:06 by rmuhamma          #+#    #+#             */
/*   Updated: 2024/06/26 22:20:45 by rmuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>
#include <stddef.h>
#include "libft.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{
	size_t	substring_length;
	size_t	finish;
	char	*dest;

	if (!s)
		return (0);
	substring_length = ft_strlen(s);
	finish = 0;
	if (start < substring_length)
		finish = substring_length - start;
	if (finish > len)
		finish = len;
	dest = malloc(sizeof(char) * (finish + 1));
	if (!dest)
		return (0);
	ft_strlcpy (dest, s + start, finish + 1);
	return (dest);
}

/*
int main()
{
	char	str[] = "Hello, world!";
	char	*result = ft_substr(str, 7, 5);
	printf("'%s'\n", result);
	free(result);
	return (0);
}
*/