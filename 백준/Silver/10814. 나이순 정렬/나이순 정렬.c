#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* A, const void* B);
struct member {
	int age;
	char name[101];
	int number;
};
struct member list[100001];
int main() {
	int N;
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &list[i].age);
		scanf("%s", list[i].name);
		list[i].number = i;
	}
	qsort(list, N, sizeof(list[0]), compare);
	for (int i = 0; i < N; i++) {
		printf("%d %s\n", list[i].age, list[i].name);
	}

	return 0;
}

int compare(const void* A, const void* B) {
	struct member* m1 = (struct member*)A;
	struct member* m2 = (struct member*)B;
	if (m1->age > m2->age) return 1;
	if (m1->age < m2->age) return -1;
	return (m1->number - m2->number);

}