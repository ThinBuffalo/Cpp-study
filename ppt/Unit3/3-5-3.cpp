//ͬ3-2-5.cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    scanf("%d", &x);
    printf("%s", (x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0) ? "YES" : "NO");
    system("pause");
    return 0;
}