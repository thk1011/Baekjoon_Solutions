#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare(const int* A, const int* B) {
	return(*A - *B);
}

int main()
{
	int list[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &list[i]);
	}

	qsort(list, 5, sizeof(int), compare);
	for (int i = 0; i < 5; i++) {
		sum += list[i];
	}
	printf("%d\n", sum / 5);
	printf("%d", list[2]);
	return 0;
}