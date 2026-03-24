#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int N, X, num;
	scanf("%d %d", &N, &X);
	if (N == 0) {
		printf("0");
		exit(0);
	}
	for (int i = 0; i < 31; i++) {
		if (N < pow(X,i)) {
			num = i-1;
			break;
		}
	}
	for (int i = num; i >= 0; i--) {
		if (N / (int)pow(X, i) <= 9) {
			printf("%d", N / (int)pow(X, i));
		}
		else
		{
			printf("%c", (N / (int)pow(X, i)) + 'A' - 10);
		}
		N -= (N / (int)pow(X, i)) * (int)pow(X, i);
	}

	return 0;

}