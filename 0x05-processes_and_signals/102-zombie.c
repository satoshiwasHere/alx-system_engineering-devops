#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * infinite_while - function runs a infinite loop
 * no expected return value
 * Return - always 0
 */

int infinite_while(void)
{
	while (1)
	{
	sleep(1);
	}
	return (0);
}

/**
 * main - initializes 5 zombie processes
 * Return: always 0
 */

int main(void)
{
	int x;
	pid_t zombie;

	x = 0;
	while (x < 5)
	{
		zombie = fork();
		if (!zombie)
			return (0);
		printf("Zombie process created, PID: %d\n", zombie);
		x++;
	}

/**
 * infinite_while() - runs an infinite loop, returning no value
 * Return - always 0
 */
	infinite_while();
	return (0);
}
