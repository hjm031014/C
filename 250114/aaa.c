// �Լ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b) {		// ����
	int result;
	result = a + b;
	return result;
}

int sub(int a, int b) {		// ����
	int result;
	result = a - b;
	return result;
}

int dvi(int a, int b) {		// ������
	int result;
	result = a / b;
	return result;
}

int mul(int a, int b) {		// ����
	int result;
	result = a * b;
	return result;
}

int main(){
	int su1, su2, ab;
	printf("������ 1, ������ 2, �������� 3, ������ 4�� �Է��Ͻÿ� : ");
	scanf("%d", &ab);
	printf("�� ������ �Է��Ͻÿ� : ");
	scanf("%d %d", &su1, &su2);

		switch (ab) {
			case 1:
				printf("�� ���� ������� %d", add(su1, su2));
			break;

			case 2:
				printf("�� ���� ������� %d", sub(su1, su2));
				break;

			case 3:
				printf("�� ���� ������� %d", dvi(su1, su2));
				break;

			case 4:
				printf("�� ���� ������� %d", mul(su1, su2));
				break;
		}
}