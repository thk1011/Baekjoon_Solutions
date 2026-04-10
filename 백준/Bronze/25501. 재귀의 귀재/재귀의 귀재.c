#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int recursion(const char* s, int l, int r, int* N) {
	if (l >= r) {
		(*N)++;
		return 1;
	}
	else if (s[l] != s[r]) {
		(*N)++;
		return 0;
	}
	else {
		(*N)++;
		return recursion(s, l + 1, r - 1, N);
	}
}

int isPalindrome(const char* s, int* A) {
	return recursion(s, 0, strlen(s) - 1, A);
}

int main(void) {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int time = 0;
		char word[1001];
		scanf("%s", word);
		int result = isPalindrome(word, &time);
		printf("%d %d\n", result, time);
	}
	
	return 0;
}