#include <stdio.h>

int main()
{
	char *test[2];
	test[0] = "abc";
	test[1] = "def";
	printf("%c", test[0][1]);
}
