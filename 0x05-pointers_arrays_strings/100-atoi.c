#include "main.h"


/**
 * _atoi - Convert a string to an integer.
 * @s: The string to be converted.
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
    int sign = 1;
    int digit;
    int result = 0;
    int i = 0;
    int seen_digit = 0;

    
    while (s[i] != '\0' && s[i] == ' ')
    {
        i++;
    }

    
    while (s[i] != '\0' && (s[i] == '-' || s[i] == '+'))
    {
        if (s[i] == '-')
        {
            sign = -sign;
        }
        i++;
    }

    
    while (s[i] >= '0' && s[i] <= '9')
    {
        seen_digit = 1;
        digit = s[i] - '0';
        result = result * 10 + digit;
        i++;
    }

    if (!seen_digit)
    {
        return 0;
    }

    result = result * sign;

    return result;
}
