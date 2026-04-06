#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* A, const void* B);
long long find(long long a, long long b);

long long list1[1000001];

long long list2[1000001];
int main() {
	long long N;
	scanf("%lld", &N);
	for (long long i = 0; i < N; i++) {
		scanf("%lld", &list1[i]);
		list2[i] = list1[i];
	}
	qsort(list2, N, sizeof(list2[0]), compare);
	long long j = 0;
	for (long long i = 1; i < N; i++) {
		if (list2[j] != list2[i]) {
			j++;
			list2[j] = list2[i];
		}
	}
	long long X = j+1;
	for (int i = 0; i < N; i++) {
		printf("%lld ", find(list1[i],X));
	}
	

	return 0;
}

int compare(const void* A, const void* B) {
	long long n1 = *(long long*)A;
	long long n2 = *(long long*)B;
	if (n1 > n2) return 1;
	if (n1 < n2) return -1;
	return 0;
}

long long find(long long target, long long size) {
	int low = 0, high = size - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (list2[mid] == target) return mid;
		else if (list2[mid] < target) low = mid + 1;
		else high = mid - 1;
	}
	return -1;
}