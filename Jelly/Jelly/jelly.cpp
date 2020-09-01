#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x[3],i,k,count;
	count = 0;
	for (i = 0;i < 3;i++) {
		scanf("%d", &x[i]);

	}
	while (x[0] != 1 && x[1] != 1 && x[2] != 1) {
		for (k = 1;k < 2;i++) {
			for (i = 0;i < 3;i++) {
				if (x[i] > x[k])
				{
					printf("max : %d", x[i]);

					break;
				}
			}
		}
		x[i] /= 2;
		count++;
		printf("%d", count);
	}
	printf("%d", count);
}
