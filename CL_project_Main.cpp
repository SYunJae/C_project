#include "pch.h"
#include "CL_project_Header.h"


#if 1

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


#else


	 #include <stdio.h>
	 #include <cstdlib>

	 
///< | Data Area | >

	 int variable = 0;
	 
	 int main()
	 {
	 	 static double num1 = 2.1, num2 = 3.0;
	 	 
	 	 const char* str = "Hello, World";

	 	 
//*	 	 | Stack Area |

		 int num3 = 7, num4 = 3;

	 	 double add = num1 + num2;
	 	 double sub = num2 - num1;
	 	 
	 	 printf("%f + %f = %f \n\n", num1, num2, add);

	 	 
//#	 	 | Heap Area |
	 
	 	 int* arr = (int*)std::malloc(3 * sizeof(int));
	 	 arr[0] = num3 * num4;
	 	 arr[1] = num3 / num4; // Quotient
	 	 arr[2] = num3 % num4; // Rest
	 	 
	 	 printf("%d %% %d = %d \n\n", num3, num4, arr[2]);
	 	 
	 	 free(arr);

	 	 return 0;
	 }

/*
		 printf(" Global Variable : 0x%p \n\n", &variable);
		 printf(" Static Local Var. num1 : 0x%p \n", &num1);
		 printf(" Static Local Var. num2 : 0x%p \n\n", &num2);
		 printf(" Read-Only Data Var. str : 0x%p \n\n", str);
		 printf(" Local Var. add  : 0x%p \n", &add);
		 printf(" Local Var. sub  : 0x%p \n", &sub);
		 printf(" Local Var. num3 : 0x%p \n", &num3);
		 printf(" Local Var. num4 : 0x%p \n\n", &num4);
		 printf(" Dinamic Var. arr : 0x%p \n", &arr);
		 printf(" Dinamic Var. arr[0] : 0x%p \n", &arr[0]);
		 printf(" Dinamic Var. arr[1] : 0x%p \n", &arr[1]);
		 printf(" Dinamic Var. arr[2] : 0x%p \n", &arr[2]);
*/

#endif