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