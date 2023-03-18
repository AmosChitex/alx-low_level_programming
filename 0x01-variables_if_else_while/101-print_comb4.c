#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > m && m > n)
				{
					putcher(n);
					putcher(m);
					putcher(l);
					if (n != 55 || m != 56)
					{
						putcher(',');
						putcher(' ');
					}
				}
			}
		}
	}
	putcher('\n');
	return (0);
}
