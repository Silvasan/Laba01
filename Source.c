#include <stdio.h>
#include <stdlib.h>

int main() {
	int N = 0, M = 0, i = 1;
	char bufStub = 0;			//buffer
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
	while (i * M <= N) {
		if (N == i * M) {
			printf("TRUE\n");
			break;
		}
		else i++;
	}
	if (!(N == i * M))
		printf("FALSE\n");
	system("pause");
	return 0;
}