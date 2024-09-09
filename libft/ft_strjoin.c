/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuhamma <rmuhamma@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 22:16:36 by rmuhamma          #+#    #+#             */
/*   Updated: 2024/06/26 22:18:25 by rmuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*concatenate;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	concatenate = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!concatenate)
		return (NULL);
	while (s1[i])
	{
		concatenate[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		concatenate[i] = s2[j];
		i++;
		j++;
	}
	concatenate[i] = '\0';
	return (concatenate);
}

/*
int main()
{
    char	str1[] = "Hello, ";
    char	str2[] = "world!";
    char	*result = ft_strjoin(str1, str2);
    printf("'%s'\n", result);
    free(result);
    return (0);
}
*/
