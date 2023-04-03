#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }

    s = "hello how are you";
    f = _strchr(s, 'u');

    if (f != NULL)
	    printf("%s\n", f);

    f = _strchr(s, 'h');

    if (f != NULL)
	    printf("%s\n", f);
    s = "";
    f = _strchr(s, '\0');

    if (f !=  NULL)
	    printf("%s\n", f);
    else
	    printf("NULL\n");

    return (0);
}
