/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuhamma <rmuhamma@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 03:27:19 by rmuhamma          #+#    #+#             */
/*   Updated: 2024/06/27 02:28:23 by rmuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*buffer;
	int		area;

	if (size != 0 && nmemb > (UINT_MAX / size))
		return (NULL);
	area = (nmemb * size);
	buffer = (char *)malloc(sizeof(char) * area);
	if (!buffer)
		return (NULL);
	while (--area >= 0)
		buffer[area] = '\0';
	return ((void *)buffer);
}

/*
#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	target_bytes;

	if (size != 0 && nmemb > (UINT_MAX / size))
		return (NULL);
	target_bytes = nmemb * size;
	ptr = malloc(target_bytes);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, target_bytes);
	return (ptr);
}
*/