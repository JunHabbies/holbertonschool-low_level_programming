#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if no numbers found
 */

int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int found_num = 0;

    // Traverse through the string
    while (*s)
    {
        // Check for sign and update it
        if (*s == '-')
        {
            sign *= -1;
        }
        else if (*s == '+')
        {
            // Continue if a plus sign is found (does not change the sign)
        }
        // If the current character is a digit
        else if (*s >= '0' && *s <= '9')
        {
            found_num = 1;
            result = result * 10 + (*s - '0');
        }
        // If a number has been found and a non-digit is encountered, break
        else if (found_num)
        {
            break;
        }
        s++;
    }

    return sign * result;
}

