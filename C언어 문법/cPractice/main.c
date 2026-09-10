#include <stdio.h>
#define EXCHANGE_RATE 1197
// stdio.h란 ?
/*
Standard Input Output의 약자, 표준 입출력 기능을 모아둔 헤더파일
사용함으로서 printf, scanf, getchar, putchar 등의 함수를 사용
*/


int main(void) {

	//int a, b;

	//printf("첫 번째 숫자를 입력하시오 :");
	//scanf_s("%d", &a);

	//printf("두 번째 숫자를 입력하시오 :");
	//scanf_s("%d", &b);

	//printf("두 수의 합 : %d\n", a + b);
	//printf("두 수의 차 : %d\n", a - b);
	//printf("두 수의 곱 : %d\n", a * b);
	//printf("두 수의 나눗셈 : %d\n", a / b);

	short z;
	int x;
	long y;
	long long w;

	char c;

	float f;
	double d;
	long double e;

	printf("%d",sizeof(z));
	printf("%d", sizeof(x));
	printf("%d", sizeof(y));
	printf("%d", sizeof(w));
	printf("%d", sizeof(c));
	printf("%d", sizeof(f));
	printf("%d", sizeof(d));
	printf("%d\n\n", sizeof(e));

	z = 32767;

	printf("%d", z);
	z++;

	printf("%d", z);
	z++;

	printf("%d", z);
	z++;

	printf("%d",EXCHANGE_RATE);

	return 0;
}

//디버깅이란 ?

// 프로그램에 숨어 있는 벌레를 찾아내서 고치는 과정 