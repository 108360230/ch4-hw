#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int x = 0;
	int i, j, tmp;
	int a[5] = { 26,5,81,7,63 };
	printf("©|¥¼±Æ¦C«e:");
	for (i = 0; i < 5; i++)
		printf("%d ", a[i]);
	printf("\n");
	i = 0;
	while (i < 4)
	{
		
		for (j = 0; j < 4; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
		
		printf("Loop %d:", i);
		for (j = 0; j < 5; j++)
			printf("%4d", a[j]);
		printf("\n");
		if (a[4] > a[3] && a[3] > a[2] && a[2] > a[1] && a[1] > a[0])
			break;
	
		i += 1;
	}
	system("pause");
	return 0;
}