/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuhamma <rmuhamma@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 22:37:09 by rmuhamma          #+#    #+#             */
/*   Updated: 2024/06/26 23:53:10 by rmuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int main() 
{
    char c = 'a';
    if (ft_isascii(c))
        printf("%c is an ASCII character.\n", c);
    else 
        printf("%c is not an ASCII character.\n", c);
    return (0);
}
*/