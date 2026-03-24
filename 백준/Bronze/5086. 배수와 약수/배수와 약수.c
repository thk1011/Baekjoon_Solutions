#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int A, B;
	while (1) {
		scanf("%d %d", &A, &B);
		if (A == 0 && B == 0) {
			exit(0);
		}
		if (A / B == 0 && B % A == 0) {
			printf("factor\n");
		}
		else if (A / B != 0 && A % B == 0) {
			printf("multiple\n");
		}
		else
		{
			printf("neither\n");
		}
	}

	return 0;

}