#include "main.h"

/**
 * get_endianness - function that checks the system byte order
 * Return: 0 if big endian and 1 if little endian
 */

int get_endianness(void)
{
	int k = 1;
	int little_or_big;

	little_or_big = (int) (((char *)&k)[0]);
	return (little_or_big);
}
