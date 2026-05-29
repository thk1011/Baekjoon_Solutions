#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int solution(int a, int b) {
    int answer = 0;
    int n;
    for (int i = 1; i<6; i++){
        if (b/(int)pow(10,i) == 0){
            n = i;
            break;
        }
    }
    if ((int)pow(10,n)*a+b >= 2*a*b) answer = (int)pow(10,n)*a+b;
    else answer = 2*a*b;
    
    return answer;
}