#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int arr[14];
	int y, i;

	srand(time(NULL));

	for (i = 0; i < 15; i++)
	{
		arr[i] = rand() % 128;
	}

	for (y = 0; y < 15; y++)
	{
		printf("%c", arr[i]);
	}

	return (0);
}
