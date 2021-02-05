#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100]="\ntest";
    //创建文件指针 
    FILE *pf=fopen("file.out","a");//fopen([filename],[actiontype]): 以[actiontype]方式操作[filename]文件 
    fwrite(ch,1,100,pf);//fwrite([string],[byte],[end],[FILE]):在[FILE]对应的文件中输出[string]，每个字符占[byte]个字符，输出[end]个元素
	fclose(pf);//fclose([FILE]):关闭[FILE]对应的文件 
    return 0;
}

