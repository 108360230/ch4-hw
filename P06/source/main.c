#include <stdlib.h>
#include <stdio.h>
#define size 10

int main(void)
{
	int n[size];
	int i;
	for (i = 0; i < size; i++)
		n[i] = 2 * (1 + i);

	printf("%7s%13s\n", "Elemant", "Value");

	for (i = 0; i < size; i++)
		printf("%7d%13d\n", i, n[i]);


	system("pause");
	return 0;

	
}