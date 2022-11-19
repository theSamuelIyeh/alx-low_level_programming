#include "main.h"
#include <stdio.h>
int main(void)
{
	char b[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *ptr;
	ptr = leet(b);
	printf("%s", b);
	printf("%s", ptr);
	return (0);
}
