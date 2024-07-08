#include "main.h"

/**
 * 
 */
char _toupper(char c);
int is_seperator(char c, char *seperators);
int is_lowercase(char c);



char *cap_string(char *s)
{
    char separators[] = " \t\n,;.!?\"(){}";
    int i, is_start_of_word = 1;;
    for (i = 0 ; s[i] != '\0' ; i++)
    {
        if (is_seperator(s[i], separators))
        {
            is_start_of_word = 1;
        }
        else if (is_start_of_word && is_lowercase(s[i]))
        {
            s[i] = _toupper(s[i]);
            is_start_of_word = 0;
        }
        else
        {
            is_start_of_word = 0;
        }
        
    }

    return s;
}

int is_seperator(char c, char *seperators)
{
    for (int i = 0 ; seperators[i] != '\0' ; i++)
    {
        if (c == seperators[i])
        {
            return 1;
        }
    }
    return 0;
}

int is_lowercase(char c)
{
    return 'a' <= c && c <= 'z';
}

char _toupper(char c)
{
    return c -= 32;
}
