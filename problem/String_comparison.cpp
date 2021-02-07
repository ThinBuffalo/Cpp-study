#include<stdio.h>
#include<string.h>
bool equal(char* a,char* b)
{
	int asize=strlen(a);
	int bsize=strlen(b);
	int size=asize<=bsize?asize:bsize;
	for(int i=0;i<size;i++)
	{
		if(a[i]!=b[i])
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	char a[10000],b[100];
	int t=0;
	gets(a);
	scanf("%s",b);
	int len=strlen(a);
	char word[100];
	int wordlen=0;
	for(int i=0;i<=len;i++)
	{
		if(a[i]==' '||a[i]=='\000')
		{
			t+=equal(word,b);
			wordlen=0;
		}
		else
		{
			word[wordlen++]=a[i];
		}
	}
	printf("%d",t); 
	return 0;
}
