#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int side[3];
	int max;
	while (1) {
		max = 0;
		for (int i = 0; i < 3; i++) {
			scanf("%d", &side[i]);
			if (side[i] > max) {
				max = side[i];
			}
		}
		if (max == 0) {
			exit(0);
		}
		if (2 * max < side[0] + side[2] + side[1]) {
			if (side[0] == side[1] && side[1] == side[2]) {
				printf("Equilateral\n");
			}
			else if (side[0] == side[1] || side[1] == side[2] || side[0] == side[2]) {
				printf("Isosceles\n");

			}
			else
			{
				printf("Scalene\n");
			}
		}
		else
		{
			printf("Invalid\n");
		}
	}
	
	

	return 0;
}