#include<stdio.h>
int main()
{
	int N,a[N],i,sum=0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<N;i++)
	{
		sum+=a[i];
	}
	printf("%d",sum);
	return 0;
}
