#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;
short t=0,lesson=0,any=0,happy=100,study=110,homework=0,wrong=0,times=0;
char* happen[10],about[100],A[15],B[15];
char choose;
bool grandparent=0;
void classing(char* happen,short k_happen_for_happy)
{
 Sleep(5000);
 system("cls");
 while(any<=100)
 {
     cout<<happen<<"中 "<<any<<"%";
     Sleep(10);
     system("cls");
     any++;
 }
 any=0;
 cout<<happen<<"结束，精神值增加"<<k_happen_for_happy<<endl;
 happy+=k_happen_for_happy;
 printf("精神值=%d,期望值=%d",happy,study);
 lesson++;
 return;
}
void class_over()
{   
    Sleep(5000);
    system("cls");
    printf("下课了，精神值+10\n");
    happy+=10;
    printf("精神值=%d,期望值=%d",happy,study);
    return;
}
void sth(int type,char* about,char* A,char* B)
{
    Sleep(5000);
    system("cls");
    cout<<"————————————————————"<<endl;
    printf("%s\n",about);
    if(type==2)
    {
        cout<<"  A、";
        printf("%s\n",A);
        cout<<"  B、";
        printf("%s\n",B);
        cout<<"————————————————————"<<endl;
        cout<<"你选择：";
        cin>>choose;
        return;
    }
    cout<<"————————————————————"<<endl;
    return;
}
void check()
{
    int hit=0;
    if(grandparent) hit+=10;
    if(homework!=100) hit+=10;
    if(wrong>25*times)
    {
        hit+=10;
        times++;
    }
    if(hit)
    {
        sth(1,"    你的行为让父母十分失望，无情的戒尺\n打在你的身上","0","0");
        cout<<"精神值-"<<hit<<"，期望值-"<<hit<<endl;
        happy-=hit;
        study-=hit;
        printf("精神值=%d,期望值=%d",happy,study);
    }
    return;
}
void end()
{
    if(study<=0)
    {
        system("color 7C");
        sth(1,"    父母认为你无药可救，把你送去了豫章书\n院，你开始反抗，却增加了他们的决心。你\n在反抗无效后自杀\n*失望结局","0","0");
        cout<<"你一共坚持了"<<t<<"天"<<endl;
        system("pause");
        exit(0);
    }
    if(happy<=0)
    {
        system("color 7C");
        sth(1,"    你在压迫中感到了绝对的绝望，你自杀了\n*抑郁结局","0","0");
        cout<<"你一共坚持了"<<t<<"天"<<endl;
        system("pause");
        exit(0);
    }
    return;
}
int main()
{
    printf("————————————————————\n");
    printf("       网课生活      \n");
    printf("  按任意键开始游戏    \n");
    printf("————————————————————\n");
    getch();
    system("cls");
    srand(time(0));
    bool end=0,elselesson=0;
    short day=0;
    while(1)
    {
        if(day<6)
        {
            printf("今天是星期");
            switch(day)
            {
                case 1:printf("一\n");break;
                case 2:printf("二\n");break;
                case 3:printf("三\n");break;
                case 4:printf("四\n");break;
                case 5:printf("五\n");break;
            }
            Sleep(5000);
            system("cls");
            classing("早读",-10);
            while(lesson<5)
            {
                if(lesson>1 && lesson<4)
                {
                 if(elselesson<1)
                 {
                    printf("-----------------------------\n");
                    printf("            事件           \n");
                    printf("这节课无关紧要，你可以选择开小差\n以补充精神值。\n");
                    printf("   A、开小差        B、上课  \n");
                    printf("-----------------------------\n");
                    printf("你选择：");
                    scanf("%c",choose);
                    if("choose='A'")
                    {
                        classing("开小差",+20);
                        wrong++;
                        lesson++;
                        class_over();
                    }
                    else
                    {
                        if("choose='B'") break;
                        else
                        {
                            printf("这不是一个有效选择！");
                            Sleep(5000);
                            system("cls");
                            continue;
                        }
                        
                    }
                    elselesson++;
                  }
                  switch (lesson)
                  {
                     case 2:classing("第二节课",-20);;break;
                     case 3:classing("第三节课",-20);break;
                  }
                  lesson++;
                  class_over();
                }
                else
                {
                    if(lesson==1)
                    {
                        classing("第一节课",-20);
                        lesson++;
                    }
                    else
                    {
                        classing("第四节课",-20);
                        lesson++;
                    }
                    
                }
            }
            lesson=0;
            elselesson=0;
            printf("下课了，是午休时间\n");
            classing("吃午饭",0);
            printf("-----------------------------\n");
            printf("            事件           \n");
            printf("  午休时间到，你可以选择玩电脑以\n补充精神值。\n");
            printf("   A、玩电脑（+30）B、睡觉（+5）  \n");
            printf("-----------------------------\n");
            printf("你选择：");
            scanf("%c",choose);
            if(choose=='A')
            {
                classing("玩电脑",30);
                wrong++;
                grandparent=rand()%2;
                if(grandparent==1)
                {
                    printf("-----------------------------\n");
                    printf("            事件           \n");
                    printf("  你被爷爷奶奶逮到了，今晚必有一\n场惨案\n");
                    printf("-----------------------------\n");
                }
            }
            else
            {
                classing("睡觉",5);
            }
            classing("数学答疑",-20);
            class_over();
            classing("英语答疑",-20);
            class_over();
            classing("语文答疑",-20);
            class_over();
            }
        }
    }
    return 0;
}