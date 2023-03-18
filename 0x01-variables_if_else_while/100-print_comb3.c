#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (n = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putcher(n);
				putcher(m);
				if (n != 56 || m != 57)
				{
					putcher(',');
					putcher(' ');
				}
			}
		}
	}
	putcher('\n');
	return (0);
}
