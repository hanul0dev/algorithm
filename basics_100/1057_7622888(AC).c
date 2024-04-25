#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int a,b;

	scanf("%d %d", &a, &b);
	if (a == 0 && b == 0) {
		printf("1");
	}
	else if (a == 1 && b == 1) {
		printf("0");
	}
	if (a == 0 && b == 1) {
		printf("0");
	}

	return 0;
}
