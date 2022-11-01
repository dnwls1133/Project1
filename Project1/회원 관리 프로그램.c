#include <stdio.h>

int main()
{
	char str[10] = {0};
	int a[10] = { 0 };
	int b;
	char c;

	printf("숫자 10개를 입력하시오 :\n");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &b);
		a[i] = b;
	}
	printf("문자 10개를 입력하시오 :\n");
	for (int j = 0; j < 10; j++) {
		scanf_s("%c", &c);
		str[j] = c;
	}

}