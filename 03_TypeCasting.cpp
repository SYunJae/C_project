#include "pch.h"
#include "CL_project_Header.h"

void TypeCasting_EX()
{
	int Math = 90, Korea = 95, English = 96;
	int sum = Math + Korea + English;
	double avg = sum / 3;

	printf("Average : %f \n", avg); // 93.666667출력을 예상했지만 실행결과 93.000000이 출력된다.
	NEW_LINE;

//?| ┏-----------------------------------------------------┓								   |
//?| ┃정수 ÷ 정수 = 정수								    ┃								   |
//?| ┃정수 ÷ 실수 = ?? (→ 연산이 거의 이루어지지 않는다.)┃								   |
//?| ┃실수 ÷ 정수 = 실수								    ┃								   |
//?| ┃실수 ÷ 실수 = 실수								    ┃								   |
//?| ┗-----------------------------------------------------┛								   |
//?|  ★ 실수 자료형에 더 다양한 값을 저장할 수 있으므로 더 큰쪽의 자료형으로 결과가 저장된다. |
//?|     이것은 사칙연산 모두에 적용되는 성질이다.											   |


//# 바로잡는 방법 ① 【자동 형 변환】
	{
		double sum = Math + Korea + English;
		double avg = sum / 3;
		printf("자동 형 변환 Average : %f \n", avg);
	}

//# 바로잡는 방법 ② 【명시적 형 변환】
	{
		int sum = Math + Korea + English;
		double avg = (double)sum / 3;
		printf("강제 형 변환 Average : %f \n", avg);
	}
	NEW_LINE;


	int a = 11, b = 4;

//x	printf(" a / b is %f \n", (a / b));
//? (정수 ÷ 정수)이므로 결과는 항상 정수이다.
/*
	실수 출력을 기대하고 '%f'를 사용한다 해도 원하는 출력 결과를 얻을 수 없다.
	자동 형변환이 이루어지지 않기 때문이다.
*/
	
//# 바로잡으려면 명시적 형 변환이 필요하다!
	printf(" a / b is %f \n", ((double)a / b));


#if 0

	int num1 = 5;
	double num2 = 2.7 * num1; // num1에서 자동 형 변환이 발생한다.

//* 추천 코드
	double num3 = 2.7 * (double)num1; // 명시적 형 변환을 해준다.

#endif // 0

}
