#include <stdio.h>
/**
 * main - entry point
 *
 * Description: using putchar
 *
 * Return: is always (0) to show success
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
