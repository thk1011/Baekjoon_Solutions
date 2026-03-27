#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int a0, a1;
	int c;
	int n0;
	scanf("%d %d", &a0, &a1);
	scanf("%d", &c);
	scanf("%d", &n0);
	if (c >= a0 && a0 * n0 + a1 <= c * n0) {
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;
}