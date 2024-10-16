/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuhamma <rmuhamma@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 09:46:10 by rmuhamma          #+#    #+#             */
/*   Updated: 2024/06/26 22:23:48 by rmuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"
/*
	Return a pointer to the last occurrence of the character c in the string s,
	or NULL if the character is not found.  The terminating null byte is
	considered part of the string, so that if c is specified as '\0', these
	functions return a pointer to the terminator
*/

char	*ft_strrchr(const char *s, int c)
{
	char	*s_ptr;

	s_ptr = 0;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			s_ptr = (char *)s;
		s++;
	}
	if ((unsigned char)*s == (unsigned char)c)
		s_ptr = (char *)s;
	return (s_ptr);
}

/*
int main()
{
	char *str = "Hello World";
	printf("1. ft_strchr %s\n", ft_strrchr(str, 'o'));
	printf("2. ___strchr %s\n", strrchr(str, 'o'));

	printf("1. ft_strchr %s\n", ft_strrchr(str, '\0'));
	printf("2. ___strchr %s\n", strrchr(str, '\0'));

	printf("1. ft_strchr %s\n", ft_strrchr(str, '@'));
	printf("2. ___strchr %s\n", strrchr(str, '@'));
} */