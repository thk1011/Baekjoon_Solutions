#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>



int main() {
	int N;
	scanf("%d", &N);
	int answer = 0;
	int num = 0;
	int x = 1;
	while(1) {
		int A = N / (num * 6 + 2);
		if (A == 0) {
			answer += num;
			break;
		}
		num += x;
		x++;

	}
	printf("%d", x);


	return 0;
}