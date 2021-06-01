#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define SIZE 64

int compare(const void *a, const void *b);

int main()
{
	char string[SIZE];
	int length;

/* populate the string */
	printf("Type some text: ");
	fgets(string,SIZE,stdin);
	length = strlen(string);

/* Sort the array */
	qsort(string,length,sizeof(char),compare);

/* Display the sorted array */
	puts("Sorted string:");
	printf("%s", string);
	return(0);
}

int compare(const void *a, const void *b)
{
	return( *(char *)a - *(char *)b);
}



