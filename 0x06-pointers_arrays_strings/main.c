#include "main.h"
#include <stdio.h>
int main(void)
{
	char b[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
	char *ptr;
	ptr = rot13(b);
	printf("%s", b);
	printf("%s", ptr);
	return (0);
}
