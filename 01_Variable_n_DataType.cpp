#include "pch.h"
#include "CL_project_Header.h"



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

	printf("%d + %d = %d \n", a, b, a + b); // 변수끼리 연산 가능하다.


//* | 변수의 선언 및 초기화 |
/// : 선언과 동시에 초기화도 가능하다.

	int d = 0;
	int e = 1, f = 2;

	printf("%d * %d = %d \n", e, f, e * f);
}

//x|-----------------------------------------------------------------------------------------------------|

void DataType_EX()
{
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


	char ch1 = 'A', ch2 = 'a';

	printf(" ASCII Code Int Value : ch1 = %d, ch2 = %d \n", ch1, ch2);
	printf(" ASCII Code Character : ch1 = '%c', ch2 = '%c' \n", ch1, ch2);
	NEW_LINE;

	printf(" 문자 'D'로 입력받은 후 아스키코드 값으로 출력 : %d \n", 'D');
	printf(" 정수  69를 입력받은 후 아스키코드 문자로 출력 : %c \n",  69);
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
}

//x|--------------------------------------------------------------------------------------------------------|
