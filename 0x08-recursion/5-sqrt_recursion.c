#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
  * find_sqrt - finds the natural square root of num
  * @num: the number to find the square root of
  * @root: the root to be tested
  *
  * Return: If the number has a natural square root _ the square root.
  * If the number does not have a natural square root --1.
  */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
  * _sqrt_recursion - Returns the natural square root of a num
  * @i: The number to return the square root of.
  *
  * Return: If i has a natural square root - the natural square root of i
  * If i does not have a natural square root --1.
  */
int _sqrt_recursion(int i)
{
	int root = 0;

	if (i < 0)
		return (-1);
	if (i == 1)
		return (1);
	return (find_sqrt(i, root));
}

