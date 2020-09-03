#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x[3],i,count;
	count = 0;
	printf("\n\nEnter w * h * l: ");
	for (i = 0;i < 3;i++) {
		scanf("%d", &x[i]);
	}	
	printf("----------------------\n");
		for (i = 0;i < 3;i++) {
			if (x[i] > 0 && x[i] < 1000000) {
				while (x[i] != 1) {
					if (x[i] % 2 == 1) {
						x[i] = x[i] - 1;
						printf("*Cut down*\n");
			}
				x[i] /= 2;
				count++;
				printf("jelly [%d,%d,%d]  count +1\n", x[0], x[1], x[2]);
			}
			
			}
			else {
				printf("ERROR");
				break;
			}
			
	}
		printf("\ncount = %d\n\n", count);
		return 0 ;
}
