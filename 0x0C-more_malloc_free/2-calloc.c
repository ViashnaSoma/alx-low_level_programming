#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: size of array
* @size: memory size
* Return: memarr or NULL for failure
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memarr;
	usigned int count;
	
	if ((nmemb == 0) || (size == 0))
	{
		exit(NULL);
	}
	memarr = malloc(nmemb * size);
	if (memarr == 0)
	{
		exit(NULL);
	}
	for (count = 0; count < nmemb; count++)
	{
		memarr[count] = 0;
	}
	return (memarr);
}
