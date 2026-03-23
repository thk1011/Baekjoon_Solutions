#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>



int main() {
	int N;
	scanf("%d", &N);
	int line = 0;
	int sum = 0;
	while (N > sum) {
		line++;
		sum += line;
	}
	sum -= line;
	int how = N - sum;
	if (line & 2 != 0) {
		printf("%d/%d", line + 1 - how, how);
	}
	else
	{
		printf("%d/%d", how, line + 1 - how);
	}


	return 0;
}