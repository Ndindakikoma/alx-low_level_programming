#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)[A[A[A[A[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[A[D[D[D[D[D[D[D[[B[C[C[C[B[B[B[C[A[C[C[C[C[C[C[C[C[C[B[B[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D
{
	char *dup;
	unsigned int i, len;

	i = 0;
	len = 0;
	
	if (str == NULL)
		return (NULL);
	
	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	
	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}
