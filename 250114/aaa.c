
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

