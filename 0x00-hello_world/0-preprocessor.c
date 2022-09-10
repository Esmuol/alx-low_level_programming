#include <stdio.h>
/*The simplest C program */

int main(void)
{ 
	printf("#!/bin/bash\n");
	printf("gcc -E 0-preprocessor.c\n > $CFILE");
	    return (0);
}
