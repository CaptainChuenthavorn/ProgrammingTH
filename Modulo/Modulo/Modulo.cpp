#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int input, count[41], i,ans, k;
	ans = 0;
	for (i = 0;i < 10;i++) {
		scanf("%d", &input);
		k = input % 42;
		count[k] = 1;
	}
	for (k = 0;k < 42;k++) {
		if (count[k] == 1) {
			ans++;
		}
	}
	printf("%d", ans);
	return 0;
}