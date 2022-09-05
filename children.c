#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
<<<<<<< HEAD

int main(void)
{
	pid_t childpid;	
=======
/**
 *
 *
 *
 *
 */
int main(void)
{
	pid_t childpid;

>>>>>>> 401d5a3ea53e4f81e0f884a6ce80608687726303
	int i, val;

	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	i = 0;
<<<<<<< HEAD
	while (i < 5)
	{
=======

	while (i < 5)
	{

>>>>>>> 401d5a3ea53e4f81e0f884a6ce80608687726303
		childpid = fork();

		if (childpid == -1)
		{
			perror("Error");
		}
		if (childpid == 0)
		{
			val = execve(argv[0], argv, NULL);
<<<<<<< HEAD
	
=======

>>>>>>> 401d5a3ea53e4f81e0f884a6ce80608687726303
			if (val == -1)
				perror("Error\n");
		}
		else
		{
			wait(NULL);
<<<<<<< HEAD
			printf("Done with execve\n");
		}
		i++;
	}
	return (0);
}

/**
* Execve is executing the program ls and -l which are both in the bin directory, but 
* it is executing it from within a child process because on succes execve's return text or bss 
* is overwritten by the loaded program, by executing it from th child process we can now
* have the parent wait for it as irts executing then when it returns back to the parent, its ripped * off the process tabe and the parent executes what it has to execute
*/
=======
			printf("Checking if execve works\n");
		}
		i++;
	}

	return (0);
}


>>>>>>> 401d5a3ea53e4f81e0f884a6ce80608687726303
