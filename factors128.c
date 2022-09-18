#include "factors128.h"

/**
 * main - factorizes any number into two smaller factors.
 * @argc: number of arguments.
 * @argv: argument list.
 * Return: Always 0 on succes.
 */
int main(int argc, char *argv[])
{
	/* initialize variables */
	unsigned __int128 i, n, *f;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	char *number, *content;

	/* ensure the file is passed to the program */
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: factor file\n");
		exit(EXIT_FAILURE);
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
			n = ConvertNum(number);
			printf("%llx\n", n);
			F = FindFactor(n, f);
			printf("%llx=%llx*%llx\n", n, F[1], F[0]);
		}
		free(content);
	}
	fclose(file);
	return (0);
}

/**
 * FindFactor - functions that finds two common factors of an integer
 * @n: integer whose factor is to be found
 *
 * Return: an array containing two factors
 */
unsigned __int128 *FindFactor(unsigned __int128 n, unsigned __int128 *f)
{
	unsigned __int128 p, q, i;

	for (i = 2; i <= n; i++)
	{
		if ((n % i) == 0)
		{
			p = i;
			q = n / i;
			break;
		}
	}
	f[0] = p;
	f[1] = q;

	return (f);
}


/**
 * ConvertNum - function that converts a number from string to integer.
 * @num: string to convert to integer
 * Return: the convert integer.
 */
unsigned __int128 ConvertNum(char *num)
{
	int i = 0;
	unsigned __int128 number = 0;
	size_t length = strlen(num);
	int n;

	while (i < length)
	{
		n = num[i] - 48;
		number += n * pow(10, (length - i - 1));
		i++;
	}
	
	return (number);
}
