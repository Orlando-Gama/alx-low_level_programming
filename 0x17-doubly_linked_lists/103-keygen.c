#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Generates a key depending on username for crackme5
 * @argc: num of args passed
 * @argv: args passed to main
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int j, b;
	size_t len, add;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = l[(len ^ 59) & 63];
	for (j = 0, add = 0; j < len; j++)
		add += argv[1][j];
	p[1] = l[(add ^ 79) & 63];
	for (j = 0, b = 1; j < len; j++)
		b *= argv[1][j];
	p[2] = l[(b ^ 85) & 63];
	for (b = argv[1][0], j = 0; j < len; j++)
		if ((char)b <= argv[1][j])
			b = argv[1][j];
	srand(b ^ 14);
	p[3] = l[rand() & 63];
	for (b = 0, j = 0; j < len; j++)
		b += argv[1][j] * argv[1][j];
	p[4] = l[(b ^ 239) & 63];
	for (b = 0, j = 0; (char)j < argv[1][0]; j++)
		b = rand();
	p[5] = l[(b ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
