#include<stdio.h>
#include<math.h>
int main()
{
	int base,expo;
	long long power;
	scanf("%d",&base);
	scanf("%d",&expo);
	power=pow(base,expo);
	printf("%lld",power);
	return 0;
	
	
}
