#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int A, B, C;
	while (1) {
		scanf("%d %d %d", &A, &B, &C);
		if (A == 0 && B == 0 && C == 0) {
			break;
		}
		int max = A;
		if (B > max) {
			max = B;
		}
		if (C > max) {
			max = C;
		}
		if (2 * pow(max, 2) == pow(A, 2) + pow(B, 2) + pow(C, 2)) {
			printf("right\n");
		}
		else
		{
			printf("wrong\n");
		}
	}
	
	return 0;

}