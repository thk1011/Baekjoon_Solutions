#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(void) {
	int L;
	char word[51];
	long long answer = 0;
	scanf("%d", &L);
	for (int i = 0; i < L; i++) {
		scanf(" %c", &word[i]);
		answer += ((int)word[i] - 'a' + 1) * (long long)pow(31, i);
	}
	printf("%lld", answer);
	
	
	return 0;
}