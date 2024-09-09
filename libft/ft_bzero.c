/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuhamma <rmuhamma@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 09:19:03 by rmuhamma          #+#    #+#             */
/*   Updated: 2024/06/26 21:48:19 by rmuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <strings.h>
#include <stddef.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}

/*
int main()
{
	char *str = malloc(sizeof * (str) * (16));
	for(int i = 0; i < 15; i++)
		str[i] = '0';
	str[15] = '\0';
	ft_bzero(str, 5);
	printf("ft_bzero: ");
	for(int i = 0; i < 15; i++)
		printf("%i,", str[i]);
	printf("\n");
	free(str);
	str = malloc(sizeof * (str) * (16));
	for(int i = 0; i < 15; i++)
		str[i] = '0';
	str[15] = '\0';
	bzero(str, 5);
	printf("___bzero: ");
	for(int i = 0; i < 15; i++)
		printf("%i,", str[i]);
	printf("\n");
} */