#include "pch.h"
#include "CL_project_Header.h"


int main(int argc, char* argv[], char* envp[])
{
	int count = 1;
	int TitleNUM;
	do
	{
		if (count & 1)
		{
			puts(" = 예제 Title =");
			puts("┌------------------------------------┐");
			puts("│ 00_실행 중지 번호                  │");
			puts("│ 01_메인 함수의 매개변수 출력 예제  │");
			puts("│ 02_매크로(Macro) 예제              │");
			puts("└------------------------------------┘");
		} count++;

		printf("실행하고 싶은 예제 번호를 입력하세요. NUM = ");
		scanf_s("%d", &TitleNUM);
		NEW_LINE;

		switch (TitleNUM)
		{
			case 1:		Main_Function(argc, argv, envp);	NEW_LINE	 break;
			case 2:		Macro_main();						NEW_LINE	 break;


			default:
			break;
		}

	} while (TitleNUM != 0);

	return 0;
}