#include <stdio.h>
#include <stdlib.h>

int main() {
	int N = 0, M = 0, i = 1;
	printf("Enter N: ");
	scanf("%d", &N);
	printf("Enter M: ");
	scanf("%d", &M);
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