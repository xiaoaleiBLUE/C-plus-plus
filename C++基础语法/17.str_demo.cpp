#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

int main()
{

    char name [50] {};

    cout << "=========================" << endl;

    cout << "请输入你的全名: " << endl;

    cin.getline(name, 50);                                 // 读取一行输入的值, 最多 50 个字符                                  

    cout << "你的姓名是: " << name << endl;





    return 0;
}