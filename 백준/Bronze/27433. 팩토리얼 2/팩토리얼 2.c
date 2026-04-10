#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long fun(int N) {
	if (N == 0 || N == 1) {
		return 1;
	}
	return N * fun(N-1);
}

int main(void) {
	int N;
	scanf("%d", &N);
	printf("%lld", fun(N));
	return 0;
}