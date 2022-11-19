#include "main.h"
#include <stdio.h>
int main(void)
{
	char b[] = "HELLO WORLD! expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	char *ptr;
	ptr = cap_string(b);
	printf("%s", b);
	printf("%s", ptr);
	return (0);
}
