
#include <stdio.h>

// see https://kuleuven-diepenbeek.github.io/osc-course/ch1-c/intro/
// see https://en.wikipedia.org/wiki/Printf_format_string

int main() {
	// %lu = LONG UNSIGNED. %ld = LONG decimal 
	// %d = default decimal = not long, not short, and signed (implicitly)
	unsigned long int unsignedlong = 453453463467;
	printf("unsigned long int %lu - size: %ld\n", unsignedlong, sizeof(unsignedlong));

	// Whoops! should print "65531" instead of -5
	unsigned short int unsignedshortWrongVal = -5;
	printf("unsigned short wrongVal %u - size: %ld\n", unsignedshortWrongVal, sizeof(unsignedshortWrongVal));

	// size: 4
	int someInt = 5;
	printf("someInt %d - size: %ld\n", someInt, sizeof(someInt));
	// remember that this does NOT increase the size.
	// it merely increases the max. range you are able to store in this variable. 
	unsigned int someLongerInt = 5555;
	printf("someLongerInt %d - size: %ld\n", someLongerInt, sizeof(someLongerInt));

	char a = 'a';
	printf("char a %c - size: %ld\n", a, sizeof(a));

	// ERROR: long char is invalid
	// unsigned long char longerchar = 'b';
	unsigned char longerchar = 'b';
	printf("longer char b %c - size: %ld\n", longerchar, sizeof(longerchar));

	return 0;
}