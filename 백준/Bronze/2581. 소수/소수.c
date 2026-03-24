#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int from, to, min;
	int sum = 0;
	scanf("%d %d", &from, &to);
	for (int i = from; i <= to; i++) {
		if (i == 2) {
			min = 2;
			sum += 2;
		}
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				break;
				
			}
			else if (j == i - 1) {
				if (sum == 0) {
					min = i;
				}
				sum += i;
			}
		}
	}
	if (sum != 0) {
		printf("%d\n", sum);
		printf("%d", min);

	}
	else
	{
		printf("-1");
	}
	return 0;

}