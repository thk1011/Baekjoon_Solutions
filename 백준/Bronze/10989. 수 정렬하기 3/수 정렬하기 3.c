#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int compare(const int* A, const int* B) {
	return (*B-*A);
}
int main()
{
	int list[10001] = { 0, };
	int time[10001] = { 0, };
	int N, X;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &X);
		list[X] = 1;
		time[X]++;
	}
	for (int i = 0; i < 10001; i++) {
		if (list[i] != 0) {
			for (int j = 0; j < time[i]; j++) {
				printf("%d\n", i);
			}
		}
	}

	return 0;
}