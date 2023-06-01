#include<iostream>
#include<cmath>

using namespace std;

const double pi {3.1415926};               // 圆周率

// 计算圆的圆的面积的函数， pow() 函数用于计算幂
double calculate_area(double radius)
{
    return pi * pow(radius, 2);            // pow() 函数用于计算幂
}


// 获取半径并计算圆的面积
void circle_area()
{
    cout << "请输入圆的半径: " << endl;
    double radius {0};

    cin >> radius;

    cout << "圆的面积是：" << calculate_area(radius) << endl;

}


int main()
{
    // 计算圆的面积
    circle_area();

    return 0;
}

