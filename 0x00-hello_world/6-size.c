#include <stdio.h>

/**
 *   main - prints the size of various types
 *
 *   * Return: 0 if exited properly, non-zero otherwise
 *
 */

int main(void)
{
printf("Size of char is: %ldbyte(s)\n", sizeof(char));
printf("Size of integer is: %lubyte(s)\n", sizeof(int));
printf("Size of long int is: %ldbyte(s)\n", sizeof(long int));
printf("Size of long long int: %ldbyte(s)\n", sizeof(long long int));
printf("Size of float: %ldbyte(s)", sizeof(float));
return (0);
}
