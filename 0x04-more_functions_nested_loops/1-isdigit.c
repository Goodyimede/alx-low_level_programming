#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Function that checks for 0 through 9
 * @C: parameter to be checked
 * Return: 1 on success and 0 on failure
 */

int _isdigit(int C)

{
	if (C >= 48 && C <= 57)
		return (1);
	else
		return (0);
}
