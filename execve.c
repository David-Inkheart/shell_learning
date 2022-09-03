#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 *
 *
 *
 *
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "-a", NULL};

	int val;

	val = execve(argv[0], argv, NULL);

	if (val == -1)
		perror("Error\n");

	printf("Checking if execve works\n");

	return (0);
}


