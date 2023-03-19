#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the value for A,B,&C->");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("A is min");
		}
		else
		{
			printf("C is min");
		}
	}
	else
	{
	    if(b<c)
	    {
	    	printf("B is min");
		}
		else
		{
			printf("C is min");
		}
	}
}
