#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
/**
 * main - a program that imitates a very simple shell
 *
 *
 * Return: always O on success.
 */
int main(void)
{
	char *buf;
	size_t n;
	size_t output;
	int status;

	printf("#cisfun ");

	buf = malloc(sizeof(char) * n);
	getline(&buf, &n, stdin);

	pid_t my_pid = fork();

	if (my_pid == -1)
	{
		perror("Fork failed");
		return (-1);
	}
	else if (my_pid == 0)
	{
		char *argv[] = {buf, NULL};

		argv[0] = strtok(buf, " ");

		printf("%s", argv[0]);

		output = execve(argv[0], argv, NULL);

		if (output == -1)
			perror("DavidError:");
	}
	else
	{
		wait(&status);
	}
	free(buf);
	return (0);
}
