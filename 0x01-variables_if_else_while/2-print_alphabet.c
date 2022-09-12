#include <stdio.h>
/**
 * main -  prints the alphabet in lowercase
 * description:  prints the alphabet in lowercase, followed by a new line.
 * Return: 0 
 */

int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
