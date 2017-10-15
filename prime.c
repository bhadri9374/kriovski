#include<stdio.h>
int main()
{
	int n,p=0,i;
	scanf("%d",&n);
	for(i=2;i<=n/2;++i)
	{
		if(n%i==0)
		{
			p=1;
			break;
		}
	}
	if(p==0)
	printf("Prime");
	else
	printf("Not a prime");
	return 0;
}
