#include<stdio.h>
#include<math.h>

void main()
{
	int a,b,c;
	printf("Enter the numbers");
	scanf("%d %d", &a, &b);
	if(a==b)
	{
	printf("The average is %d",a);
    }
	else if(a<b)
	{
		c=avg(a,b);
			printf("%d",c);
	
	}
	else 
	{
		c=avg(a,b);
			printf("%d",c);
		
	}
}
	int avg(int n1, int n2)
	{
		while(n1!=n2)
		{
			n1+=0.1;
			n2-=0.1;
	
	    }
		return n1;
	}

