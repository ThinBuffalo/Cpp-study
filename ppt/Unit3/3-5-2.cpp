//同3-3-1
//三目运算符：[条件]?[真时返回]:[假时返回]
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", (n <= 5 ? n * 300 : n * 280));
    system("pause");
    return 0;
}