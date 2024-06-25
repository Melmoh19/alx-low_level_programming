#include "main.h"

/**
 * main - prints all possible different combinations of three digits
 *
 * Description: Numbers must be separated by commas and a space.
 * The three digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination.
 * Print only the smallest combination of three digits.
 * Numbers should be printed in ascending order, with three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar((k % 10) + '0');

				if (i == 7 && j == 8 && k == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
