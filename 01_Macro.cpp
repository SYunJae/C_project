#include "pch.h"
#include "CL_project_Header.h"


#define  NAME			"ȫ�浿"
#define  AGE			24
#define  PRINT_ADDR		puts("�ּ�: ����� ���Ǳ�\n")
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

#define  STRING_JOB(A, B)  #A "�� ������ " #B "�̴�."
#define  STRCOMBINE(A, B)  A ## "�� ������ " ## B "�̴�."
#define  COMBINE(UP, LOW)  UP ## 00 ## LOW
#define  STD_NUM(Y, S, P)  Y ## S ## P


//x|----------------------------------------------------------------------------------------------------|

void Macro_main()
{
	double num = PI * 3.4;
	printf("PI * 3.4 = %f \n\n", num);
	printf("�̸�: %s \n", NAME);
	printf("����: %d \n", AGE);
	PRINT_ADDR;
	PRINT_HELLO;
	NEW_LINE;

	printf("�����ϰ��� �ϴ� ���� �Է��Ͻÿ�. X = ");
	int x;
	scanf_s("%d", &x);

	printf("%d�� ���� = %d \n", x, SQUARE(x));
	printf("%f�� ���� = %f \n", num, SQUARE(num));
	printf("100 �� %d^%d = %d \n", x, x, (100 / SQUARE(x)));
	printf("5�� 7 �� �ִ밪 = %d \n", MAX(5, 7));
	NEW_LINE;

	float rad = 2.4f;
	printf("�������� %g�� ���� ���� = %g \n", rad, CIRCLE_AREA(rad));
	NEW_LINE;

	struct SizeTest a;
	printf(" size of struct 'a' : %d \n", sizeof(a));
	NEW_LINE;

	printf(" %s \n", STRING_JOB(�̹��, King));
	printf(" %s \n", STRCOMBINE("�̹��", "King"));
	printf(" �й� : %d \n", STD_NUM(10, 65, 075));
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
	result = 100 / SQUARE_1(2); // 100 �� 2������ ����� 4�� ����������,
								// 100 �� 2 * 2 �� ġȯ�ǹǷ� ���� ���� ����� 100�� �ȴ�.
	result = 100 / SQUARE_2(2); // �� ������ SQUARE_2(X)�� �ذ��� �� �ִ�.

	int a = 7;
	result = SQUARE_2(a - 1); // (a - 1)��= (7 - 1)������ ����� 36�� ����������,
							  // (a - 1 * a - 1)�� ġȯ�ǹǷ� ���� ���� ����� -1�� �ȴ�.
	result = SQUARE_3(a - 1); // �� ������ SQUARE_3(X)�� �ذ��� �� �ִ�.
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