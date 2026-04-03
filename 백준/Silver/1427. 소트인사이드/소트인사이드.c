#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int compare(const int* A, const int* B) {
	return (*B-*A);
}
int main()
{
	char list[11];
	scanf("%s", list);
	int answer[11];
	for (int i = 0; i < strlen(list); i++) {
		answer[i] = (int)list[i] - '0';
	}
	qsort(answer, strlen(list), sizeof(int), compare);
	for (int i = 0; i < strlen(list); i++) {
		printf("%d", answer[i]);
	}

	return 0;
}

