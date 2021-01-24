#include "pch.h"
#include "CL_project_Header.h"

#define INCLUDE 0
#if INCLUDE

int num; // 전역 변수는 기본 0으로 초기화 된다.

void Add(int val)
{
	num += val;
}

void Adder(void)
{
/// < 정적변수 >
	static int s_num; // 초기화하지 않으면 '기본 0'으로 초기화된다.

/// < 지역변수 >
	int l_num = 0; // 초기화하지 않으면' 쓰레기 값'으로 초기화된다.

	s_num++;  l_num++;
	printf(" static num = %d,  local num = %d \n", s_num, l_num);
}


int CountingFunc(void)
{
	int num = 1; // 선언 이후부터 CountingFunc()의 num은 접근 가능한 변수가 된다.
	num++;

	printf(" CountingFunc num : %d \n", num);

	return 0;
}

#endif // INCLUDE


void Variable_EX()
{
//* | 변수 선언 |
/// : 변수는 메모리 RAM에 공간을 만들고 이름을 붙인다.

	int a;
	int b, c; // 콤마(,)로 여러 개의 변수를 같이 선언할 수 있다.


//* | 변수 초기화 |
/// : 선언된 변수에 처음 값을 저장하는 것이다.
///   변수를 선언만 하고 초기화하지 않으면 '쓰레기값(아무런 의미가 없는 값)'이 저장된다.

	a = 3;
	b = 7, c = 5;

//? | 변수 대입 |
//  : 등호는 대입을 의미!! 즉, '='는 메모리 공간에 data를 넣는 연산이다.

	printf(" %d + %d + %d = %d \n", a, b, c, a + b + c); // 변수끼리 연산 가능하다.


//* | 변수의 선언 및 초기화 |
/// : 선언과 동시에 초기화도 가능하다.

	int d = 0;
	int e = 1, f = 2;

	printf(" %d * %d = %d \n", e, f, e * f);
	NEW_LINE;

#if INCLUDE

///	< 전역변수 >
	printf(" Global Variable : num = %d \n", num);
	Add(3);
	printf(" Global Variable after Add(3) : num = %d \n", num);
	NEW_LINE;
	
///	< 지역변수 >
	int num = 5;
	printf(" Local Variable : num = %d \n", num);
	num += 3;
	printf(" Local Variable after + 3 : num = %d \n", num);
	NEW_LINE;

/// < 정적변수 >
	for (int i = 0; i < 3; i++)
		Adder();

///	< 지역변수 >
	for (int i = 0; i < 3; i++)
	{
		int num = 0;
		num++;

		printf(" Local Variable in for문 : num = %d \n", num);
	}


	int num = 21; // 선언 이후부터 main()의 num은 접근 가능한 변수가 된다.
	CountingFunc();
	printf(" main num : %d \n", num);

#endif // INCLUDE
}


void DataType_EX()
{
/// < 정수 및 실수 자료형 > 

//# | 자료형으로 크기 확인 |

	printf(" char  size : %d byte \n", sizeof(char));
	printf(" short size : %d byte \n", sizeof(short));
	printf(" int   size : %d byte \n", sizeof(int));
	printf(" long  size : %d byte \n", sizeof(long));
	printf(" long long size : %d byte \n", sizeof(long long));

	printf(" float  size : %d byte \n", sizeof(float));
	printf(" double size : %d byte \n", sizeof(double));
	printf(" long double size : %d byte \n", sizeof(long double));

	NEW_LINE;

//# | 변수형으로 크기 확인 |

	char a; short b; int c; long d; long long e;

	printf(" char  a size : %d byte \n", sizeof(a));
	printf(" short b size : %d byte \n", sizeof(b));
	printf(" int   c size : %d byte \n", sizeof(c));
	printf(" long  d size : %d byte \n", sizeof(d));
	printf(" long long e size : %d byte \n", sizeof(e));

	float f; double D; long double lD;

	printf(" float  f size : %d byte \n", sizeof(f));
	printf(" double D size : %d byte \n", sizeof(D));
	printf(" long double lD size : %d byte \n", sizeof(lD));

	NEW_LINE;

//# | float의 오차 |

	float fnum = 0.0f; // 실제 컴퓨터는 0.0을 저장할 수 없다.
	for (int i = 0; i < 100; i++) {
		fnum += 0.1f;
	}
	printf("  float형으로 0.1을 100번 더한 결과 = %f\n", fnum);
	
//# | double로 실수 오차를 줄임 |

	double dnum = 0.0;
	for (int i = 0; i < 100; i++) {
		dnum += 0.1;
	}
	printf(" double형으로 0.1을 100번 더한 결과 = %f\n", dnum);
	NEW_LINE;


/// < 문자 자료형 > 

	char ch1 = 'A', ch2 = 'a';

	printf(" ASCII Code Int Value : ch1 = %d, ch2 = %d \n", ch1, ch2);
	printf(" ASCII Code Character : ch1 = '%c', ch2 = '%c' \n", ch1, ch2);
	NEW_LINE;

	printf(" 문자 'D'로 입력받은 후 아스키코드 값으로 출력 : %d \n", 'D');
	printf(" 정수  69를 입력받은 후 아스키코드 문자로 출력 : %c \n",  69);
}