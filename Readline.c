#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *
 *
 *
 */
int main(void)
{
	size_t n = 0;
	char *buffer;
	char **restrict lineptr;
	size_t characters;

	buffer = malloc(sizeof(n));
	if (!buffer)
		return (-1);

	printf("$ ");
	lineptr = &buffer;
	characters = getline(lineptr, &n, stdin);
	printf("%s\n", buffer);

	return (0);
}
