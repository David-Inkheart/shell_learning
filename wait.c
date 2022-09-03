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
	pid_t parentpid;
	int status;

	printf("I never born pikin\n");

	childpid = fork();

	if (childpid == -1)
	{
		perror("Unsuccessful");
		return (1);
	}
	if (childpid == 0)
	{
		printf("after forking, na me be the pikin\n");
	}
	else
	{
		wait(&status);
		sleep(20);
		parentpid = getpid();
		printf("pid of parent process after fork is: %u\n", parentpid);
	}
	return (0);
}
