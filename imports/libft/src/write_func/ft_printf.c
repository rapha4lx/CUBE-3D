/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rferro-d <rferro-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:24:33 by rferro-d          #+#    #+#             */
/*   Updated: 2025/02/20 19:17:22 by rferro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static int	ft_print_pointer(void *ptr, char *base)
{
	int	count;

	count = 0;
	if (ptr == 0)
		return (ft_putstr("(nil)"));
	count += ft_putstr("0x");
	count += ft_putnbr_base((unsigned long int)ptr, base);
	return (count);
}

static int	call_func(const char **format, ...)
{
	va_list		ptr;
	int			count;
	t_func_ptr	func;

	va_start(ptr, format);
	count = 0;
	func = va_arg(ptr, t_func_ptr);
	count = func(va_arg(ptr, void *));
	(*format)++;
	va_end(ptr);
	return (count);
}

static int	ft_choice(const char **format, va_list ptr)
{
	int	count;

	count = 0;
	if (**format == '%' && *((*format) + 1) == 'c')
		count = call_func(format, ft_putchar, va_arg(ptr, int));
	else if (**format == '%' && *((*format) + 1) == 'u')
		count = call_func(format, ft_putnbr_unsigned, va_arg(ptr,
					unsigned int));
	else if (**format == '%' && *((*format) + 1) == 'x')
		count = call_func(format, ft_putnbr_unsigned, va_arg(ptr,
					unsigned int), "0123456789abcdef");
	else if (**format == '%' && *((*format) + 1) == 'X')
		count = call_func(format, ft_putnbr_unsigned_base, va_arg(ptr,
					unsigned int), "0123456789ABCDEF");
	else if (**format == '%' && *((*format) + 1) == '%')
		count = call_func(format, ft_putchar, '%');
	else
		count = ft_putchar(**format);
	(*format)++;
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ptr;
	int		count;

	va_start(ptr, format);
	count = 0;
	while (*format)
	{
		if (*format == '%' && *(format + 1) == 's')
			count += call_func(&format, ft_putstr, va_arg(ptr, char *));
		else if (*format == '%' && *(format + 1) == 'p')
			count += call_func(&format, ft_print_pointer, va_arg(ptr,
						unsigned long int), "0123456789abcdef");
		else if (*format == '%' && (*(format + 1) == 'd' || *(format
					+ 1) == 'i'))
			count += call_func(&format, ft_putnbr, va_arg(ptr, int));
		else
		{
			count += ft_choice(&format, ptr);
			continue ;
		}
		format++;
	}
	va_end(ptr);
	return (count);
}
