#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100]="\ntest";
    //�����ļ�ָ�� 
    FILE *pf=fopen("file.out","a");//fopen([filename],[actiontype]): ��[actiontype]��ʽ����[filename]�ļ� 
    fwrite(ch,1,100,pf);//fwrite([string],[byte],[end],[FILE]):��[FILE]��Ӧ���ļ������[string]��ÿ���ַ�ռ[byte]���ַ������[end]��Ԫ��
	fclose(pf);//fclose([FILE]):�ر�[FILE]��Ӧ���ļ� 
    return 0;
}

