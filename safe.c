#include<stdio.h>
#include<string.h>

int main(int argv, char**argc)
{
	char buffer[4];
	char getter[128];
	printf("Please enter your name: ");
	gets(getter);

	if(strlen(getter) > sizeof(buffer) || strlen(getter) == 0)
	{
		printf("Length of name is larger than what is allowed or is empty \n");
		printf("Now exiting program");
		return 1;
		/**
		*
		* We returned a 1 as there is an error in the program and we wish
		* not to over write our Main Memory
		*
		*/
	}
	strcpy(buffer, getter);

	printf("buffer[0] = %c\n", buffer[0]);
	printf("buffer[1] = %c\n", buffer[1]);
	printf("buffer[2] = %c\n", buffer[2]);
	printf("buffer[3] = %c\n", buffer[3]);
	printf("buffer[4] = %c\n", buffer[4]); //over writes something important, but we can still access it


	return 0;
}
