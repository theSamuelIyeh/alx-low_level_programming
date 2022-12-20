/**
 * print_name - prints name
 *
 * @name: string of name to print
 *
 * @f: function to run in this function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
