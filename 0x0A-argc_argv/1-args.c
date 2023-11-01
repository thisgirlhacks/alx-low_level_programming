#include <stdio.h>

/**
  * main - Prints the number of arguments passed into it
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc);
	return (0);
}
