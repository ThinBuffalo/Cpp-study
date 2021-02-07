#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
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
bool allnum(char *num)
{
	int len=strlen(num);
	for(int i=0;i<len;i++)
	{
		if(!(num[i]<='9'&&num[i]>='1'))
		{
			return 0;
		}
	}
	return 1;
}
void tosecret(char *ch)
{
	int len=strlen(ch);
	for(int i=0;i<len;i++)
	{
		ch[i]=(ch[i]-'0'+1)%10+'0';
	}
	return;
}
void sinput(char *put)
{
	int i=0;
	while(1)
	{
		put[i]=getch();
		if(put[i]=='\r') break;
		printf("*");
		i++; 
	}
	put[i]=0; 
	printf("\n"); 
}
int main()
{
	char name[100];
	char password[100];
	char account[100];
	char tel[100];
	char mail[100]; 
	while(1)
	{
		printf("²Ù×÷\n");
		printf("[1]×¢²áÕË»§ [2]µÇÂ¼ÕË»§\n");
		int option=getch();
		switch(option)
		{
			case '1':
			{
				system("cls");
				printf("ÇëÊäÈëÕË»§£º"); 
				scanf("%s",&account);
				while(1)
				{
					printf("ÇëÊäÈëÃÜÂë£º"); 
					while(1)
					{
						sinput(password);
						if(allnum(password))
						{
							break;
						}
						else
						{
							printf("ÃÜÂë±ØÐëÎªÊý×Ö£¬ÇëÖØÊÔ£º"); 
						}
					}
					char reenter[100];
					printf("ÇëÔÙ´ÎÊäÈëÃÜÂë£º");
					sinput(reenter);
					if(equal(reenter,password))
					{
						break;
					}
					else
					{
						printf("ÃÜÂë²»Æ¥Åä£¬ÇëÖØÊÔ");
					}
				}
				tosecret(password);
				printf("ÇëÊäÈëÐÕÃû£º");
				scanf("%s",&name);
				printf("ÇëÊäÈëÁªÏµµç»°£º");
				scanf("%s",&tel);
				printf("ÇëÊäÈëÓÊÏä£º");
				bool ac=0;
				while(1)
				{
					scanf("%s",mail);
					int len=strlen(mail);
					for(int i=0;i<len;i++)
					{
						if(mail[i]=='@')
						{
							ac=1;
							break;	
						} 
					} 
					if(ac)
					{
						break;
					}
					else
					{
						printf("ÓÊÏä¸ñÊ½´íÎó£¬ÇëÖØÊÔ£º");
					}
				} 
				printf("×¢²á³É¹¦£¡\n"); 
				Sleep(1000);
				system("cls"); 
				break; 
			}
			case '2':
			{
				while(1)
				{	
					system("cls");
					char conacc[100];
					printf("ÇëÊäÈëÕËºÅ£º");
					scanf("%s",&conacc);
					if(equal(conacc,account))
					{
						printf("ÇëÊäÈëÃÜÂë£º");
						int t=3;
						while(t)
						{
							char conpass[100];
							sinput(conpass);
							if(equal(conpass,password))
							{
								printf("µÇÂ¼³É¹¦£¡\n");
								printf("»¶Ó­À´µ½ÏµÍ³£¡");
								return 0;
							}
							else
							{
								printf("ÃÜÂë´íÎó£¬ÇëÖØÊÔ£º\n");
							}
						}	
					}
					else
					{
						printf("ÕËºÅ²»´æÔÚ£¬ÇëÖØÊÔ£¡"); 
						Sleep(1000); 
					}
				}
				break;
			}
			default:
			{
				printf("Ñ¡Ïî²»´æÔÚ£¬ÇëÖØÊÔ£¡\n");
				Sleep(1000);
				system("cls");
				break; 
			}
		}
	}
	return 0;
}
