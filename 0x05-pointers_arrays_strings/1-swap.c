
/**
 * swap_int - swap integers
 *
 * @a: first integer to be swapped with second
 * @b: second integer to be swapped with first
 *
 * return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;
	*b = c;
}
