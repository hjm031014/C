/*
// while�� �̿��Ͽ� �Է� �� ���� ������ ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, cnt=1;		// a : �Էº���, cnt : ī��Ʈ �����w
	printf("0 ~ 9������ ���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &a);
	
	while (cnt <= 9) {
		printf("%d X %d = %d\n", a, cnt, a * cnt);
		cnt += 1;
	}
	return 0;
}
*/


/*
// ���� ������ �Է¹޾�, �� ����ŭ Hello World! ��� (while ���)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, cnt = 1;		// a : �Է� ����, cnt : ī��Ʈ ����
	printf("���� ������ �Է��Ͻÿ� : \n");
	// scanf("%d", &a);
	a = 10;
	while (cnt <= a) {
		printf("Hello World\n");
		cnt += 1;
	}
}
// 155�ɤä�

*/

//	�� ���� ������ �Է� �޾� �� ������ ������ �� �� ���ϱ� (for��) 
//	ex) 3, 5 => 3+4+5

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, sum;
	
	printf("�� �հ踦 ���� �� ������ �Է��Ͻÿ� : ");
	scanf("%d", &a);
	scanf("%d", &b);

	for (sum = 0; a<=b; a++){
		sum += a;
	}
	printf("%d", sum);
}