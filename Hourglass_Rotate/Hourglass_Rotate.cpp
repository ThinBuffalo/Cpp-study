#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
const char a[]= {'!','@','#','$','%','^','&','*'};
int main()
{
	srand(time(0));
	//�õ����
	HANDLE handle;
	handle=GetStdHandle(STD_OUTPUT_HANDLE);
	int length=strlen(a);
	while(1)
	{
		//����ɳ©
		for(int i=1; i<=15; i++)
		{
			char nowa=a[rand()%length];
			SetConsoleTextAttribute(handle,rand()%15+1);//���ÿ���̨��ɫ
			for(int j=1; j<=15; j++)
			{
				if(i<=7)
				{
					if(j>=i&&j+i<15)
					{
						printf("%c",nowa);
					}
					else
					{
						printf(" ");
					}
				}
				else
				{
					if(j<i&&j+i>=15)
					{
						printf("%c",nowa);
					}
					else
					{
						printf(" ");
					}
				}
			}
			printf("\n");
		}
		Sleep(1000);
		system("cls");
		//����ɳ©
		for(int i=1; i<=15; i++)
		{
			char nowa=a[rand()%(length+1)];
			SetConsoleTextAttribute(handle,rand()%15+1);
			for(int j=1; j<=15; j++)
			{
				if(i<=7)
				{
					if(j<=i||j+i>15)
					{
						printf("%c",nowa);
					}
					else
					{
						printf(" ");
					}
				}
				else
				{
					if(j>i||j+i<=15)
					{
						printf("%c",nowa);
					}
					else
					{
						printf(" ");
					}
				}
			}
			printf("\n");
		}
		Sleep(1000);
		system("cls");
	}
	return 0;
}
