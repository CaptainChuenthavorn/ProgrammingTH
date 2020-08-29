#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int input[10], count[41], i,ans, k;
	ans = 0;
	printf("Enter 10 number : \n");
	for (i = 0;i < 10;i++) {
		scanf("%d", &input[i]);
		k = input[i] % 42;
		count[k] = 1;
	}

	for (i = 0;i < 10;i++) {
		printf("\n%d %% 42 = %d", input[i], count[k]);
	}
	
	for (k = 0;k < 42;k++) {
		if (count[k] == 1) {
			printf("There are have number :");
			ans++;
		}
	}
	printf("\nThe number of answer is %d", ans);
	return 0;
}