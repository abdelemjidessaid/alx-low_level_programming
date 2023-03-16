#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %zu byte(s)", sizeof(char));
printf("Size of a int: %zu byte(s)", sizeof(int));
printf("Size of a long: %zu byte(s)", sizeof(long));
printf("Size of a long long int: %zu byte(s)", sizeof(long long int));
printf("Size of a float: %zu byte(s)", sizeof(float));
return (0);
}
