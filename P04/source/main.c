#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int n[10];

	for (i = 0; i < 10; i++)
		n[i] = 0;
	printf("%7s%13s\n", "Element", "value");

	for (i = 0; i < 10; i++)
		printf("%7d%13d\n", i, n[i]);
	system("pause");
	return 0;
}