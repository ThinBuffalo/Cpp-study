#include<bits/stdc++.h>
using namespace std;
ifstream fin("stream.in");
ofstream fout("stream.out");
int main()
{
    //ifstream fin("[filename]");
    //�����������ļ�����fin,ָ������ָ�����ı��ĵ�
    //ofstream fout("[filename]");
    //����������ļ�����fout��ָ������ָ�����ı��ĵ�
    //fin>>[name];
    //��finָ���ļ����������ݸ�ĳ����
    //fout<<[name];
    //����������ݵ�foutָ���ļ�
    //fin.close(); || fout.close();
    //�ر�����/����ļ����������ʱ�Զ��رգ�һ�㲻д��
    string test;
    fin>>test;
    fout<<test;
    fin.close();
    fout.close();
    return 0;
}
