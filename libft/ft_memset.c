/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuhamma <rmuhamma@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 19:39:02 by rmuhamma          #+#    #+#             */
/*   Updated: 2024/06/24 07:30:41 by rmuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
#include "libft.h"
/*
Set N bytes of S to C.
*/

void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)b)[i] = c;
		i++;
	}
	return (b);
}

/* 
int main()
{
	char *str = malloc(sizeof * (str) * (16));
	for(int i = 0; i < 15; i++)
		str[i] = '0';
	str[15] = '\0';
	str = ft_memset(str, '5', 5);
	str = ft_memset(str, '1', 3);
	printf("1. ft_memset %s\n", str);
	free(str);
	str = malloc(sizeof * (str) * (16));
	for(int i = 0; i < 15; i++)
		str[i] = '0';
	str[15] = '\0';
	str = memset(str, '5', 5);
	str = memset(str, '1', 3);
	printf("2. ___memset %s\n", str);
} */
