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


	double num3 = 216; // int�� ���� 216�� double���� '216.0'�� ��Ʈ���� �籸���ȴ�.

	int num4 = 3.1415; // �Ǽ� 3.1415�� �Ҽ��� ���� ���� �Ҹ�ǰ� int�� ������ 3�� ��Ʈ���� �籸���ȴ�.

#endif // 0

	int num = 216;
	char ch = num;
	printf(" int num = 216 �� char ch = %d \n", ch);
	NEW_LINE;

	int num1 = 0xA9;
	int num2 = 071;
	printf(" %#X�� 10���� ���� �� : %d \n", num1, num1);
	printf(" %#o�� 10���� ���� �� : %d \n", num2, num2);
}
//x|-----------------------------------------------------------------------------------------------------|



#if 0

//# | const |
const int GAMESTATE_MAINMENU = 0;
const int GAMESTATE_PLAYING = 1;
const int GAMESTATE_PAUSED = 2;
const int GAMESTATE_GAMEOVER = 3;

//? const ��� ���� ��� enum�� �̿��� �� �ִ�.
//# | enum |
enum EGameState
{
	EGAMESTATE_MAINMENU = 0,
	EGAMESTATE_PLAYING,
	EGAMESTATE_PAUSED,
	EGAMESTATE_GAMEOVER
};

#endif // 0