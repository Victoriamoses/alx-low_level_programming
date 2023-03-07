#include "main.h"

/**
 * print_triangle - A function that prints hash symbol to create a shape
 * @size: an integer value of the size
 */
void print_triangle(int size)
{
	int shape;
	int line;
	int space;

	line = 0;

	if (size <= 0)
	{
		_putchar(10);
	}
	while (line < size)
	{
		for (space = size - 1; space > line; space--)
		{
			_putchar(' ');
		}
		for (shape = 0; shape < line + 1; shape++)
		{
			_putchar('#');
		}
		_putchar(10);
		line++;
	}
}
