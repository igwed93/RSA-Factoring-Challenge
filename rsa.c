#include "factors.h"

/**
 * main - factorizes any number into two smaller factors.
 * @argc: number of arguments.
 * @argv: argument list.
 * Return: Always 0 on succes.
 */
int main(int argc, char *agrv[])
{
	/* initialize variables */
	int i, j, n,  p = 0, q = 0;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	char *number, *content;

	/* ensure the file is passed to the program */
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: factor file\n");
		exit(EXIT_FAILURE)
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	read_line = 1;
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		number = content;

		if (read_line > 0)
		{
			number = strtok(content, " \n");
			n = atoi(number[0]);

			/* create a loop in the range of prime numbers
			 * less than 10^8 */
			for (i = 1; i <= n; i += 2)
			{
				if ((i % 2) == 0 && (i % 3) == 0 && i > 7)
				{
					continue;
				}
				else if ((n % i) == 0)
				{
					p = i;
					q = n / i;
				}
			}
		}
		free(content);
	}
	
	printf("%d=%d*%d", n, p, q);
	fclose(file);
	
	return (0);
}
