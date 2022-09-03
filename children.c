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
	pid_t childpid;

	int i, val;

	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	i = 0;

	while (i < 5)
	{

		childpid = fork();

		if (childpid == -1)
		{
			perror("Error");
		}
		if (childpid == 0)
		{
			val = execve(argv[0], argv, NULL);

			if (val == -1)
				perror("Error\n");
		}
		else
		{
			wait(NULL);
			printf("Checking if execve works\n");
		}
		i++;
	}

	return (0);
}


