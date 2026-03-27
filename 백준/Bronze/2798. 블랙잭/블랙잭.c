#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int list[300000];
int main()
{
	int N, M, A, B;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf("%d", &list[i]);
	}
	int sum = 0;
	for (int i = 0; i < N-2; i++) {
		for (int j = i+1; j < N - 1; j++) {
			for (int k = j+1; k < N; k++) {
				if (list[i] + list[j] + list[k] <= M) {
					if (M - sum > M - (list[i] + list[j] + list[k])) {
						sum = list[i] + list[j] + list[k];
						
					}
				}
				
			}
		}
	}

	printf("%d", sum);

	return 0;
}
