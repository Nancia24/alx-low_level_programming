#include <stdio.h>
/**
 * main -  prints the alphabet 
 * description:  prints the alphabet in lowercase and upper case, followed by a new line.
 * Return: 0
 */

int main(void)
{
	int letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}

