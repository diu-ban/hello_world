#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	int arr[14];

	srand(time(NULL));

	for (int i = 0; i < 15; i++)
	{
		a[i] = rand() % 128;
	}

	for (int y = 0; y < 15; y++)
	{
		printf("%c", a[i]);
	}

	return (0);
}
