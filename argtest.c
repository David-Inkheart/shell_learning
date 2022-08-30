#include <stdio.h>

/**
 *
 *
 *
 */
int main(int ac __attribute__((unused)), char **av)
{
	int i = 0;

	while (av[i])
	{
	printf("av[%d] = %s\n", i, av[i]);
	i++;
	}
	return (0);
}


