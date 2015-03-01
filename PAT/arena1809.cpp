#include<stdio.h>
int main()
{
	char c;
	
	int n = 0;
	while ((c = getchar()) != '.')
	{
		if (c == ' ')
		{
			if (n != 0)
			{
				printf("%d ", n);
				n = 0;
			}
			
		}
		else
		{
			++n;
		}
		

	}
	printf("%d\n", n);
	return 0;
}