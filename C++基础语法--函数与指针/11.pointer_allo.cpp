/*
        动态内存分配
int main()
{
    int *int_ptr {nullptr};
    cout << "地址是: " << int_Ptr << endl;

    int_ptr = new int {10};                    在堆上分配内存, 并初始化为 10
    cout << "地址是: " << int_ptr << "值是: " << *int_ptr << endl;

    *int_ptr = 100;                                     重新赋值
    cout << "int_ptr的值是: " << *int_ptr << endl;

    return 0;
}

地址是: 0
地址是: 0x55b6d73ef2c0, 值是: 10
int_prt的值是: 100

使用 new[] 为数组分配内存空间
使用 delete[] 释放内存

*/

#include<iostream>

using namespace std;


int main()
{

    // 在 堆上 分配一个 int 类型的内存
    int *int_ptr {nullptr};
    cout << "int_ptr = " << int_ptr << endl;                      // 输出地址, 为 0
    // cout << "*int_ptr = " << *int_ptr << endl;                 // 由于是nullptr, 输出: 0, 没有分配内存地址,这里解引用会出错


    int_ptr = new int;                                            // 分配内存, 分配一个 int 类型的内存, 给 指针int_ptr进行分配

    cout << "int_ptr = " << int_ptr << endl;                      // 输出地址: 0x55b6d73ef2c0
    cout << "解引用int_ptr = " << *int_ptr << endl;               // 0


    *int_ptr = 23;
    cout << "重新赋值后, 解引用int_ptr = " << *int_ptr << endl;    // 23


    // 在 堆上 分配一段连续的存储空间
    double *double_ptr {nullptr};
    size_t size {0};


    cout << "请输入要分配的内存的大小: ";
    cin >> size;

    double_ptr = new double[size];                                               // 分配一段连续的内存
    cout << "double_ptr的地址double_ptr = " << double_ptr << endl;               //  输出double_ptr的地址: 0x561c7c24a6f0

    delete [] double_ptr;


    return 0;
}














