#include <stdio.h>
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = i + 1; j <= 9; j++)
		{
			int k;

			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
			if (((i * 100) + (j * 10) + k) < 789)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
