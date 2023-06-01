#include<iostream>
#include<cmath>

using namespace std;

const double pi {3.1415926};               // 圆周率

// 将计算圆的函数放在 main() 后面, 会报错,  利用函数原型进行解决问题

// 函数原型
double calculate_area(double radius);
void circle_area();


int main()
{
    // 计算圆的面积
    circle_area();

    return 0;
}


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





