#include <stdio.h>

int main() {
	int N = 0, M = 0, i = 1;
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
	if (N < 0)
		N *= -1;
	if (M < 0)
		M *= -1;
	while (i * M <= N) {
		if (N == i * M) {
			printf("TRUE\n");
			break;
		}
		else i++;
	}
	if (!(N == i * M))
		printf("FALSE\n");
	getchar();
	return 0;
}