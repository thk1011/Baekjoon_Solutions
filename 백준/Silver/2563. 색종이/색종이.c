#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>]
#include <math.h>



int main() {
	int N;
	int Dimention[100][100] = { 0 };
	int input_x, input_y;
	int answer = 0;
	scanf("%d", &N);
	for (int i = 0; i < N;i++) {
		scanf("%d %d", &input_x, &input_y);
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				Dimention[input_x+j][input_y+k] = 1;
			}
		}
		
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (Dimention[i][j] == 1) {
				answer++;
			}
		}
	}
	printf("%d", answer);


	return 0;
}