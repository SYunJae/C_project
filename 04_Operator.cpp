#include "pch.h"
#include "CL_project_Header.h"



void Operator_EX()
{
///┏━━━━━━━━━━━━━━━━━━━━━━┓
///┃ <Assignment Operator> : 〔=〕              ┃
///┃ <Arithmetic Operator> : 〔+, -, *, /, %〕  ┃
///┗━━━━━━━━━━━━━━━━━━━━━━┛
	{
		int num1 = 11, num2 = 3;

		printf(" %d ＋ %d = %d \n", num1, num2, num1 + num2);
		printf(" %d － %d = %d \n", num1, num2, num1 - num2);
		printf(" %d × %d = %d \n", num1, num2, num1 * num2);
		printf(" %d ÷ %d Quotient = %d \n", num1, num2, num1 / num2);
		printf(" %d ÷ %d   Rest   = %d \n", num1, num2, num1 % num2);

#if 0
		double a, b;
		printf("나누고 싶은 두 정수를 입력하시오. : ");
		scanf("%lf %lf", &a, &b);

		printf("%f를 %f로 나눈 결과는 : %f \n", a, b, (a / b));

#endif // 0
	}
	NEW_LINE;

///┏━━━━━━━━━━━━━━━━━━━━━━┓
///┃ <복합대입연산자> : 〔+=  -+  *=  /=  %=〕  ┃
///┗━━━━━━━━━━━━━━━━━━━━━━┛
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

///┏━━━━━━━━━━━━━━━━┓
///┃ <증가&감소 연산자> : 〔++  --〕┃
///┗━━━━━━━━━━━━━━━━┛
	{
		int a = 11;

		a++;
		++a;  // 둘 다 "a = a + 1;"  or  "a += 1;" 연산과 동일
		a--;
		--a;  // 둘 다 "a = a - 1;"  or  "a -= 1;" 연산과 동일
	}

//# | 후치(postfix) 증감 |
	{
		int a = 10, b = 0;

		b = ++a; // a += 1;
				 // b = a; 와 같은 의미

		puts(" b = ++a; Result");
		printf(" a : %2d,  b : %2d\n", a, b);

		a = 10, b = 0;

		b = --a; // a -= 1;
				 // b = a; 와 같은 의미

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

//# | 전치(prefix) 증감 |
	{
		int a = 10, b = 0;

		b = a++; // b = a;
				 // a += 1; 와 같은 의미

		puts(" b = a++; Result");
		printf(" a : %2d,  b : %2d\n", a, b);

		a = 10, b = 0;

		b = a--; // b = a;
				 // a -= 1; 와 같은 의미

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

///┏━━━━━━━━━━━━━━━━━━━━━━━━━┓
///┃ <관계(비교)연산자> : 〔〈 〉 ==  !=  〈=  〉= 〕 ┃
///┗━━━━━━━━━━━━━━━━━━━━━━━━━┛
	{
		int num1 = 3, num2 = 8;

		printf(" num1 = %d,  num2 = %d \n", num1, num2);
		printf(" num1 & num2 is the same? '%d' \n", (num1 == num2));
		printf(" num1 is less than num2? '%d' \n", (num1 < num2));
		printf(" num1 is the same and more than num2? '%d' \n", (num1 >= num2));
	}
	NEW_LINE;

///┏━━━━━━━━━━━━━━━━┓
///┃ <논리연산자>  : 〔 &&  ||  ! 〕┃
///┗━━━━━━━━━━━━━━━━┛
	{
		int a = 9;

		printf(" a = 9 \n");
		printf(" 1≤a≤10 ? '%s' \n", (a >= 1 && a <= 10) ? "true" : "false");
		printf(" a == 3 or a == 7 ? '%s' \n", (a == 3 || a == 7) ? "true" : "false");
		printf(" !a ? '%d' \n", (!a));
	}
	NEW_LINE;

///┏━━━━━━━━━━━━━━━━━━┓
///┃ <비트 논리 연산> : 〔 &  |  ^  ~ 〕┃
///┗━━━━━━━━━━━━━━━━━━┛
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

	//# | 알파벳 대소문자 변환 |

		printf(" 'a' ^ ' ' => %c \n", ('a' ^ ' '));
		printf(" 'A' ^ ' ' => %c \n", ('A' ^ ' '));
		NEW_LINE;


	//# | 두 정수 Swap |
		int num1 = 8, num2 = -3;
		printf(" num1 = %2d,  num2 = %d \n", num1, num2);

		int dif_bit = num1 ^ num2;

		num1 ^= dif_bit;
		num2 ^= dif_bit;
		printf(" num1 = %d,  num2 = %2d \n", num1, num2);

	///	위 연산을 한 줄로 쓰면...

		num1 ^= num2 ^= num1 ^= num2;
		printf(" num1 = %2d,  num2 = %d \n", num1, num2);
		NEW_LINE;

		printf(" ~a => %d \n", ~a);

		printf(" num = %d \n", a);
		printf(" num = -(~num); => num = %d \n", -(~a));
		printf(" num = ~(-num); => num = %d \n", ~(-a));
		NEW_LINE;
	}

///    ┏━━━━━━━━━━━━━━━━━━━━┓
///    ┃ <비트 이동(Shift) 연산> : 〔 >>,  << 〕┃
///    ┗━━━━━━━━━━━━━━━━━━━━┛
	{
		char p_num =  27; // 0001 1011
		char n_num = -27; // 1110 0101
		
		printf(" char +num = +%d \n", p_num);
		printf(" char -num = %d \n\n", n_num);

	//# | Right Shift Operation |

		char r_num = 0;

		printf(" char +num << 1 : %d \n", (r_num = p_num << 1)); //?      0┃0 0 1 1  0 1 1 _ → 0011 0110 <+54>
		printf(" char +num << 3 : %d \n", (r_num = p_num << 3)); //?    000┃1 1 0 1  1 _ _ _ → 1101 1000 <-40>
		printf(" char +num << 6 : %d \n", (r_num = p_num << 6)); //? 000101┃1 1 _ _  _ _ _ _ → 1100 0000 <-64>

		printf(" char -num << 1 : %d \n", (r_num = n_num << 1)); //?      1┃1 1 0 0  1 0 1 _ → 1100 1010 <-54>
		printf(" char -num << 3 : %d \n", (r_num = n_num << 3)); //?    111┃0 0 1 0  1 _ _ _ → 0010 1000 <+40>
		printf(" char -num << 6 : %d \n", (r_num = n_num << 6)); //? 111001┃0 1 _ _  _ _ _ _ → 0100 0000 <+64>
	/*
		Left shift 연산 결과를 받을 자료형을 char형으로 지정해주면
		1바이트 이상으로 밀려난 자리가 버려져 2의 n승으로 곱해지는 값과는 다른 출력결과가 나타난다.
	*/
		NEW_LINE;

		printf(" int  +num << 1 : %d \n", p_num << 1); //? 0000 0000 0000 0000 0000 0000 0011 0110 <54>
		printf(" int  +num << 3 : %d \n", p_num << 3); //? 0000 0000 0000 0000 0000 0000 1101 1000 <216>
		printf(" int  +num << 6 : %d \n", p_num << 6); //? 0000 0000 0000 0000 0000 0110 1100 0000 <1728>

		printf(" int  -num << 1 : %d \n", n_num << 1); //? 1111 1111 1111 1111 1111 1111 1100 101_ <-54>
		printf(" int  -num << 3 : %d \n", n_num << 3); //? 1111 1111 1111 1111 1111 1111 0010 1___ <-216>
		printf(" int  -num << 6 : %d \n", n_num << 6); //? 1111 1111 1111 1111 1111 1001 01__ ____ <-1728>
	/*
		printf()에서 shift 연산의 결과를 담을 변수의 자료형은 정해져 있지 않다.
		C언어에서는 자동으로 int나 short같은 더 큰 자료형으로 변환시켜
		왼쪽으로 밀려난 bit자리를 버리지않고 결과로 반영할 수 있게 만들어준다.
		결과적으로 2의 n승으로 곱해진 값이 출력된다.
	*/
		NEW_LINE;

	//# | Left Shift Operation |

		printf(" +num >> 1 : %d \n", p_num >> 1); //? _ 0 0 0   1 1 0 1 ┃ 1      → 0000 1101 <13>
		printf(" +num >> 3 : %d \n", p_num >> 3); //? _ _ _ 0   0 0 1 1 ┃ 011    → 0000 0011 <3>
		printf(" +num >> 6 : %d \n", p_num >> 6); //? _ _ _ _   _ _ 0 0 ┃ 011011 → 0000 0000 <0>

		printf(" -num >> 1 : %d \n", n_num >> 1); //? _ 1 1 1   0 0 1 0 ┃ 1      → 1111 0010 <-14>
		printf(" -num >> 3 : %d \n", n_num >> 3); //? _ _ _ 1   1 1 0 0 ┃ 101    → 1111 1100 <-4>
		printf(" -num >> 6 : %d \n", n_num >> 6); //? _ _ _ _   _ _ 1 1 ┃ 100101 → 1111 1111 <-1>
	/*
		Right shift 연산의 경우
		오른쪽으로 밀려난 bit자리는 예외 없이 모두 버려진다.
		양수는 '0'으로 Padding 되고, 음수는 '1'로 Padding 된다.
	*/
		NEW_LINE;
	}
#if 0
///    ┏━━━━━━━━━━━┓
///    ┃ Bit & Shift 연산예제 ┃
///    ┗━━━━━━━━━━━┛
	{
		int binary[16] = {  0x1, 0x2, 0x4, 0x8
						  , 0x10, 0x20, 0x40, 0x80
						  , 0x100, 0x200, 0x400, 0x800
						  , 0x1000, 0x2000, 0x4000, 0x8000 }; //? => 16bit(2byte)
	
		for (size_t i = 0; i < 16; i++)
		{
			printf(" 2의 %2d승을 16진수로 표현 : %#-6x ", i, binary[i]);
			printf(" ==>  10진수 정수값 = %d \n", binary[i]);
		}
		NEW_LINE;
	
		for (size_t i = 0; i < 16; i++)
		{
			printf(" 2의 %2d승을 Bit로 표현하면, | ", i);
	
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