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
		printf("����\n");
		printf("[1]ע���˻� [2]��¼�˻�\n");
		int option=getch();
		switch(option)
		{
			case '1':
			{
				system("cls");
				printf("�������˻���"); 
				scanf("%s",&account);
				while(1)
				{
					printf("���������룺"); 
					while(1)
					{
						sinput(password);
						if(allnum(password))
						{
							break;
						}
						else
						{
							printf("�������Ϊ���֣������ԣ�"); 
						}
					}
					char reenter[100];
					printf("���ٴ��������룺");
					sinput(reenter);
					if(equal(reenter,password))
					{
						break;
					}
					else
					{
						printf("���벻ƥ�䣬������");
					}
				}
				tosecret(password);
				printf("������������");
				scanf("%s",&name);
				printf("��������ϵ�绰��");
				scanf("%s",&tel);
				printf("���������䣺");
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
						printf("�����ʽ���������ԣ�");
					}
				} 
				printf("ע��ɹ���\n"); 
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
					printf("�������˺ţ�");
					scanf("%s",&conacc);
					if(equal(conacc,account))
					{
						printf("���������룺");
						int t=3;
						while(t)
						{
							char conpass[100];
							sinput(conpass);
							if(equal(conpass,password))
							{
								printf("��¼�ɹ���\n");
								printf("��ӭ����ϵͳ��");
								return 0;
							}
							else
							{
								printf("������������ԣ�\n");
							}
						}	
					}
					else
					{
						printf("�˺Ų����ڣ������ԣ�"); 
						Sleep(1000); 
					}
				}
				break;
			}
			default:
			{
				printf("ѡ����ڣ������ԣ�\n");
				Sleep(1000);
				system("cls");
				break; 
			}
		}
	}
	return 0;
}
