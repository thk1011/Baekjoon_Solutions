#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int mx, my, x, y, N;
	int iX, iY;
	scanf("%d", &N);
	scanf("%d %d", &iX, &iY);
	mx = iX;
	x = iX;
	my = iY;
	y = iY;
	
	for (int i = 0; i < N-1; i++) {
		scanf("%d %d", &iX, &iY);
		if (iX > x) {
			x = iX;
		}
		else if (iX < mx) {
			mx = iX;
		}
		if (iY > y) {
			y = iY;
		}
		else if (iY < my) {
			my = iY;
		}
	}
	printf("%d", (x - mx) * (y - my));
	return 0;

}