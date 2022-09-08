#include <stdio.h>
#include<unistd.h>
#include <stdlib.h>
/**
  *main - entry point
  *Return: Always 1 (success)
  */
int main(void)
{
	write(STDOUT_FILENO,
			"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
