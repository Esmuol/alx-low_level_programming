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
        char c;
        int i;
        long li;
        long long lli;
        float f;

        printf("Size of a char: %ld bytes(s)\n", sizedof(c));
        printf("Size of an int: %ld bytes(s)\n", sizedof(i));
        printf("Size of a long int: %ld bytes(s)\n", sizedof(li));
        printf("Size of a long long int: %ld bytes(s)\n", sizedof(lli));
        printf("Size of a float: %ld bytes(s)\n", sizedof(f));
        return (0);
}
