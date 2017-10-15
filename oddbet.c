#include<stdio.h>
int main()
{
	int n1,n2,i;
	scanf("%d%d",&n1,&n2);
	i=n1+1;
	while(i<n2)
	{	
		if(i%2!=0)
		printf("%d\t",i);
		++i;
	}
	return 0;
}
