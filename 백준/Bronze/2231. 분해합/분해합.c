#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int N, size;
	int NN[7];
	int sum;
	scanf("%d", &N);
	for (int j = 7; j >= 0; j--) {
		if (N / (int)pow(10, j) != 0) {
			size = j;
			break;
		}
	}
	for (int i = N - 9*(size+1); i < N; i++) {
		if (i > 0) {
			sum = 0;
			
			for (int k = 1; k <= size + 1; k++) {
				sum += (i % (int)pow(10, k)) / (int)pow(10, k - 1);
			}
			if (i + sum == N) {
				printf("%d", i);
				break;
			}
			else if (i == N-1)
			{
				printf("0");
			}
		}
	}
	if (N == 1) {
		printf("0");
	}
	

	return 0;
}