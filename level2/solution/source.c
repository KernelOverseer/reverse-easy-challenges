#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	char	buffer[50];
	int	admin = 0;

	puts("What's your login :");
	gets(buffer);
	if (admin)
		puts("Hello Mr Admin");
	else
		puts("I only talk to admins, sorry");
}
