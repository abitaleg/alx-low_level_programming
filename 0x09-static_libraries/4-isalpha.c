#include "main.h"

/**
 *_isalpha - check the alphabet
 *@c:c is a charcter
 *Return: 1 or 0 depanding on the character.
 */


int _isalpha(int c)
{

	return ((c >= 'a' && c <= 'z') || (c  >= 'A' && c <= 'Z'));
}
