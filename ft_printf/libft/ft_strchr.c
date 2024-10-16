/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuhamma <rmuhamma@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 09:37:19 by rmuhamma          #+#    #+#             */
/*   Updated: 2024/06/27 02:13:55 by rmuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
/*
	Return a pointer to the first occurrence of the character c in the string s,
	or NULL if the character is not found.  The terminating null byte is
	considered part of the string, so that if c is specified as '\0', these
	functions return a pointer to the terminator
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)*s == (unsigned char)c)
		return ((char *)s);
	return (0);
}

/*
int main()
{
	char *str = "Hello World";
	printf("1. ft_strchr %s\n", ft_strchr(str, 'W'));
	printf("2. ___strchr %s\n", strchr(str, 'W'));

	printf("1. ft_strchr %s\n", ft_strchr(str, '\0'));
	printf("2. ___strchr %s\n", strchr(str, '\0'));

	printf("1. ft_strchr %s\n", ft_strchr(str, '@'));
	printf("2. ___strchr %s\n", strchr(str, '@'));
} */