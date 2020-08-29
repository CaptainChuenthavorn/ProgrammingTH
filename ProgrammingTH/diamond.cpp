/*#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i, k,a, count, n;

	scanf("%d", &n);
	a = n;
	for (count = 1; count <= n - 1;count++)
	{

		for (i = 1;i <= ((a-1)*2);i++)
		{
			printf(" ");
			
		}
		a--;
		for (k = 1;k <= 2 * count - 1;k++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}*/