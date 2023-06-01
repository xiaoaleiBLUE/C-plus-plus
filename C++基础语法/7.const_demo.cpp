#include<iostream>

using namespace std;


int main()
{
    const double pi {3.1415926};                     // 圆周率, 一般不可更改, 增加 const 修饰

    cout << "请输入半径：";
    double radius {};
    cin >> radius;

    cout << "圆周率为：" << pi * radius * radius << endl;


    return 0;
}











