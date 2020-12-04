#include <stdio.h>

int main() {
	int N = 0, M = 0;
	char bufStub = 0;
	while (1) {					//infinity while
		bufStub = 0;
		printf("Enter integer number N: ");
		if (!scanf("%d", &N)) {
			printf("Wrong input\n");
			while (bufStub != '\n')			//buffercleaner
				scanf("%c", &bufStub);
		}
		else {
			scanf("%c", &bufStub);
			if (bufStub == '\n')
				break;
			printf("Wrong input\n");
			while (bufStub != '\n')
				scanf("%c", &bufStub);
		}
	}
	while (1) {
		bufStub = 0;
		printf("Enter integer number M: ");
		if (!scanf("%d", &M)) {
			printf("Wrong input\n");
			while (bufStub != '\n')
				scanf("%c", &bufStub);
		}
		else {
			scanf("%c", &bufStub);
			if (bufStub == '\n')
				break;
			printf("Wrong input\n");
			while (bufStub != '\n')
				scanf("%c", &bufStub);
		}
	}
	

	do {
		if (N == 0 || M == 0) {
			printf("Error!");
			break;
			}
		if (N < 0)
			N *= (-1);
		if (M < 0)
			M *= (-1);
		if (N > M) 
			N -= M;
		else M -= N;
	} while (N != M);
	printf("GCD = %d", N);
	getchar();
	return 0;
}