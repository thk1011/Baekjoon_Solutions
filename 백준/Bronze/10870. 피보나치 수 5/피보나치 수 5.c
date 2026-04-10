#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long fac(int N) {
	if (N == 1) {
		return 1;
	}
	if (N == 0) {
		return 0;
	}
	return fac(N - 1) + fac(N - 2);
}

int main(void) {
	int N;
	scanf("%d", &N);
	printf("%lld", fac(N));
	return 0;
}