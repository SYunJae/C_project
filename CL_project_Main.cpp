#include "pch.h"


int main(int argc, char* argv[], char *envp[])
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

	return 0;
}