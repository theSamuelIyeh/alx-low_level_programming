#include "main.h"
#include <stdio.h>
int main(void)
{
	char b[] = "Look up!";
	char *ptr;
	ptr = string_toupper(b);
	printf("%s\n", b);
	printf("%s", ptr);
	return (0);
}
