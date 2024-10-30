#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define CHAR_SET " 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!#$%&()*+,-./:;<=>?@"

int main(void)
{
	char pass[15];
	int i;

	srand(time(NULL));

	for (i = 0; i < 15; i++)
	{
		pass[i] = CHAR_SET[rand() % (sizeof(CHAR_SET) - 1)];
	}
	pass[15] = '\0';

	printf("%s\n", pass);

	return (0);
}
