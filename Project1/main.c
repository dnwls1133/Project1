#include<stdio.h>

int main()
{
	int a;
	int A[][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20},
		{21,22,23,24,25}
	};
	int B[][5] = {0};
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%5d", A[i][j]);
		}
		printf("\n");
	}
	while (1) {
		scanf_s("%d", &a);

		if (a == 1) {
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 5; j++) {
					A[4 - j][i]=A[i][j];
				}
			}
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 5; j++) {
					printf("%5d", A[i][j]);
				}
				printf("\n");
			}
			continue;
		}
		else if (a == 2) {
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 5; j++) {
					A[j][4-i] = A[i][j];
				}
			}
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 5; j++) {
					printf("%5d", A[i][j]);
				}
				printf("\n");
			}
			continue;
		}
	}

}