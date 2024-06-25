#include "main.h"

/**
 * main - Entry point
 * Description: prints _putchar, followed by a new line.
 * Return: allways 0
 */

int main(void)
{
    char i[] = "_putchar";
    int length = sizeof(i) / sizeof(i[0]);

    for (int j = 0 ; j < length ; j++)
    {
        _putchar(i[j]);
    }
     _putchar('\n');
    return (0);
}