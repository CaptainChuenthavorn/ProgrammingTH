#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i, k, com1[4], sum[5],a;
	sum[0] = 0;
	sum[1] = 0;
	sum[2] = 0;
	sum[3] = 0;
	sum[4] = 0;
	a = 0;
	printf("Enter 5 point of each competitor \n");
	printf("Competitor 1 score : ");
	for (i = 0;i < 4;i++) {
		scanf("%d", &com1[i]);
			sum[0] += com1[i];
	}printf("Competitor 2 score : ");
	for (i = 0;i < 4;i++) {
		scanf("%d", &com1[i]);
		sum[1] += com1[i];
	}printf("Competitor 3 score : ");
	for (i = 0;i < 4;i++) {
		scanf("%d", &com1[i]);
		sum[2] += com1[i];
	}printf("Competitor 4 score : ");
	for (i = 0;i < 4;i++) {
		scanf("%d", &com1[i]);
		sum[3] += com1[i];
	}printf("Competitor 5 score : ");
	for (i = 0;i < 4;i++) {
		scanf("%d", &com1[i]);
		sum[4] += com1[i];
	}
	for (k = 25;k > 0;k--) {
		for (i = 0;i < 5;i++)
		{
			if (sum[i] == k) {
				printf("The winner is %d has score %d \n", i+1,sum[i]);
				a = 1;
				break;
			}
			
		}
		if (a == 1) break;
	}


	return 0;
}