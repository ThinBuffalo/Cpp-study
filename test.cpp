//test
#include<bits/stdc++.h>
using namespace std;
float theSecondParty(int n, int k)
{
    if (k == 0)
        return 1;
    float ans = 1.0;
    bool negative = 0;
    if (k < 0)
    {
        k = 0 - k;
        negative = 1;
    }
    for (int i = 1; i <= k; i++)
    {
        ans *= (float)n;
    }
    if (negative)
    {
        ans = 1.0 / ans;
    }
    return ans;
}
int main()
{
    printf("%lf",theSecondParty(2,5));
    system("pause");
    return 0;
}