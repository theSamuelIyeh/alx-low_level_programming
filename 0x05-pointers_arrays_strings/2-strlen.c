
/**
 * _strlen - return length of a string
 *
 * @s: string parameter
 *
 * Return: length of string
 */

int _strlen(int *s)
{
	int len= 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
