#include<iostream>

using namespace std;

// 利用指针传递改变 变量的值


// 定义函数原型
void double_data(int *int_ptr)
{
    *int_ptr *= 2;                                        // 等价  *int_ptr = *int_ptr * 2    
     cout << "int_ptr的地址是: " << int_ptr << endl;      // 与 value 地址一样
                           
}

int main()
{
    // 函数调用
    int value {20};

    cout << "value的值是: " << value << endl;           // 20
    cout << "value的地址是: " << &value << endl;        // 输出 value 的地址

    double_data(&value);                               // 传递 value 的地址
    cout << "value的值是: " << value << endl;          // 40


    int *int_ptr {nullptr};
    int_ptr = &value;                                  // 指针指向 value 的地址

    cout << "int_ptr的值是: " << int_ptr << endl;      // 与 value 地址一样
    cout << "int_ptr指向的值: " << *int_ptr << endl;   // 40 


    double_data(int_ptr);
    cout << "int_ptr指向的值: " << *int_ptr << endl;   // 80
    cout << "value的值是: " << value << endl;          // 80


    return 0;
}










