
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// �� ������ �Է� �޾� ��� �������� ����
	int a, b;
	printf("�� ������ �Է��Ͻÿ� : ");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("�� : %d\n", a / b), printf("������ : %d", a % b);

	return 0;

}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
 // ������ ����� ��Ÿ���� ���α׷�
	int a;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &a);
	printf("%d�� ������ : %d", a, a * a);

	return 0;

}