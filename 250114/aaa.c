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

	switch (ab)
	{
	default:
		break;
	}
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%d %d", &su1, &su2);
	printf("%d",add(su1, su2));
}