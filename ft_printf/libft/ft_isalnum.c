/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuhamma <rmuhamma@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 09:13:24 by rmuhamma          #+#    #+#             */
/*   Updated: 2024/06/24 00:24:28 by rmuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
int main()
{
	char test_char; 
	test_char = '!';
	if (ft_isalnum(test_char))
		printf("%c is alphanumeric.\n", test_char);
	else
		printf("%c is not alphanumeric.\n", test_char);
	return (0);
}
*/
