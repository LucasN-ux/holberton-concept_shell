#include <stdio.h>
#include <unistd.h>

/** 
* main - prints the PID 
* Return: 0
*/
int main (void)
{
	printf("%d\n", getpid());
	return(0);
}
