#include "main.h"
/**
 * _isupper - checks uppercase of a character
 * @c: the character checked
 * Return: 1 if c is uppercase of 0 if anything else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
