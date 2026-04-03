#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int compare(const char* A, const char* B) {

	if (strlen(A) > strlen(B)) return 1;
	if (strlen(B) > strlen(A)) return -1;
	if (strlen(A) == strlen(B)) {
		return strcmp(A, B);
	}

	return 0;

}
int main()
{
	char list[20001][51];
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", list[i]);
	}
	qsort(list, N, sizeof(list[0]), compare);
	for (int i = 0; i < N; i++) {
		if (i == 0 || strcmp(list[i], list[i - 1]) != 0) {
			printf("%s\n", list[i]);
		}
	}
	return 0;
}

