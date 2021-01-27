#include "pch.h"
#include "CL_project_Header.h"



void Operator_EX()
{
///������������������������������������������������
///�� <Assignment Operator> : ��=��              ��
///�� <Arithmetic Operator> : ��+, -, *, /, %��  ��
///������������������������������������������������
	{
		int num1 = 11, num2 = 3;

		printf(" %d �� %d = %d \n", num1, num2, num1 + num2);
		printf(" %d �� %d = %d \n", num1, num2, num1 - num2);
		printf(" %d �� %d = %d \n", num1, num2, num1 * num2);
		printf(" %d �� %d Quotient = %d \n", num1, num2, num1 / num2);
		printf(" %d �� %d   Rest   = %d \n", num1, num2, num1 % num2);

#if 0
		double a, b;
		printf("������ ���� �� ������ �Է��Ͻÿ�. : ");
		scanf("%lf %lf", &a, &b);

		printf("%f�� %f�� ���� ����� : %f \n", a, b, (a / b));

#endif // 0
	}
	NEW_LINE;

///������������������������������������������������
///�� <���մ��Կ�����> : ��+=  -+  *=  /=  %=��  ��
///������������������������������������������������
	{
		int num = 0;
		printf(" num = %d \n", num);
		
		printf(" num += 7; => num : %2d \n", num += 7);
		printf(" num -= 5; => num : %2d \n", num -= 5);
		printf(" num *= 9; => num : %2d \n", num *= 9);
		printf(" num /= 2; => num : %2d \n", num /= 2);
		printf(" num %%= 4; => num : %2d \n", num %= 4);
	}
	NEW_LINE;

///������������������������������������
///�� <����&���� ������> : ��++  --����
///������������������������������������
	{
		int a = 11;

		a++;
		++a;  // �� �� "a = a + 1;"  or  "a += 1;" ����� ����
		a--;
		--a;  // �� �� "a = a - 1;"  or  "a -= 1;" ����� ����
	}

//# | ��ġ(postfix) ���� |
	{
		int a = 10, b = 0;

		b = ++a; // a += 1;
				 // b = a; �� ���� �ǹ�

		puts(" b = ++a; Result");
		printf(" a : %2d,  b : %2d\n", a, b);

		a = 10, b = 0;

		b = --a; // a -= 1;
				 // b = a; �� ���� �ǹ�

		puts(" b = --a; Result");
		printf(" a : %2d,  b : %2d\n", a, b);

		int num = 11;
		printf(" num1 : %d \n", num);
		printf(" num1++ : %d \n", num++);
		printf(" num1 : %d \n", num);

		int num2 = (num--) + 2;
		printf(" num1 : %d \n", num);
		printf(" num2 = (num1--) + 2; => num2 : %d \n", num2);
	}
	NEW_LINE;

//# | ��ġ(prefix) ���� |
	{
		int a = 10, b = 0;

		b = a++; // b = a;
				 // a += 1; �� ���� �ǹ�

		puts(" b = a++; Result");
		printf(" a : %2d,  b : %2d\n", a, b);

		a = 10, b = 0;

		b = a--; // b = a;
				 // a -= 1; �� ���� �ǹ�

		puts(" b = a--; Result");
		printf(" a : %2d,  b : %2d\n", a, b);

		int num = 11;
		printf(" num1 : %d \n", num);
		printf(" ++num1 : %d \n", ++num);
		printf(" num1 : %d \n", num);

		int num2 = (--num) + 2;
		printf(" num1 : %d \n", num);
		printf(" num2 = (--num1) + 2; => num2 : %d \n", num2);
	}
	NEW_LINE;

///������������������������������������������������������
///�� <����(��)������> : ���� �� ==  !=  ��=  ��= �� ��
///������������������������������������������������������
	{
		int num1 = 3, num2 = 8;

		printf(" num1 = %d,  num2 = %d \n", num1, num2);
		printf(" num1 & num2 is the same? '%d' \n", (num1 == num2));
		printf(" num1 is less than num2? '%d' \n", (num1 < num2));
		printf(" num1 is the same and more than num2? '%d' \n", (num1 >= num2));
	}
	NEW_LINE;

///������������������������������������
///�� <��������>  : �� &&  ||  ! ����
///������������������������������������
	{
		int a = 9;

		printf(" a = 9 \n");
		printf(" 1��a��10 ? '%s' \n", (a >= 1 && a <= 10) ? "true" : "false");
		printf(" a == 3 or a == 7 ? '%s' \n", (a == 3 || a == 7) ? "true" : "false");
		printf(" !a ? '%d' \n", (!a));
	}
	NEW_LINE;

///����������������������������������������
///�� <��Ʈ �� ����> : �� &  |  ^  ~ ����
///����������������������������������������
	{
		int a = 27, b = 14;

		printf(" a & b => %d \n", (a & b));
		printf(" a & 0 => %d \n", (a & 0));
		printf(" a & 0xFFFFFFFF => %d \n", (a & 0xFFFFFFFF));
		NEW_LINE;

		printf(" a | b => %d \n", (a | b));
		printf(" a | 0 => %d \n", (a | 0));
		printf(" a | 0xFFFFFFFF => %d \n", (a | 0xFFFFFFFF));
		NEW_LINE;

		int c = 2;

		printf(" a ^ b => %d \n", (a ^ b));
		printf(" a ^ a => %d \n", (a ^ a));
		printf(" a ^ 0 => %d \n", (a ^ 0));
		printf(" a ^ 0xFFFFFFFF => %d \n", (a ^ 0xFFFFFFFF));
		printf(" ~a => %d \n", ~a);
		printf(" (a ^ b) ^ c => %d \n", ((a ^ b) ^ c));
		printf(" a ^ (b ^ c) => %d \n", (a ^ (b ^ c)));
		NEW_LINE;

	//# | ���ĺ� ��ҹ��� ��ȯ |

		printf(" 'a' ^ ' ' => %c \n", ('a' ^ ' '));
		printf(" 'A' ^ ' ' => %c \n", ('A' ^ ' '));
		NEW_LINE;


	//# | �� ���� Swap |
		int num1 = 8, num2 = -3;
		printf(" num1 = %2d,  num2 = %d \n", num1, num2);

		int dif_bit = num1 ^ num2;

		num1 ^= dif_bit;
		num2 ^= dif_bit;
		printf(" num1 = %d,  num2 = %2d \n", num1, num2);

	///	�� ������ �� �ٷ� ����...

		num1 ^= num2 ^= num1 ^= num2;
		printf(" num1 = %2d,  num2 = %d \n", num1, num2);
		NEW_LINE;

		printf(" ~a => %d \n", ~a);

		printf(" num = %d \n", a);
		printf(" num = -(~num); => num = %d \n", -(~a));
		printf(" num = ~(-num); => num = %d \n", ~(-a));
		NEW_LINE;
	}

///    ��������������������������������������������
///    �� <��Ʈ �̵�(Shift) ����> : �� >>,  << ����
///    ��������������������������������������������
	{
		char p_num =  27; // 0001 1011
		char n_num = -27; // 1110 0101
		
		printf(" char +num = +%d \n", p_num);
		printf(" char -num = %d \n\n", n_num);

	//# | Right Shift Operation |

		char r_num = 0;

		printf(" char +num << 1 : %d \n", (r_num = p_num << 1)); //?      0��0 0 1 1  0 1 1 _ �� 0011 0110 <+54>
		printf(" char +num << 3 : %d \n", (r_num = p_num << 3)); //?    000��1 1 0 1  1 _ _ _ �� 1101 1000 <-40>
		printf(" char +num << 6 : %d \n", (r_num = p_num << 6)); //? 000101��1 1 _ _  _ _ _ _ �� 1100 0000 <-64>

		printf(" char -num << 1 : %d \n", (r_num = n_num << 1)); //?      1��1 1 0 0  1 0 1 _ �� 1100 1010 <-54>
		printf(" char -num << 3 : %d \n", (r_num = n_num << 3)); //?    111��0 0 1 0  1 _ _ _ �� 0010 1000 <+40>
		printf(" char -num << 6 : %d \n", (r_num = n_num << 6)); //? 111001��0 1 _ _  _ _ _ _ �� 0100 0000 <+64>
	/*
		Left shift ���� ����� ���� �ڷ����� char������ �������ָ�
		1����Ʈ �̻����� �з��� �ڸ��� ������ 2�� n������ �������� ������ �ٸ� ��°���� ��Ÿ����.
	*/
		NEW_LINE;

		printf(" int  +num << 1 : %d \n", p_num << 1); //? 0000 0000 0000 0000 0000 0000 0011 0110 <54>
		printf(" int  +num << 3 : %d \n", p_num << 3); //? 0000 0000 0000 0000 0000 0000 1101 1000 <216>
		printf(" int  +num << 6 : %d \n", p_num << 6); //? 0000 0000 0000 0000 0000 0110 1100 0000 <1728>

		printf(" int  -num << 1 : %d \n", n_num << 1); //? 1111 1111 1111 1111 1111 1111 1100 101_ <-54>
		printf(" int  -num << 3 : %d \n", n_num << 3); //? 1111 1111 1111 1111 1111 1111 0010 1___ <-216>
		printf(" int  -num << 6 : %d \n", n_num << 6); //? 1111 1111 1111 1111 1111 1001 01__ ____ <-1728>
	/*
		printf()���� shift ������ ����� ���� ������ �ڷ����� ������ ���� �ʴ�.
		C������ �ڵ����� int�� short���� �� ū �ڷ������� ��ȯ����
		�������� �з��� bit�ڸ��� �������ʰ� ����� �ݿ��� �� �ְ� ������ش�.
		��������� 2�� n������ ������ ���� ��µȴ�.
	*/
		NEW_LINE;

	//# | Left Shift Operation |

		printf(" +num >> 1 : %d \n", p_num >> 1); //? _ 0 0 0   1 1 0 1 �� 1      �� 0000 1101 <13>
		printf(" +num >> 3 : %d \n", p_num >> 3); //? _ _ _ 0   0 0 1 1 �� 011    �� 0000 0011 <3>
		printf(" +num >> 6 : %d \n", p_num >> 6); //? _ _ _ _   _ _ 0 0 �� 011011 �� 0000 0000 <0>

		printf(" -num >> 1 : %d \n", n_num >> 1); //? _ 1 1 1   0 0 1 0 �� 1      �� 1111 0010 <-14>
		printf(" -num >> 3 : %d \n", n_num >> 3); //? _ _ _ 1   1 1 0 0 �� 101    �� 1111 1100 <-4>
		printf(" -num >> 6 : %d \n", n_num >> 6); //? _ _ _ _   _ _ 1 1 �� 100101 �� 1111 1111 <-1>
	/*
		Right shift ������ ���
		���������� �з��� bit�ڸ��� ���� ���� ��� ��������.
		����� '0'���� Padding �ǰ�, ������ '1'�� Padding �ȴ�.
	*/
		NEW_LINE;
	}
#if 0
///    ��������������������������
///    �� Bit & Shift ���꿹�� ��
///    ��������������������������
	{
		int binary[16] = {  0x1, 0x2, 0x4, 0x8
						  , 0x10, 0x20, 0x40, 0x80
						  , 0x100, 0x200, 0x400, 0x800
						  , 0x1000, 0x2000, 0x4000, 0x8000 }; //? => 16bit(2byte)
	
		for (size_t i = 0; i < 16; i++)
		{
			printf(" 2�� %2d���� 16������ ǥ�� : %#-6x ", i, binary[i]);
			printf(" ==>  10���� ������ = %d \n", binary[i]);
		}
		NEW_LINE;
	
		for (size_t i = 0; i < 16; i++)
		{
			printf(" 2�� %2d���� Bit�� ǥ���ϸ�, | ", i);
	
			for (int j = 31; j >= 0; j--)
			{
				printf("%d", (binary[i] & (1 << j)) ? 1 : 0);
	
				if ((j << 30) == 0)	printf(" ");  //? if ((j % 4) == 0)	printf(" ");
				if ((j << 29) == 0)	printf("| "); //? if ((j % 8) == 0)	printf("| ");
			}
			printf("\n");
		}
	}
#endif // 0
}