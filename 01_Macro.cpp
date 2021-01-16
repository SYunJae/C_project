#include "pch.h"
#include "CL_project_Header.h"


#define  NAME			"홍길동"
#define  AGE			24
#define  PRINT_ADDR		puts("주소: 서울시 관악구\n")
#define  PRINT_HELLO	printf("Hello, World!\n")

#define  SQUARE(X)		((X) * (X))
#define  MAX(A, B)		( ((A) > (B)) ? (A) : (B) )

#define  PI				3.14
#define  PRODUCT(X, Y)	((X) * (Y))
#define  CIRCLE_AREA(R) (PRODUCT((R), (R)) * PI)

#define  FOR(I,S,E) \
for(int I = S; I <= E; I++)

///#pragma pack(1)
struct SizeTest
{
	char arr[2];
	int i;
};

#define  STRING_JOB(A, B)  #A "의 직업은 " #B "이다."
#define  STRCOMBINE(A, B)  A ## "의 직업은 " ## B "이다."
#define  COMBINE(UP, LOW)  UP ## 00 ## LOW
#define  STD_NUM(Y, S, P)  Y ## S ## P


//x|----------------------------------------------------------------------------------------------------|

void Macro_main()
{
	double num = PI * 3.4;
	printf("PI * 3.4 = %f \n\n", num);
	printf("이름: %s \n", NAME);
	printf("나이: %d \n", AGE);
	PRINT_ADDR;
	PRINT_HELLO;
	NEW_LINE;

	printf("제곱하고자 하는 값을 입력하시오. X = ");
	int x;
	scanf_s("%d", &x);

	printf("%d의 제곱 = %d \n", x, SQUARE(x));
	printf("%f의 제곱 = %f \n", num, SQUARE(num));
	printf("100 ÷ %d^%d = %d \n", x, x, (100 / SQUARE(x)));
	printf("5와 7 중 최대값 = %d \n", MAX(5, 7));
	NEW_LINE;

	float rad = 2.4f;
	printf("반지름이 %g인 원의 넓이 = %g \n", rad, CIRCLE_AREA(rad));
	NEW_LINE;

	struct SizeTest a;
	printf(" size of struct 'a' : %d \n", sizeof(a));
	NEW_LINE;

	printf(" %s \n", STRING_JOB(이방원, King));
	printf(" %s \n", STRCOMBINE("이방원", "King"));
	printf(" 학번 : %d \n", STD_NUM(10, 65, 075));
	int digit = COMBINE(22, 77);
	printf(" %d \n", digit);
}


#if 0

#define  SQUARE_1(X)    X  *  X
#define  SQUARE_2(X)   (X  *  X)
#define  SQUARE_3(X)  ((X) * (X))

//void main()
{
	float result;
	result = 100 / SQUARE_1(2); // 100 ÷ 2²연산 결과로 4를 예상했지만,
								// 100 ÷ 2 * 2 로 치환되므로 실제 연산 결과는 100이 된다.
	result = 100 / SQUARE_2(2); // 이 문제는 SQUARE_2(X)로 해결할 수 있다.

	int a = 7;
	result = SQUARE_2(a - 1); // (a - 1)²= (7 - 1)²연산 결과로 36을 예상했지만,
							  // (a - 1 * a - 1)로 치환되므로 실제 연산 결과는 -1이 된다.
	result = SQUARE_3(a - 1); // 이 문제는 SQUARE_3(X)로 해결할 수 있다.
}


/// | 함수로 표현 |

	int Max(int a, int b)
	{
		if (a > b) return a;
		return b;
		
		/* OR */
	
		return (a > b) ? a : b;
	}

	float Max(float a, float b)
	{
		if (a > b) return a;
		return b;

		/* OR */

		return (a > b) ? a : b;
	}

/// | 매크로로 표현 |

	#define MAX(A, B) ( ((A) > (B)) ? (A) : (B) )

	#pragma pack(1)
	struct SizeTest
	{
		char arr[2];
		int i;
	};

	int main()
	{
		struct SizeTest a;
		printf("size of struct 'a' : %d \n", sizeof(a));

		return 0;
	}


#endif