/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuhamma <rmuhamma@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 00:18:24 by rmuhamma          #+#    #+#             */
/*   Updated: 2024/06/26 23:20:43 by rmuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include <bsd/string.h>
#include "libft.h"

/*
Concatenate strings and guarantee to NUL-terminate the result
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*dst_ptr;
	const char	*src_ptr;
	int			length;
	int			n;

	dst_ptr = dst;
	src_ptr = src;
	n = dstsize;
	while (n-- != 0 && *dst_ptr != '\0')
		dst_ptr++;
	length = dst_ptr - dst;
	n = dstsize - length;
	if (n == 0)
		return (length + ft_strlen(src));
	while (*src_ptr != '\0')
	{
		if (n != 1)
		{
			*dst_ptr++ = *src_ptr;
			n--;
		}
		src_ptr++;
	}
	*dst_ptr = '\0';
	return (length + (src_ptr - src));
}

/*
int main()
{
	for (int i = 0; i < 20; i = i + 1)
	{
		char src1[30] = "poui\0c";
		char dst1[30] = "1\0 ";
		unsigned int result1 = ft_strlcat(dst1, src1, i);
		char src2[30] = "poui\0c";
		char dst2[30] = "1\0 ";
		unsigned int result2 = ft_strlcat(dst2, src2, i);
		printf("1: %s, %s, %u, %ld\n", src1, dst1, result1, strlen(dst1));
		printf("2: %s, %s, %u, %ld\n", src2, dst2, result2, strlen(dst2));
	}
} */