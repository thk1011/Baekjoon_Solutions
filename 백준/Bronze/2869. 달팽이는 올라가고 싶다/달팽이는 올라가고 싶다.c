#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>



int main() {
	int plus, minus, value;
	int location = 0;
	int day = 1;
	int i = 10;
	scanf("%d %d %d", &plus, &minus, &value);
	int A = plus - minus;
	value = value - plus;
	day += value / A;
	if (value % A != 0) {
		printf("%d", day+1);
	}
	else
	{
		printf("%d", day);
	}


	return 0;
}