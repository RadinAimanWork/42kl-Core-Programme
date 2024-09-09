/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuhamma <rmuhamma@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 09:52:23 by rmuhamma          #+#    #+#             */
/*   Updated: 2024/06/26 22:25:36 by rmuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include <stddef.h>
#include "libft.h"

/*
Compare N characters of S1 and S2
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n > 1 && *s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*
int	main()
{
	char	str1[] = "Hello, world!";
	char	str2[] = "Hello, world!";
	int	result = ft_strncmp(str1, str2, 13);
	if (result == 0)
		printf("'%s' and '%s' are the same\n", str1, str2);
	else
		printf("'%s' and '%s' are different\n", str1, str2);

	return (0);
}
*/