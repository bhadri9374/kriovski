#include<stdio.h>
#include<string.h>
int main()
{
	char i,j,a[100],b[100];
	gets(a);
	j=strlen(a)-1;
	for(i=0;i<strlen(a);i++)
	{
		b[j]=a[i];
		--j;
	}
	puts(b);
	return 0;
}

