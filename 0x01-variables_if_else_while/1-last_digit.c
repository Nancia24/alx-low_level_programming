#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assigns a random number to n everytime it is executed.
 * Description: checks the last dit of the number assigned to n
 * Return: Always 0 (success)
 */

int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	printf("Last digit of %d ", n);

	if (lastDigit > 5)
	{
		printf("is %d and is greater than 5 \n", lastDigit);
	}

	else if (lastDigit == 0)
	{
		printf("is %d and is 0 \n", lastDigit);
	}

	else if (lastDigit < 5)
	{
		printf("is %d and is less than 6 and not 0 \n", lastDigit);
	}
	return (0);
}










