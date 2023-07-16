#include <stdio.h>

int main(void)
{
	int i, j;

	for (j = 0; j <= 99; j++)
	{
		for (i = j + 1; i <= 99; i++)
		{

			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			putchar(' ');
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			if (j * 100 + i != 9899)
			{
				putchar(',');
				putchar(' ');

			}





		}

	}
putchar('\n');
return (0);
}
