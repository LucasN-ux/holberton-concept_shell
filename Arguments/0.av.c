#include <stdio.h>
#include <stdlib.h>

/** 
* main - prints all the arguments, without using ac.
* @ac: number items on av
* @av: arguments of the program
* Return: 0
*/
int main(int ac, char **av)
{
	
	int len = 0;
	
	(void)ac;

	while (av[i] != NULL)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return(0);
}
