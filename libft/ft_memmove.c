/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuhamma <rmuhamma@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 09:11:54 by rmuhamma          #+#    #+#             */
/*   Updated: 2024/06/24 09:19:53 by rmuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

/*
Copy N bytes of SRC to DST, guaranteeing correct behavior for overlapping 
strings.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (0);
	return (ft_memcpy(dst, src, len));
}

/* 
int main()
{
	char *src = malloc(sizeof * (src) * (16));
	char *dst = &src[1];
	for(int i = 0; i < 15; i++)
		src[i] = i + '0';
	src[15] = '\0';
	dst = ft_memmove(dst, src, 5);
	printf("ft_memmove: ");
	for(int i = 0; i < 14; i++)
		printf("%c", dst[i]);
	printf("\n");
	free(src);
	src = malloc(sizeof * (src) * (16));
	dst = &src[1];
	for(int i = 0; i < 15; i++)
		src[i] = i + '0';
	src[15] = '\0';
	dst = memmove(dst, src, 5);
	printf("___memmove: ");
	for(int i = 0; i < 14; i++)
		printf("%c", dst[i]);
	printf("\n");
} */