/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuhamma <rmuhamma@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 08:08:04 by rmuhamma          #+#    #+#             */
/*   Updated: 2024/06/27 01:56:14 by rmuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	i;
	int	isnegative;

	result = 0;
	i = 0;
	isnegative = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-')
	{
		isnegative = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if (isnegative)
		result *= -1;
	return (result);
}
/*
int	main()
{
	const char	strToConvert[] = "12345";
	int	convertedValue = ft_atoi(strToConvert);

	printf("String to be Converted: %s\n", strToConvert);
	printf("Converted to Integer: %d\n", convertedValue);

	return (0);
}
*/