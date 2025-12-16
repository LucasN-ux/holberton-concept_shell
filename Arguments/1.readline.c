#include <stdio.h>
#include <unistd.h>

/** 
* main - user to enter a command
* Return: 0
*/
int main (void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	while (1)
	{
		printf("$ ");
		read = getline(&line, &len, stdin);

		if (read == -1)
		{
			printf("\n");
			break;
		}

		printf("%s", line);
	}

	free(line);
	return (0);
}
