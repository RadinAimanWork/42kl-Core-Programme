/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuhamma <rmuhamma@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:55:45 by rmuhamma          #+#    #+#             */
/*   Updated: 2024/06/24 00:24:22 by rmuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	test_char1; // Test characters
	char	test_char2; // Test characters
	test_char1 = '5';
	test_char2 = 'a';
	// Test ft_isdigit function with test characters
	printf("Testing ft_isdigit function:\n");
	if (ft_isdigit(test_char1))
		printf("Character '%c' is a digit\n", test_char1);
	else
		printf("Character '%c' is not a digit\n", test_char1);
	if (ft_isdigit(test_char2))
		printf("Character '%c' is a digit\n", test_char2);
	else
		printf("Character '%c' is not a digit\n", test_char2);
	return (0);
}
*/
