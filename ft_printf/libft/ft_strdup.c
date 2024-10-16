/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuhamma <rmuhamma@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 21:40:57 by rmuhamma          #+#    #+#             */
/*   Updated: 2024/06/26 23:29:35 by rmuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s1) + 1;
	dup = (char *)malloc(len * sizeof(char));
	if (dup)
		ft_memcpy(dup, s1, len);
	return (dup);
}
/*
int	main()
{
	char	str[] = "Hello, world!";
	char	*dup = ft_strdup(str);
	if (dup)
		printf("'%s' duplicated to '%s'\n", str, dup);
	else
		printf("'%s' failed to duplicate\n", str);
	free(dup);

	return (0);
}
*/