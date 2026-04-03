#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int compare(const int* A, const int* B) {
	int num1 = A[0];
	int num2 = B[0];
	int num3 = A[1];
	int num4 = B[1];

	if (num3 > num4) return 1;
	if (num3 < num4) return -1;
	if (num3 == num4) {
		if (num1 > num2) {
			return 1;
		}
		if (num2 > num1) {
			return -1;
		}
		return 0;
	}
	return 0;

}
int main()
{
	int list[100000][2];
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &list[i][0], &list[i][1]);
	}
	qsort(list, N, sizeof(list[0]), compare);
	for (int i = 0; i < N; i++) {
		printf("%d %d\n", list[i][0], list[i][1]);
	}
	return 0;
}
