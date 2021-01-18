#include "pch.h"
#include "CL_project_Header.h"



void Variable_EX()
{
//* | ���� ���� |
/// : ������ �޸� RAM�� ������ ����� �̸��� ���δ�.

	int a;
	int b, c; // �޸�(,)�� ���� ���� ������ ���� ������ �� �ִ�.


//* | ���� �ʱ�ȭ |
/// : ����� ������ ó�� ���� �����ϴ� ���̴�.
///   ������ ���� �ϰ� �ʱ�ȭ���� ������ '�����Ⱚ(�ƹ��� �ǹ̰� ���� ��)'�� ����ȴ�.

	a = 3;
	b = 7, c = 5;

//? | ���� ���� |
//  : ��ȣ�� ������ �ǹ�!! ��, '='�� �޸� ������ data�� �ִ� �����̴�.

	printf("%d + %d = %d \n", a, b, a + b); // �������� ���� �����ϴ�.


//* | ������ ���� �� �ʱ�ȭ |
/// : ����� ���ÿ� �ʱ�ȭ�� �����ϴ�.

	int d = 0;
	int e = 1, f = 2;

	printf("%d * %d = %d \n", e, f, e * f);
}

//x|-----------------------------------------------------------------------------------------------------|

void DataType_EX()
{
//# | �ڷ������� ũ�� Ȯ�� |

	printf(" char  size : %d byte \n", sizeof(char));
	printf(" short size : %d byte \n", sizeof(short));
	printf(" int   size : %d byte \n", sizeof(int));
	printf(" long  size : %d byte \n", sizeof(long));
	printf(" long long size : %d byte \n", sizeof(long long));

	printf(" float  size : %d byte \n", sizeof(float));
	printf(" double size : %d byte \n", sizeof(double));
	printf(" long double size : %d byte \n", sizeof(long double));

	NEW_LINE;

//# | ���������� ũ�� Ȯ�� |

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

	printf(" ���� 'D'�� �Է¹��� �� �ƽ�Ű�ڵ� ������ ��� : %d \n", 'D');
	printf(" ����  69�� �Է¹��� �� �ƽ�Ű�ڵ� ���ڷ� ��� : %c \n",  69);
	NEW_LINE;


//# | float�� ���� |

	float fnum = 0.0f; // ���� ��ǻ�ʹ� 0.0�� ������ �� ����.
	for (int i = 0; i < 100; i++) {
		fnum += 0.1f;
	}
	printf("  float������ 0.1�� 100�� ���� ��� = %f\n", fnum);
	
//# | double�� �Ǽ� ������ ���� |

	double dnum = 0.0;
	for (int i = 0; i < 100; i++) {
		dnum += 0.1;
	}
	printf(" double������ 0.1�� 100�� ���� ��� = %f\n", dnum);
}

//x|--------------------------------------------------------------------------------------------------------|
