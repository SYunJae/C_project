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
			puts("│ -1_Quit Num of Execution                  │");
			puts("│ 00_EX of Main Function's Parameters       │");
			puts("│ 01_EX of Variable & Data Type             │");
			puts("│ 02_EX of Constant                         │");
			puts("│ 03_EX of Type Casting                     │");
			puts("│ 04_EX of Operator                         │");
			puts("│ 05_EX of Macro                            │");
			puts("└-------------------------------------------┘");
		}
		count++;

		printf(" Enter the EX Digit to Execute : ");
		scanf_s("%d", &TitleNUM);
		NEW_LINE;

		switch (TitleNUM)
		{
			case 0:   Main_Function(argc, argv, envp);  NEW_LINE   break;
			case 1:   Variable_EX();                    NEW_LINE
				      DataType_EX();                    NEW_LINE   break;
			case 2:   Constant_EX();                    NEW_LINE   break;
			case 3:   TypeCasting_EX();                 NEW_LINE   break;
			case 4:   Operator_EX();                    NEW_LINE   break;
			case 5:   Macro_EX();                       NEW_LINE   break;

			default:
			break;
		}

	} while (TitleNUM > -1);

	return 0;
}