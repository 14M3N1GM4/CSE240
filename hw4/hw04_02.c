/*
 * Reads an input for the user's full name and prints their initials.
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_DATA 64

char* full_name = NULL;

void get_user_full_name()
{
	full_name = (char*)malloc(MAX_DATA * sizeof(char));

	printf("Please enter your full name:\t");
	if(gets(full_name) == NULL)
		printf("Error\n");
}



int main(void)
{
	get_user_full_name();
	printf("%s\n", full_name);


	free(full_name);

	return 0;
}
