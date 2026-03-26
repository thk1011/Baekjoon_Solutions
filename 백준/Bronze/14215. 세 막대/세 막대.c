#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int side[3];
	int max = 0;
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &side[i]);
		if (side[i] > max) {
			max = side[i];
		}
	}
	if (2 * max < side[0] + side[2] + side[1]) {
		printf("%d", side[0] + side[1] + side[2]);
	}
	else
	{
		for (int i = 0; i < 3; i++) {
			if (side[i] != max) {
				sum += side[i];
			}
		}
		while (max >= sum) {
			max--;
		}
		printf("%d", sum + max);
	}
	
	
	
	

	return 0;
}