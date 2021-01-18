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
			puts(" = Example Title =");
			puts("┌-------------------------------------------┐");
			puts("│ 00_Quit Num of Execution                  │");
			puts("│ 01_EX of Main Function's Parameters       │");
			puts("│ 02_EX of Variable & Data Type             │");
			puts("│ 03_EX of Macro                            │");
			puts("└-------------------------------------------┘");
		}
		count++;

		printf(" Enter the EX Digit to Execute : ");
		scanf_s("%d", &TitleNUM);
		NEW_LINE;

		switch (TitleNUM)
		{
			case 1:   Main_Function(argc, argv, envp);  NEW_LINE   break;
			case 2:   Variable_EX();                    NEW_LINE
				      DataType_EX();                    NEW_LINE   break;
			case 3:   Macro_EX();                       NEW_LINE   break;


			default:
			break;
		}

	} while (TitleNUM != 0);

	return 0;
}