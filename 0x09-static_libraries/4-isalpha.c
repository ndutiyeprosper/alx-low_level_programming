#include "main.h"
#include <stdio.h>

/**
 * _isalpha - test if c is in alphabet
 * @c: the arguement to be tested, is integer
 * Description: tests is c is in alphabet
 * Return: void
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
