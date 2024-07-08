#include "main.h"

/**
 * 
 */

void reverse_array(int *a, int n)
{
    int i, tmp_value;

    for (i = 0 ; i < (n / 2) ; i++)
    {
        tmp_value = a[i];
        a[i] = a[(n-1) - i];
        a[(n-1) - i] = tmp_value;
    }

    return;
}
