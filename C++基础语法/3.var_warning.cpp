#include<iostream>

using namespace std;


// 变量未初始化警告
int main()
{
    int age;
    cout << "年龄: " << age << endl;           // 生成已完成, 但收到警告, 但不是错误, 系统可能会随机初始化



    return 0;
}