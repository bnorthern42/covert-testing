#include<stdio.h>
#include<string.h>

int main(int argv, char**argc)
{
	char buffer[4];
	char getter[128];
	printf("Please enter your name: ");
	gets(getter);
	strcpy(buffer, getter);
	
	printf("buffer[0] = %c\n", buffer[0]);
	printf("buffer[1] = %c\n", buffer[1]);
	printf("buffer[2] = %c\n", buffer[2]);
	printf("buffer[3] = %c\n", buffer[3]); //over writes something important, but we can still access it
	printf("buffer[4] = %c\n", buffer[4]); //over writes something important, but we can still access it
	printf("buffer[5] = %c\n", buffer[5]); //over writes something important, but we can still access it

	return 0;
}
