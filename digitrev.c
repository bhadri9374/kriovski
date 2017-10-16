#include<stdio.h>
int main()
{
	int n,r=0,rem,sum;
	scanf("%d",&n);
	sum=n;
	while(n!=0)
	{
		rem=n%10;
		r=r*10+rem;
		n/=10;
	}
	printf("%d",r);
	return 0;
}

