/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuhamma <rmuhamma@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 21:11:50 by rmuhamma          #+#    #+#             */
/*   Updated: 2024/06/27 01:49:27 by rmuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;
	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
} */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}
/*
int main(void)
{
	char dst[20];
	const char *source = "Hello, world!";

	// Example 1: Buffer large enough
	size_t copied = ft_strlcpy(dst, source, sizeof(dst));
	printf("Copied: %zu\n", copied);
	printf("Result: %s\n", dst);

	// Example 2: Buffer too small
	char small_dst[5];
	size_t copied_small = ft_strlcpy(small_dst, source, sizeof(small_dst));
	printf("Copied (small buffer): %zu\n", copied_small);
	printf("Result (small buffer): %s\n", small_dst);

	// Compare with standard library function
	size_t std_copied = strlcpy(dst, source, sizeof(dst));
	printf("strlcpy result: %s\n", dst);

	return (0);
} */