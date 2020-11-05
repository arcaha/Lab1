#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int
main()
{
	int a, p = 1;
	printf("Input a: ");
	scanf("%d", &a);
	if (p < 0) 
	{
		printf("FALSE\n");
	}
	else 
	{
		while (p < a)
		{
			p = p * 3;
		}
		if (p == a)
		{
			printf("TRUE\n");
		}
		else
		{
			printf("FALSE\n");
		}
	}
	return 0;
}