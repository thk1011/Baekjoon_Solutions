#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* A, const void* B);
//int find(long long target, long long size);
char S[10000][501];

int main()
{
    
    int N, M;
    int answer = 0;
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++) {
        scanf("%s", S[i]);
    }
    qsort(S, N, sizeof(S[0]), compare);
    
    for (int i = 0; i < M; i++) {
        char X[501];
        scanf("%s", X);

        int high = N-1;
        int low = 0; 
        while (high >= low) {

            int mid = (high + low) / 2;
            if (strcmp(X, S[mid]) == 0) {
                answer++;
                break;
            }
            else if (strcmp(X, S[mid]) > 0) {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    printf("%d", answer);
    return 0;
}

int compare(const void* A, const void* B) {
    return (strcmp((char*)A, (char*)B));
}
