#include <bits/stdc++.h>
using namespace std;
// struct student
// {
//     string name;
//     string sex;
//     int by;
//     int bm;
// } stu[101];
// int main()
// {
//     /*
//         struct untitle1
//         {
//             [type] name1;
//             [type] name2;
//             ......
//         }unnamed1;
//     */
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%s%s%d%d", &stu[i].name, &stu[i].sex, &stu[i].by, &stu[i].bm);
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = i + 1; j <= n; j++)
//         {
//             if (stu[i].by <= stu[j].by && stu[i].bm < stu[j].bm)
//             {
//                 swap(stu[i], stu[j]);
//             }
//         }
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         cout << stu[i].name << " " << stu[i].sex << " " << stu[i].by << " " << stu[i].bm << endl;
//     }
//     system("pause");
//     return 0;
// }
struct t
{
    int hour,min,second;
    void input()
    {
        scanf("%d%d%d",&hour,&min,&second);
    }
    void output()
    {
        cout<<hour<<"hour "<<min<<"minute "<<second<<"second "<<endl;
    }
    int operator +(const t x)const
    {
        
    }
};
int main()
{
    /*
        运算符重载
        在结构体内：
        [type] operator [operator](const structname untitled1)const
        {
            ...
        }
    */
}