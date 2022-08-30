#include <string.h>
#include <stdio.h>
/**
 * main - testing strtok
 *
 */
int main(void)
{
	char ptr[100] = "David and Philip are collaborating to build a shell";

/*	const char *restrict delim; */

	char *output;

/*	delim = " "; */

	output = strtok(ptr, " ");

	while (output)
	{
	printf("%s\n", output);
	output = strtok(NULL, " ");
	}


	return (0);
}
