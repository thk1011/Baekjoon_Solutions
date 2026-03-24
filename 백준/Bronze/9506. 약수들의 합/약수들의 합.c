#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int N;
	while (1) {
		int sum = 0;
		scanf("%d", &N);
		if (N == -1) {
			exit(0);
		}
		for (int i = 1; i < N; i++) {
			if (N % i == 0) {
				sum += i;
			}
		}
		if (sum == N) {
			printf("%d = 1", N);
			for (int i = 2; i < N; i++) {
				if (N % i == 0) {
					printf(" + %d", i);
				}
			}
			printf("\n");
		}
		else
		{
			printf("%d is NOT perfect.\n", N);
		}
	}

	return 0;

}