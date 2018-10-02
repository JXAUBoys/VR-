#include <stdio.h>
int main()
{
	int n = 865751897;
	for (int i = n-1; i >= 1; i--)
	{
		if (n%i == 0)
		{
			printf("最大质因数:%d\n", i);
			break;
		}
	}
	return 0;
}
