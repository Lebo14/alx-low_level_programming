#include "main.h"
/**
 * more_numbers - Print 10 times the numbers since 0 up to 10
 * Return: 10 times of the numbers since 0 up to 14
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 0; y++)
		{
			if (y > 0)
			{
				_putchar((y / 10) + '0');
			}
				_putchar((y % 10) + '0');
				}
		_putchar('\n');
	}
}

