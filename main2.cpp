#include <stdio.h>

int main(void)
{
	int a, b, result = 0;
	char c;

	printf("수식을 입력하세요 (예10 + 6): ");
	scanf_s("%d %c %d", &a, &c, 1, &b);

	switch (c)
	{
	case '+':
		result = a + b;
		printf("계산결과: %d\n", result);
		break;
		
	case '-':
			result = a - b;
			printf("계산결과: %d\n", result);
			break;
	case'*':
		result = a * b;
		printf("계산결과: %d\n", result);
		break;
	case'/':
		result = a / b;
		printf("계산결과: %d\n", result);
		break;
	default:
		printf("잘못된 연산자 입니다.\n");
		break;
	}
	return 0;
}