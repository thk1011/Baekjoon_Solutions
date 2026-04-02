#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char list[51][51];
	int M, N;
	int time;
	int minimum = 64;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf(" %c", &list[i][j]);
		}
	}
	for (int i = 0; i < N - 7; i++) {
		for (int j = 0; j < M - 7; j++) {
			time = 0;
			for (int k = i; k < i + 8; k++) {
				for (int l = j; l < j+8; l++) {
					if ((k + l) % 2 == 0) {
						if (list[k][l] == 'B') {
							time++;
						}
					}
					else
					{
						if (list[k][l] == 'W') {
							time++;
						}
					}
				}
			}
			if (time < minimum) {
				minimum = time;
			}
			if (64 - time < minimum) {
				minimum = 64 - time;
			}
		}
	}
	printf("%d", minimum);

	return 0;
}
