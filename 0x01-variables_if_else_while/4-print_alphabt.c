#include <stdio.h>

/*
 * main - Prints the alphabet in lowercase
 * description: Print all the letters except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q')
			continue;
		else
			putchar(letter);
	}
	 putchar('\n');
	return (0);
}

