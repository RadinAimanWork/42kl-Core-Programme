/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuhamma <rmuhamma@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 04:04:17 by rmuhamma          #+#    #+#             */
/*   Updated: 2024/06/24 00:24:25 by rmuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*
// Another Implementation of ft_isalpha function
int ft_isalpha(int c)
{
	// Check if the character is a lowercase alphabet (ASCII range: 97 to 122)
	if (c >= 97 && c <= 122)
		return (1); // Return true (1) if it's a lowercase alphabet
	// Check if the character is an uppercase letter (ASCII range: 65 to 90)
	else if (c >= 65 && c <= 90)
		return (1); // Return true (1) if it's an uppercase alphabet
	return (0); // Return false (0) if it's not an alphabet
}

// Direct impelementation of ft_isalpha function by comparing characters directly
int ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1); // Return true (1) if it's an uppercase or lowercase alphabet
	return (0); // Return false (0) if it's not an alphabet
}

int main()
{
	char x;
	x = 'B';
	if (ft_isalpha(x))
	{
		printf("%c is an alphabet.\n", x);
	}
	else
	{
		printf("%c is not an alphabet.\n", x);
	}
	return (0);
}
*/
