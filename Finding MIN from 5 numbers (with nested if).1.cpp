#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("Enter the value for A->");
	scanf("%d",&a);
	printf("Enter the value for B->");
	scanf("%d",&b);
	printf("Enter the value for C->");
	scanf("%d",&c);
	printf("Enter the value for D->");
	scanf("%d",&d);
	printf("Enter the value for E->");
	scanf("%d",&e);
	
    if(a<b)
    {
      if(a<c)
      {
      	if(a<d)
      	{   
      	    if(a<e)
      	    {
      	       printf("a is min");	
		    }
		    else
		    {
		      printf("e is min");	
			}
	    }
	    else
	    {
	    	if(d<e)
	    	{
	    		if(e<c)
	    		{
	    			printf("e is MIN");
				}
				else
				{
					printf("c is MIN");
				}
			}
			else
			{
			
			}
			
		}
	  }
	  else
	  {
	  	if(c<d)
	  	{
	  	 printf("C is MAX");	
		}
		else
		{
			printf("D is MAX");
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
					printf("b is min");
				}
				else
				{
					printf("e is min");
				}
			}
			else
			{
				if(d<e)
				{
					if(e<c)
					{
						printf("e is MIN");
					}
					else
					{
						printf("c is MIN");
					}
				}
				else
				{
					if(d<e)
			     {
			     	printf("d is MIN");
				 }
	        }  }
			else
				{
					printf("e is MIN");
				}
				
		
			
			}  
		}
		        else
		{
			if(c<d)
			{
				printf("C is MAX");
			}
			else
			{
				printf("D is MAX");
			}
		}
	}
}
