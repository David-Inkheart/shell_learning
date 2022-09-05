#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <string.h>
int main(int ac __attribute__((unused)), char **argv)
{
	char *buf;
	size_t n;
	size_t output, reload_shell;
	char *token;

	printf(":) ");

	buf = malloc(sizeof(char) *n);

	getline(&buf, &n, stdin);
	
	pid_t my_pid = fork();
	
	if (my_pid == -1)
	{
		perror(":( Fork Failed");
		return (-1);
	}
	else if (my_pid == 0)
	{
		token = strtok(buf, " ");

		char *args[] = {token, NULL};

		args[0] = strdup(token);

		output = execve(args[0], args, NULL);

		if (output == -1)
			perror(":( Outut Error");
	}
	else
	{
		wait(NULL);
		reload_shell = execve(argv[0], argv, NULL);

		if (reload_shell == -1)
			perror(":( Reloading Shell Error");
	}
	return (0);
}
