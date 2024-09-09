/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuhamma <rmuhamma@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 10:06:04 by rmuhamma          #+#    #+#             */
/*   Updated: 2024/06/26 21:58:42 by rmuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include <stddef.h>
#include "libft.h"

/*
	DESCRIPTION :
	The memchr() function scans the initial n bytes of the memory area pointed
	to by s for the first instance of c.  Both c and the bytes of the memory 
	area pointed to by s are interpreted as unsigned char

	RETURN VALUE:
	The memchr() and memrchr() functions return a pointer to the matching byte
	or NULL if the character does not occur in the given memory area.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char) c)
			return (&((char *)s)[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	str[] = "Hello, world!";
	char	*result = ft_memchr(str, 'w', 13);
	if (result)
		printf("Found 'w' at index %ld\n", result - str);
	else
		printf("Did not find 'w'\n");

	// Compare with standard library memchr
	char	*std_result = memchr(str, 'w', 13);
	if (result == std_result)
		printf("Both memchr implementations produced the same result.\n");
	else
		printf("There's a difference between memchr implementations.\n");

	return (0);
}
*/