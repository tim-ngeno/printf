#include "main.h"
#include <stdio.h>

/**
 * main - test file
 *
 * Return: always 0
 */
int main(void)
{
	char a = 'a';
	char *s = "Limoblaze musique";
	int ret_value, ret_value2;

	printf("________________________\n");
	printf("\nC Printf Function\n");
	ret_value = printf("This is a string in C\n");
	printf("Character Test: \t%c\n", a);
	printf("String Test:\t %s\n", s);
	printf("Percentage Test: This %%  has double %% percentage\n");
	puts("%d\t%o\t%x");
	for (int n = 5; n < 16; n++)
	{
		printf("%d\t%o\t%x\t\n", n, n, n);
	}
	printf("Return value: %d\n", ret_value);

	/* Custom printf function */

	printf("________________________\n");
	printf("\nCustom Printf Function\n");
	ret_value2 = _printf("This is a string in C\n");
	_printf("Character Test: \t%c\n", a);
	_printf("String Test:\t %s\n", s);
	_printf("Percentage Test: This %%%  has double %% percentage\n");
	printf("Return value: %d\n", ret_value2);
	puts("%d\t%o\t%x");
	for (int n = 5; n < 16; n++)
	{
		_printf("%d\t%o\t%x\t\n", n, n, n);
	}
	printf("________________________\n\n");

	return (0);
}
