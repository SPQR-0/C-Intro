""" C program to print """
""" ASCII Value of Character """
#include <stdio.h>


int main()
{
	char c = 'k';

	// %d displays the integer value of
	// a character
	// %c displays the actual character
    // and those are called format specifiers
	printf("The ASCII value of %c is %d", c, c);
	return 0;
}
