#include<stdio.h>
main()
{
	int a,b,c,d,e;
	
	printf("Enter a value for A->");
	scanf("%d",&a);
		printf("Enter a value for B->");
	scanf("%d",&b);
		printf("Enter a value for C->");
	scanf("%d",&c);
		printf("Enter a value for D->");
	scanf("%d",&d);
		printf("Enter a value for E->");
	scanf("%d",&e);
printf("                                                         \n");	
	if(a<b)
	{
		if(a<c)
		{
			if(a<d)
			{
				if(a<e)
				{
					printf("A is MIN");
				}
				else
				{
					printf("E is MIN");
				}
			}
			else
			{
				if(a<d)
				{
					printf("A is MIN");
				}
				else
				{
					printf("D is MIN");
				}
			}
		}
		else
		{
			if(a<c)
			{
				printf("A is MIN");
			}
			else
			{
				printf("C is MIN");
			}
		}
	}
	else
	{
		if(b<c)
		{
			if(b<d)
			{
				if(b<e)
				{
					printf("B is MIN");
				}
				else
				{
					printf("C is MIN");
				}
			}
			else
			{
				if(b<d)
				{
					printf("B is MIN");
				}
				else
				{
					printf("D is MIN");
				}
			}
		}
		else
		{
			if(b<c)
			{
				printf("B is MIN");
			}
			else
			{
				printf("C is MIN");
			}
		}
	}
}
