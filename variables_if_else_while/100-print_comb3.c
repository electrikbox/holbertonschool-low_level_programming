#include <stdio.h>

int main(void)
{
	int loop, num;

	for (loop = 0; loop < 9; loop++)
	{
		for (num  = loop + 1; num < 10; num++)
		{
			putchar(loop + '0');
                        putchar(num + '0');
                        if (loop <  8 && num < 10)
			{
				putchar(',');
                        	putchar(' ');
			}
		}
	}
	return (0);
}
