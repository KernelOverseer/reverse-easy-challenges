#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	int num;

	if (argc != 2)
		return (1);
	num = atoi(argv[1]);
	if (num == 0x1337)
		puts("Nice\n");
	else
		puts("Not Nice :(\n");
}
