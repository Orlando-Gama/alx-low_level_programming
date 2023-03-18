#include<stdio.h>
/**
  * main - print the size of data types.
  * Return: Always 0.
  */
int main(void)
{  
	printf("Size of char: 1 byte(s)\n", sizeof(char));
	printf("Size of an int: 4 byte(s)\n", sizeof(int));
	printf("size of long int: 4 byte(s)\n", sizeof(long));
	printf("Size of long long int: 8 byte(s)\n", sizeof(long long int));
	printf("Size of float: 4 byte(s)\n", sizeof(float));
	return (0);
}

