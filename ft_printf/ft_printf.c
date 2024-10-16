/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuhamma <rmuhamma@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:07:14 by rmuhamma          #+#    #+#             */
/*   Updated: 2024/08/27 22:48:05 by rmuhamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include <stdbool.h>

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (!str)
		str = "(null)";
	while (*str)
		count += write(1, str++, 1);
	return (count);
}
// Count number of digits, Calculate padding needed,
// Write negative sign if needed, and Write Number

int	ft_putnbr(int n, int width, char padding, bool left_align)
{
	char	c;
	int		count;
	int		num_digits;
	int		temp;
	bool	is_negative;

	count = 0;
	num_digits = 0;
	temp = n;
	is_negative = (n < 0);
	
	if (n == 0)
		num_digits = 1;
	while (temp != 0)
	{
		temp /= 10;
		num_digits++;
	}

	int padding_count;
	padding_count = width - num_digits - (is_negative ? 1 : 0);
	if (!left_align)
	{
		int i = 0;
		while (i < padding_count)
		{
			count += write(1, &padding, 1);
			i++;
		}
	}

	if (is_negative)
	{
		count += write(1, "-", 1);
		n = -n;
	}

	if (n == 0)
		count += write(1, "0", 1);
	else
	{
		if (n > 9)
			count += ft_putnbr(n / 10, 0, padding, false);
		c = (n % 10) + '0';
		count += write(1, &c, 1);
	}

	if (left_align)
	{
		int i = 0;
		while (i < padding_count)
		{
			count += write(1, " ", 1);
			i++;
		}
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		width;
	char	padding;
	bool	left_align;

	count = 0;
	width = 0;
	padding = ' ';
	left_align = false;

	if (!format)
		return (0);

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			// Reset flags for each new format specifier
			width = 0;
			padding = ' ';
			left_align = false;

			// Process flags
			if (*format == '-')
			{
				left_align = true;
				format++;
			}
			if (*format == '0')
			{
				padding = '0';
				format++;
			}

			// Process width
			while (*format >= '0' && *format <= '9')
			{
				width = width * 10 + (*format - '0');
				format++;
			}

			if (*format == 'd')
				count += ft_putnbr(va_arg(args, int), width, padding, left_align);
			else if (*format == 'c')
				count += ft_putchar(va_arg(args, int));
			else if (*format == 's')
				count += ft_putstr(va_arg(args, char *));
			else if (*format == '%')
				count += write(1, "%", 1);
			else if (*format) // Unsupported specifier
				count += write(1, format, 1);
		}
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (count);
}
// Example usage of ft_printf with flags and width
int main()
{
	int printed_chars;

	printed_chars = ft_printf("Hello, %s!\n", "world");
	ft_printf("Printed characters: %d\n", printed_chars);

	printed_chars = ft_printf("Left-aligned with width 10: %-10d!\n", 42);
	ft_printf("Printed characters: %d\n", printed_chars);

	printed_chars = ft_printf("Padded with zeros width 10: %010d!\n", 42);
	ft_printf("Printed characters: %d\n", printed_chars);

	printed_chars = ft_printf("Percent sign: %%\n");
	ft_printf("Printed characters: %d\n", printed_chars);

	return (0);
}
