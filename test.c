#include <stdio.h>
/*
 * main - entry point
 *
 * argc: count of arguments entered, must be >= 1.
 * argv[]: argument vector which is a one dimensional array
 * which contains as strings - the arguments passed to main
 *
 */
int main(int argc, char *argv[])
{
	int count;

	printf("This program was called with \"%s\".\n", argv[0]);

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("argv[%d] = %s\n", count, argv[count]);
		}
	}
	else
	{
		printf("The command had no other arguments.\n");
	}

	return (0);
}

