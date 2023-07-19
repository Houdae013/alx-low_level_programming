#include "main.h"

/**
 * times_table - checks for lower
 *
 * On error: return 0
 * Return: 1 if success
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i == 0)
			{_putchar('0');
			 if (j < 9)
			 {
			 _putchar (',');	 
			 _putchar(32);
				 _putchar (32);
			} }
			else
			{
			if (((i * j) / 10) == 0)
			{_putchar (j * i + '0');
			 _putchar(32);
			} }
			else
			{_putchar (((i * j) / 10) + '0');
				_putchar (((i * j) % 10) + '0');
			} 
			if (j < 9)
			{

			_putchar (',');
			_putchar(32); }
			
		}
		_putchar('\n');
	}
}
