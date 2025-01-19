
// while을 이용하여 입력 된 값의 구구단 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, cnt=1;
	printf("0 ~ 9까지의 숫자를 입력하시오 : ");
	scanf("%d", &a);
	
	while (cnt <= 9) {
		printf("%d X %d = %d\n", a, cnt, a * cnt);
		cnt += 1;
	}
	return 0;
}

