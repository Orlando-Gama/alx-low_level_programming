#include<stdio.h>

/**
  * main - print the size of data types.
  * Return: Always 0.
  */
int main(void)
{  
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("size of long int: %d byte(s)\n", sizeof(long));
	printf("Size of long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of float: %d byte(s)\n", sizeof(float));
	return (0);
}

