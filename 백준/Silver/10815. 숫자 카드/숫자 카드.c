#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* A, const void* B);
int find(long long target, long long size);

long long list1[500000];
long long list2[500000];

int main()
{
    long long N, M;
    scanf("%lld", &N);
    for (int i = 0; i < N; i++) {
        scanf("%lld", &list1[i]);
    }
    qsort(list1, N, sizeof(list1[0]), compare);
    scanf("%lld", &M);
    for (int i = 0; i < M; i++) {
        scanf("%lld", &list2[i]);
    }
    for (int i = 0; i < M; i++) {
        printf("%d ", find(list2[i], N));
    }
    return 0;
}

int compare(const void* A, const void* B) {
    long long n1 = *(long long*)A;
    long long n2 = *(long long*)B;
    if (n1 > n2)return 1;
    if (n1 < n2)return -1;
    return 0;
}

int find(long long target, long long size) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (list1[mid] == target) return 1;
        else if (list1[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return 0;
}