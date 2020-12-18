#include<bits/stdc++.h>
using namespace std;
ifstream fin("stream.in");
ofstream fout("stream.out");
int main()
{
    //ifstream fin("[filename]");
    //定义输入流文件变量fin,指向引号指定的文本文档
    //ofstream fout("[filename]");
    //定义输出流文件类型fout，指向引号指定的文本文档
    //fin>>[name];
    //从fin指向文件中输入数据给某变量
    //fout<<[name];
    //输入变量数据到fout指向文件
    //fin.close(); || fout.close();
    //关闭输入/输出文件（程序结束时自动关闭，一般不写）
    string test;
    fin>>test;
    fout<<test;
    fin.close();
    fout.close();
    return 0;
}
