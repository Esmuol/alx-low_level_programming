#include <stdio.h>

/**
 * main-print the string in the input function
 *
 * Description: using the main function
 * this program prints "the size of various types on the computer it is compiled and run on
 * Return: 0
 */

int main(void)

{

        printf("Size of a char: %d bytes(s)\n", sizeof(char));
        printf("Size of an int: %d bytes(s)\n", sizeof(int));
        printf("Size of a long int: %d bytes(s)\n", sizeof(long int));
        printf("Size of a long long int: %d bytes(s)\n", sizeof(long long int));
        printf("Size of a float: %d bytes(s)\n", sizeof(float));
        return (0);
}
