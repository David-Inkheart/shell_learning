#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
	pid_t pid;	

	char *argv[] = {"/bin/ls", "-l", NULL};

	pid = fork();

	if (pid == -1)
	{
		return (-1);
	}
	if (pid == 0)
	{
		int val = execve(argv[0], argv, NULL);
	
		if (val == -1)
			perror("Error");
	}
	else
	{
		wait(NULL);
		printf("Done with execve\n");
	}
	return (0);
}

/**
* Execve is executing the program ls and -l which are both in the bin directory, but 
* it is executing it from within a child process because on succes execve's return text or bss 
* is overwritten by the loaded program, by executing it from th child process we can now
* have the parent wait for it as irts executing then when it returns back to the parent, its ripped * off the process tabe and the parent executes what it has to execute
*/
