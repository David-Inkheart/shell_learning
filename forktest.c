#include <stdio.h>
#include <unistd.h>
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

	printf("I never born pikin\n");

	childpid = fork();

	if (childpid == -1)
	{
		perror("Unsuccessful");
		return (1);
	}
	if (childpid == 0)
	{
		sleep (40);
		printf("after forking, na me be the pikin\n");
	}
	else
	{
		parentpid = getpid();
		printf("pid of parent process after fork is: %u\n", parentpid);
	}
	return (0);
}
