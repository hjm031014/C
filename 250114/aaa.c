
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

/*
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
*/

/*
#include <stdio.h>
int main() {
	
	int i;
	float num = 0.0;

	for (i = 0; i < 100; i++)
		num += 0.1;
	printf("0.1�� 100�� ���� �� : %f\n", num);
	

	int a = 15;
	int b = 20;
	int c = a | b;
	printf("OR = %d", c);

	return 0;
	
}
*/

// while�� �̿��Ͽ� �Է� �� ���� ������ ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, cnt=1;
	printf("0 ~ 9������ ���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &a);
	
	while (cnt <= 9) {
		printf("%d X %d = %d\n", a, cnt, a * cnt);
		cnt += 1;
	}
	return 0;
}

