#include <stdio.h>

int main() {
	int N = 0, M = 0;
	char bufStub = 0;
	while (1) {
		bufStub = 0;
		printf("Enter integer number N: ");
		if (!scanf("%d", &N))
			return -1;
		else {
			scanf("%c", &bufStub);
			if (bufStub == '\n')
				break;
			return -1;
		}
	}
	while (1) {
		bufStub = 0;
		printf("Enter integer number M: ");
		if (!scanf("%d", &M))
			return -1;
		else {
			scanf("%c", &bufStub);
			if (bufStub == '\n')
				break;
			return -1;
		}
	}
	do {
		if (N > M) {
			if (N % M == 0) {
				printf("GCD = %d", M);
				break;
			}
			else N %= M;
		}

		else {
			if (M % N == 0) {
				printf("GCD = %d", N);
				break;
			}
			else
				M %= N;
		}
	} while (N != 0 || M != 0);
	getchar();
	return 0;
}