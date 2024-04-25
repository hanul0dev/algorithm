#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	int a,b;

	scanf("%d %d", &a, &b);
	/*if (a == 1 && b == 1) {
		printf("1");
	}
	else
		printf("0");*/
	printf("%d", (a && !b) || (!a && b));

	return 0;
}
