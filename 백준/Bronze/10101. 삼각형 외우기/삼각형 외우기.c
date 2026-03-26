#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int angle[3];
	for (int i = 0; i < 3; i++) {
		scanf("%d", &angle[i]);
	}
	if (angle[0] + angle[1] + angle[2] == 180) {
		if (angle[0] == angle[1] && angle[1] == angle[2]) {
			printf("Equilateral");
		}
		else if (angle[0] == angle[1] || angle[1] == angle[2] || angle[0] == angle[2]) {
			printf("Isosceles");

		}
		else
		{
			printf("Scalene");
		}
	}
	else
	{
		printf("Error");
	}
	

	return 0;
}