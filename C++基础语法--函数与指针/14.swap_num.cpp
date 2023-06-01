# include<iostream>

using namespace std;

// 利用指针传递 ----> 实现数的交换


void swap_value(int *a, int *b)
{
    cout << "输出 swap_value 函数相关信息" << endl;
    cout << "指针 a 指向的值: " << *a << endl;                  // 100
    cout << "指针 b 指向的值: " << *b << endl;                  // 200

    int temp = *a;
    *a = *b;
    *b = temp;

}


int main()
{
    int x {100}, y {200};


    cout << "===========" << endl;
    cout << "交换前, x的值是: " << x << endl;                   // 100
    cout << "交换前, y的值是: " << y << endl;                   // 200


    cout << "===========" << endl;
    swap_value(&x, &y);


    cout << "===========" << endl;
    cout << "交换后, x的值是: " << x << endl;                   // 200
    cout << "交换后, y的值是: " << y << endl;                   // 100


    return 0;
}