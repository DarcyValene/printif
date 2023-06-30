#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_char - Prints a single character
 * @ch: Character to print
 *
 * Return: Number of characters printed (always 1)
 */
int print_char(char ch)
{
        write(1, &ch, 1);
        return (1);
}

/**
 * print_string - Prints a string
 * @str: String to print
 *
 * Return: Number of characters printed
 */
int print_string(char *str)
{
        int printed_chars = 0;

        if (!str)
                str = "(null)";

        while (*str)
        {
                write(1, str, 1);
                str++;
                printed_chars++;
        }

        return (printed_chars);
}

/**
 * _printf - Prints output according to a format
"printf.c" 87L, 1393C                                                                                                     1,1           Top
