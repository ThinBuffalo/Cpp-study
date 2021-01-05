#include <bits/stdc++.h>
using namespace std;
int main()
{
    char type;
    float n;
    scanf("%c%f", &type, &n);
    switch (type)
    {
    case 'P':
    {
        printf("%.2lf", 0.7 * n);
        break;
    }
    case 'G':
    {
        printf("%.2lf", 0.8 * n);
        break;
    }
    case 'S':
    {
        printf("%.2lf", 0.9 * n);
        break;
    }
    default:
    {
        printf("%.2lf", 0.95 * n);
        break;
    }
    }
    system("pause");
    return 0;
}