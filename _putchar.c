#include "main.h"
#include <unistd.h>
/**
*_putchar - function to write a character
*@c:character format
*Return: 1 on success
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
