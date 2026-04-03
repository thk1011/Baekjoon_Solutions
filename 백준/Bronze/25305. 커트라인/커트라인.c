#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare(const int* A, const int* B) {
	return(*B - *A);
}

int main()
{
	int list[1000];
	int sum = 0;
	int N, k;
	scanf("%d %d", &N, &k);
	for (int i = 0; i < N; i++) {
		scanf("%d", &list[i]);
	}

	qsort(list, N, sizeof(int), compare);

	printf("%d", list[k-1]);
	return 0;
}