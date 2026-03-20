#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{
	int N,T,P;
	int size[6];
	scanf("%d", &N);
	scanf("%d %d %d %d %d %d", &size[0], &size[1], &size[2], &size[3], &size[4], &size[5] );
	scanf("%d %d", &T, &P);
	int sum_P, rest_P;
	int sum_T = 0;
	for (int i = 0; i < 6; i++) {
		if (size[i] != 0) {
			sum_T += (size[i]-1) / T + 1;
		}
	}
	sum_P = N / P;
	rest_P = N % P;
	printf("%d\n", sum_T);
	printf("%d %d", sum_P, rest_P);


	return 0;

}