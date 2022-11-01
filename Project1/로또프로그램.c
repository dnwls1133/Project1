#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
	int lotto[6] = { 0 };
	int i = 0, n = 0;
	int lottoc[6] = {0};
	srand((unsigned)time(NULL));

	while (1)
	{
		

		int r = rand() % 45 + 1;

		for (i = 0; i < n; i++) {
			if (lottoc[i] == r) {
				break;
			}
		}
		if (n == i) {
			lottoc[n++] = r;
		}
		if (n >= 6) {
			
			break;
		}
		
	}

	printf("==========================================\n");
	printf("이번주의 로또번호\n");
	for (i = 0; i < 6; i++) {
		printf("%6d", lottoc[i]);
	}
	printf("\n");
	printf("-------------------------------------------\n");

	int str, lotto_cnt;
	while (1)
	{
		
			for (int j = 0; j < 6; j++)
			{
				lotto[j] = rand() % 45 + 1;
				for (int k = 0; k < j; k++) {
					if (lotto[j] == lotto[k] && j > 0)
					{
						j--;
					}
				}
			}
			printf("========================================\n");
			for (i = 0; i < 6; i++) {
				printf("%6d", lotto[i]);
			}
			printf("-----------------------------------------\n");

			if (lotto == lottoc) {
				printf("로또당첨 되었습니다.\n");
				break;
			}
			else {
                    printf("로또 당첨되지 않있습니다.");
					continue;
			}
				
			
		
	}







}

