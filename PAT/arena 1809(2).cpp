#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char str[1000];

	while (scanf("%s",str)!= EOF)
	{
		int len = strlen(str);
		if (str[len - 1] != '.')
		{
			printf("%d ", len);
		}
		else
		{
			printf("%d\n", len);
		}
	}

	return 0;



}