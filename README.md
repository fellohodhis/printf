# Printf

## Synopsis
This is a simple implementation of printf

## Description
In C programming language, printf() function is used to print the “character, string, float, integer, octal and hexadecimal values” onto the output screen.

The available convertion specifiers are:
+ %c: Prints a single character.
+ %s: Prints a string of characters.
+ %d: Prints integers.
+ %i: Prints integers.
+ %b: Prints the binary representation of an unsigned decimal.
+ %u: Prints unsigned integers
+ %p: Prints address of pointer
+ %x: Prints the hexadecial representation of an unsigned decimal in lowercase letters
+ %X:Prints the hexadecial representation of an unsigned decimal in uppercase letters
+ %r: Prints a reversed string
+ %R: Prints the Rot13 interpretation of a string

## Usage
+ All the files are to be compiled on Ubuntu 14.04 LTS
+ Compile your code with `gcc -Wall -Werror -Wextra -pedantic *.c`
+ Include the "main.h" header file on the functions using the _printf()
+ Create a file (main.c) with below contend

## Example

```
#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int a;
	int b;
	char *str;

	str = "school";
	a = _printf("%r\n", "ALX"); /*expected: notrebloh*/
	printf("--->%d\n", a); /*expected: 10*/

	b = _printf("%r\n", str); /*expected: loohcs*/
	printf("%d\n", b); /*expected: 7*/

	b = _printf("%r\n", str); /*expected: loohcs*/
	printf("%d\n", b); /*expected: 7*/
	return (0);
}

```
## Authors:
[fellohodhis](https://github.com/fellohodhis)
[AchiraALX](https://github.com/AchiraALX)

