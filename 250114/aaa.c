/*
// while을 이용하여 입력 된 값의 구구단 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, cnt=1;		// a : 입력변수, cnt : 카운트 변수햣
	printf("0 ~ 9까지의 숫자를 입력하시오 : ");
	scanf("%d", &a);
	
	while (cnt <= 9) {
		printf("%d X %d = %d\n", a, cnt, a * cnt);
		cnt += 1;
	}
	return 0;
}
*/


/*
// 양의 정수를 입력받아, 그 수만큼 Hello World! 출력 (while 사용)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a, cnt = 1;		// a : 입력 변수, cnt : 카운트 변수
	printf("양의 정수를 입력하시오 : \n");
	// scanf("%d", &a);
	a = 10;
	while (cnt <= a) {
		printf("Hello World\n");
		cnt += 1;
	}
}
// 155쪼ㅓㄱ

*/

//	두 개의 정수를 입력 받아 그 사이의 정수의 총 합 구하기 (for문) 
//	ex) 3, 5 => 3+4+5

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, sum;
	
	printf("총 합계를 구할 두 정수를 입력하시오 : ");
	scanf("%d", &a);
	scanf("%d", &b);

	for (sum = 0; a<=b; a++){
		sum += a;
	}
	printf("%d", sum);
}