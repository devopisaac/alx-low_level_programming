#include <stdio.h>
/**
 * main - prints the name of compilation file and a new line
 * Return: 0
 **/
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
