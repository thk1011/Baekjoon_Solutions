#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int N;
	scanf("%d", &N);
	int answer = 0;
	int A;
	for (int i = 0; i <= 1666; i++) {
		if (N - 3 * i >= 0) {
			if ((N - 3 * i) % 5 == 0) {
				answer += i + (N - 3 * i) / 5;
				break;
			}
		}
		
	}
	if (answer == 0) {
		answer = -1;
	}
	printf("%d", answer);

	return 0;
}
