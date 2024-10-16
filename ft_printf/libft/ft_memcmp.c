/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuhamma <rmuhamma@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 10:24:25 by rmuhamma          #+#    #+#             */
/*   Updated: 2024/06/27 02:09:31 by rmuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include <stddef.h>
#include "libft.h"

/*
	Compare N bytes of S1 and S2
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (n--)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

/*
int main()
{
	for (int i = 0; i < 8; i += 1)
	{
		char src1[30] = "t\0";
		char dest1[30] = "t\200";
		int result1 = ft_memcmp(dest1, src1, i);
		char src2[30] = "t\0";
		char dest2[30] = "t\200";
		int result2 = memcmp(dest2, src2, i);
		printf("%d: %s, %s, %d, %ld\n", i, src1, dest1, result1, strlen(dest1));
		printf("%d: %s, %s, %d, %ld\n", i, src2, dest2, result2, strlen(dest2));

	}
} */