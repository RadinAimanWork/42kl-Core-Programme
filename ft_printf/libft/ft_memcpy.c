/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuhamma <rmuhamma@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 03:18:30 by rmuhamma          #+#    #+#             */
/*   Updated: 2024/06/27 02:15:02 by rmuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include <stddef.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (!dst && !src)
		return (0);
	if (src > dst)
		while (++i < n)
			((char *)dst)[i] = ((char *)src)[i];
	else
		while (n-- > 0)
			((char *)dst)[n] = ((char *)src)[n];
	return (dst);
}
/*
int main(void)
{
	// Example usage
	char src[] = "Hello, World!";
	char dst[20]; // Make sure dst has enough space

	ft_memcpy(dst, src, strlen(src) + 1); // +1 to copy the null terminator

	printf("Copied string: %s\n", dst);

	// Compare with standard library memcpy
	char std_dst[20];
	memcpy(std_dst, src, strlen(src) + 1);

	if (memcmp(dst, std_dst, strlen(src) + 1) == 0)
		printf("Both memcpy implementations produced the same result.\n");
	else
		printf("There's a difference between memcpy implementations.\n");

	return (0);
}
*/