#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>



int main() {
	int N, num;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		printf("%d ", num / 25);
		num = num - (num / 25) * 25;
		printf("%d ", num / 10);
		num = num - (num / 10) * 10;
		printf("%d ", num / 5);
		num = num - (num / 5) * 5;
		printf("%d\n", num / 1);
	}
	


	return 0;
}