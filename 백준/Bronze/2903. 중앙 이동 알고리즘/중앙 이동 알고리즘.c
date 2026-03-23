#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>



int main() {
	int N;
	int num = 2;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		num = 2 * num - 1;
	}
	printf("%d", (int)pow(num, 2));


	return 0;
}
