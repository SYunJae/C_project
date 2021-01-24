#include "pch.h"
#include "CL_project_Header.h"


void Constant_EX()
{
	printf(" size of '1' : %dbyte \n", sizeof(1));
	printf(" size of 'A' : %dbyte \n", sizeof('A'));
	printf(" size of '2.7f' : %dbyte \n", sizeof(2.7f));
	printf(" size of '2.70' : %dbyte \n", sizeof(2.70));
	NEW_LINE;

#if 0

	float num1 = 2.174f;
	float num2 = 5.29F + 7.16F;


	const int MAX = 100;
	const double PI = 3.1415;


	double num3 = 216; // int형 정수 216이 double형인 '216.0'의 비트열로 재구성된다.

	int num4 = 3.1415; // 실수 3.1415의 소수점 이하 값이 소멸되고 int형 데이터 3의 비트열로 재구성된다.

#endif // 0

	int num = 216;
	char ch = num;
	printf(" int num = 216 → char ch = %d \n", ch);
	NEW_LINE;

	int num1 = 0xA9;
	int num2 = 071;
	printf(" %#X의 10진수 정수 값 : %d \n", num1, num1);
	printf(" %#o의 10진수 정수 값 : %d \n", num2, num2);
}
//x|-----------------------------------------------------------------------------------------------------|



#if 0

//# | const |
const int GAMESTATE_MAINMENU = 0;
const int GAMESTATE_PLAYING = 1;
const int GAMESTATE_PAUSED = 2;
const int GAMESTATE_GAMEOVER = 3;

//? const 상수 선언 대신 enum을 이용할 수 있다.
//# | enum |
enum EGameState
{
	EGAMESTATE_MAINMENU = 0,
	EGAMESTATE_PLAYING,
	EGAMESTATE_PAUSED,
	EGAMESTATE_GAMEOVER
};

#endif // 0