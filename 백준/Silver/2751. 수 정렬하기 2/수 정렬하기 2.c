#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare(const int* A, const int* B) {
	return(*A - *B);
}
int list[1000000];
int main()
{
	
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &list[i]);
	}

	qsort(list, N, sizeof(int), compare);
	for (int i = 0; i < N; i++) {
		printf("%d\n", list[i]);
	}
	return 0;
}