#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int input[10], count[41], i,ans, k;
	ans = 0;
	printf("Enter 10 number  ");
	for (i = 0;i < 10;i++) {
		printf("\nEnter number %d : ",i+1);
		scanf("%d", &input[i]);
		k = input[i] % 42;
		printf("Mod : %d %% 42 = %d\n", input[i], k);
		count[k] = 1;
	}

	printf("************\n");
	printf("There are have number :");
	for (k = 0;k < 42;k++) {
		if (count[k] == 1) {
			
			printf("\n%d", k);
			ans++;
		}
	}
	printf("\n************");
	printf("\nThe number of answer is %d", ans);
	return 0;
}