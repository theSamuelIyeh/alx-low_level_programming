#include "main.h"
#include <stdio.h>
int main(void)
{
	int i = 0;
	int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	reverse_array(b, sizeof(b) / sizeof(int));
	printf("%d ", b[i++]);
	return (0);
}
