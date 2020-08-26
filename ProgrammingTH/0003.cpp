#define _CRT_SECURE_NO_WARNINGS
/*#include<stdio.h>
int main() {
	long int  i,k,l,j,m, n,matrixA[100],matrixB[100],sum[100];
	scanf("%d", &m);
	scanf("%d", &n);
	for (i = 0;i < (m*n);i++)
	{
		scanf("%d", &matrixA[i]);
	}
	for (j = 0;j < (n*m);j++)
	{
		scanf("%d", &matrixB[j]);
	}
	i = 0;
	j = 0;
	for (k = 0;k < (m * n);k++)
	{
		sum[k] = matrixA[i] + matrixB[j];
		//printf(" %d ", sum);
		i++;
		j++;
	}
	l = 0;
	for (k = 0;k < m;k++) {
		for (i = 0;i < n;i++) {
			printf("%d ", sum[l]);
			l++;
		}
		printf("\n");
	}
	
	return 0;
}*/

#include<stdio.h>
int main() {
	int matrixA[100][100], matrixB[100][100], m, n, count,a,b;
	scanf("%d %d", &m, &n);
	for (a = 0;a < m;a++) {
		for (b = 0;b < n;b++) {

			scanf("%d", &matrixA[a][b]);
		}
	}
	for (a = 0;a < m;a++) {
		for (b = 0;b < n;b++) {

			scanf("%d", &matrixB[a][b]);
		}
	}
	for (a = 0;a < m;a++) {
		for (b = 0;b < n;b++) {

			printf("%d ", matrixA[a][b] + matrixB[a][b]);
		}
		printf("\n");
	}
	return 0;

}