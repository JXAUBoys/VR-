#include <stdio.h>
void SubString(char b[], int start, int end);
int main()
{
	char a[]="We are 1706!";
	SubString(a, 1, 5);
	return 0;
}
/*
SubString����:
���:b[],start,end
����:void
ԭ��:��start-1��end��ȡ�ַ���
*/
void SubString(char b[],int start, int end)
{
	for (int i = start-1; i <= end; i++)
	{
		printf("%c\n", b[i]);
	}
}