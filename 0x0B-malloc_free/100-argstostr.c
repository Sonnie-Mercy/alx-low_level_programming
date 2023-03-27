#include "main.h"

/**
 * argstostr - concatanates all the arguments of the program
 * @ac: integer number of array elements
 * @av: array of character strings
 * Return: NULL if av or ac is NULL else pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len++;

	str = malloc(sizeof(char) * (ac + len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k++] = '\n';
	}
	return (str);
}
