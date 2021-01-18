#include "pch.h"
#include "CL_project_Header.h"


#define  NAME			"Ela Son"
#define  AGE			24
#define  PRINT_ADDR		puts("ADDRESS : Uijeongbu City, Gyeonggi-do\n")
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

#define  STRING_JOB(A, B)  #A "'s Job is " #B "."
#define  STRCOMBINE(A, B)  A ## "'s Job is " ## B "."
#define  COMBINE(UP, LOW)  UP ## 00 ## LOW
#define  STD_NUM(Y, S, P)  Y ## S ## P


void Macro_EX()
{
	double num = PI * 3.4;
	printf("PI * 3.4 = %f \n\n", num);
	printf("NAME : %s \n", NAME);
	printf(" AGE : %d \n", AGE);
	PRINT_ADDR;
	PRINT_HELLO;
	NEW_LINE;

	printf("Enter the Value, you'd like to square. X = ");
	int x;
	scanf_s("%d", &x);

	printf("SQUARE of %d = %d \n", x, SQUARE(x));
	printf("SQUARE of %f = %f \n", num, SQUARE(num));
	printf("100 �� %d^%d = %d \n", x, x, (100 / SQUARE(x)));
	printf("Maximum of 5 and 7 : %d \n", MAX(5, 7));
	NEW_LINE;

	float rad = 2.4f;
	printf("Circle Area with radius, %g = %g \n", rad, CIRCLE_AREA(rad));
	NEW_LINE;

	struct SizeTest a;
	printf(" size of struct 'a' : %d \n", sizeof(a));
	NEW_LINE;

	printf(" %s \n", STRING_JOB(Ela Son, Programmer));
	printf(" %s \n", STRCOMBINE("Ela Son", "Programmer"));
	printf(" Student Number : %d \n", STD_NUM(10, 65, 075));
	int digit = COMBINE(22, 77);
	printf(" %d \n", digit);
}


#if 0

#define  SQUARE_1(X)    X  *  X
#define  SQUARE_2(X)   (X  *  X)
#define  SQUARE_3(X)  ((X) * (X))

#pragma pack(1)
struct SizeTest
{
	char arr[2];
	int i;
};


void main()
{
	float result;
	result = 100 / SQUARE_1(2); // 100 �� 2������ ����� 4�� ����������,
								// 100 �� 2 * 2 �� ġȯ�ǹǷ� ���� ���� ����� 100�� �ȴ�.
	result = 100 / SQUARE_2(2); // �� ������ SQUARE_2(X)�� �ذ��� �� �ִ�.

	int a = 7;
	result = SQUARE_2(a - 1); // (a - 1)��= (7 - 1)������ ����� 36�� ����������,
							  // (a - 1 * a - 1)�� ġȯ�ǹǷ� ���� ���� ����� -1�� �ȴ�.
	result = SQUARE_3(a - 1); // �� ������ SQUARE_3(X)�� �ذ��� �� �ִ�.


	struct SizeTest a;
	printf("size of struct 'a' : %d \n", sizeof(a));
}


/// | �Լ��� ǥ�� |

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

/// | ��ũ�η� ǥ�� |

	#define MAX(A, B) ( ((A) > (B)) ? (A) : (B) )

#endif