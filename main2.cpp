#include <stdio.h>

int main(void)
{
	int a, b, result = 0;
	char c;

	printf("������ �Է��ϼ��� (��10 + 6): ");
	scanf_s("%d %c %d", &a, &c, 1, &b);

	switch (c)
	{
	case '+':
		result = a + b;
		printf("�����: %d\n", result);
		break;
		
	case '-':
			result = a - b;
			printf("�����: %d\n", result);
			break;
	case'*':
		result = a * b;
		printf("�����: %d\n", result);
		break;
	case'/':
		result = a / b;
		printf("�����: %d\n", result);
		break;
	default:
		printf("�߸��� ������ �Դϴ�.\n");
		break;
	}
	return 0;
}