#include "pch.h"
#include "CL_project_Header.h"

void Main_Function(int argc, char * argv[], char * envp[])
{
	if (argc > 0)
	{
		int cnt = 0;
		while (argv[cnt] != NULL)
		{
			printf(" --- %s\n", argv[cnt]);
			cnt++;
		}

		cnt = 0;
		while (envp[cnt] != NULL)
		{
			printf(" ~~~ %s\n", envp[cnt]);
			cnt++;
		}
	}
}
//x|-----------------------------------------------------------------------------------------------------|

#if 0

#include <stdio.h>
#include <cstdlib>

int variable = 0;

int main(int argc, char * argv[], char * envp[])
{
	static double num1 = 2.1, num2 = 3.0;

//* | Stack Area |
	{
		double add = num1 + num2;
		double sub = num2 - num1;
		double prod = num1 * num2;
		double frac = num2 / num1;

		printf("%f + %f = %f \n", num1, num2, add);
	}

//# | Heap Area |
	{
		int num3 = 7, num4 = 3;

		int* arr = (int*)std::malloc(5 * sizeof(int));
		arr[0] = num3 + num4;
		arr[1] = num3 - num4;
		arr[2] = num3 * num4;
		arr[3] = num3 / num4; // Quotient
		arr[4] = num3 % num4; // Rest

		free(arr);
	}

	return 0;
}

#endif // 0
