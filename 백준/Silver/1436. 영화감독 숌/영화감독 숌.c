#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int N;
	scanf("%d", &N);
	int num = 665;
	int time = 0;
	while (time != N) {
		num++;
		for (int i = 1; i < 8; i++) {
			if ((num % (int)pow(10, i))/(int)pow(10,i-1) == 6) {
				if ((num % (int)pow(10, i + 1))/(int)pow(10,i) == 6) {
					if ((num %  (int)pow(10, i + 2))/(int)pow(10,i+1) == 6) {
						time++;
						break;
					}
				}
			}
		}
		
	}
	printf("%d", num);

	return 0;
}

