#include "shell.h"

/**
 *_printf - produces output according to a format
 *@format: The specified format
 *
 *Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int char_count = 0;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ')
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				write(1, format, 1);
				char_count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);
				int len = 0;

				if (str == NULL)
					str = "(null)";
				while (str[len] != '\0')
					len++;
				write(1, str, len);
				char_count += len;
			}
			else if (*format == 'c')
			{
				char c = va_arg(args, int);

				write(1, &c, 1);
				char_count++;
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(args, int);

				printer_dec_int(num);
				char_count += count_digits(num);
			}
		}
		else
		{
			write(1, format, 1);
			char_count++;
		}
		format++;
	}
	va_end(args);
	return (char_count);
}

/**
 *printer_dec_int_rec - prints degits in rucursive
 *@num: The recieved number
 *
 *Return: Nothing
 */
void printer_dec_int_rec(int num)
{
	int digits;

	if (num == 0)
		return;
	printer_dec_int_rec(num / 10);
	digits = num % 10 + '0';
	write(1, &digits, 1);
}

/**
 *printer_dec_int - prints the number
 *@num: the number to print
 *
 *Return: Nothing
 */
void printer_dec_int(int num)
{
	if (num == 0)
	{
		write(1, "0", 1);
	}
	else
	{
		if (num < 0)
		{
			write(1, "-", 1);
			printer_dec_int_rec(-num);
		}
		else
			printer_dec_int_rec(num);
	}
}
/**
 *count_digits - returns the number of digits
 *@num: Accepted vallue
 *
 *Return: counts
 */
int count_digits(int num)
{
	int count = 0;
	int temp_num;

	temp_num = num;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	if (temp_num < 0)
		return (count + 1);
	else
		return (count);
}
/**
 *printString - prints strings
 */
