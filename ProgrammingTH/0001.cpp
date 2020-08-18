#include<stdio.h>
int main() {
	int a, b, sum;
	scanf("%d", a);
	scanf("%d", b);
	sum = a + b;
	if (sum > 79)	printf("A");
	else if (sum > 74 && sum<=100)	printf("B+");
	else if (sum > 69)	printf("B");
	else if (sum > 64)	printf("C+");
	else if (sum > 59)	printf("C");
	else if (sum > 54)	printf("D+");
	else if (sum > 49)	printf("D");
	else if (sum >= 0)	printf("F");
	
		return 0
}
