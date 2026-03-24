#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int N, K;
	int num = 0;
	scanf("%d %d", &N, &K);
	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			num++;
			if (num == K) {
				printf("%d", i);
				break;
			}
		}
		if (i == N) {
			printf("0");
		}
	}

	return 0;

}