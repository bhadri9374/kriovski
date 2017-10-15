#include<stdio.h>
int main()
{
	char n;
	int l,u;
	scanf("%c",&n);
	l=(n=='a'||n=='e'||n=='i'||n=='o'||n=='u');
	u=(n=='A'||n=='E'||n=='I'||n=='O'||n=='U');
	if(u||l)
	printf("Vowel");
	else
	printf("Consonant");
	return 0;
	
}
