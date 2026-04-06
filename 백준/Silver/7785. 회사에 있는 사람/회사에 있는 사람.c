#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* A, const void* B);
//int find(long long target, long long size);
char S[1000001][6];
char answer[1000001][6];
long long N;
int main()
{
    scanf("%lld", &N);
    for (int i = 0; i < N; i++) {
        char what[6];
        scanf("%s", S[i]);
        scanf("%s", what);
    }
    qsort(S, N, sizeof(S[0]), compare);
    long long i = 0;
    long long time = 1;
    while (i<N) {
        if (strcmp(S[i], S[i+1])==0) {
            time++;
        }
        else
        {
            if (time % 2 != 0) {
                printf("%s\n", S[i]);
                
            }
            time = 1;
        }
        i++;
    }
    return 0;
}

int compare(const void* A, const void* B) {
    return (strcmp((char*)B, (char*)A));
}