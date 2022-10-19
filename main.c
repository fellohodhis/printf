#include "main.h"

/**
 * main - main function
 * 
 * Return: Always (0) Success
 */

int main(void)
{
	/* Just checking if it is working*/
        _printf("Hello %s\n", "World");
        _printf("Hello %s %s\n", "World", "Again");
        _printf("Hello %s %s %s\n", "World", "Again", "Again");
        _printf("Hello %s %s %s %s\n", "World", "Again", "Again", "Again");
        _printf("Hello %s %s %s %s %s\n", "World", "Again", "Again", "Again", "Again");
        _printf("Hi%s I am %d years old\n", " there", 25);
	_printf("Hi%s I am %i years old\n", " there", 25);
	return (0);
}