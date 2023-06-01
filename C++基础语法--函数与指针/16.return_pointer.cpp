#include <iostream>

using namespace std;


// 返回动态分配内存
// create_array 也在堆上分配
int *create_array(size_t size, int initial_value = 0)
{
    int *new_storage {nullptr};

    new_storage = new int [size];           // 在堆上 分配内存, new_storage在 堆上, new_storage指向的地址在 栈上

    for(size_t i {0}; i < size; i++)
    {
        // 初始化值
        *(new_storage + i) = initial_value;

        // new_storage[i] = initial_value;         // 等价于上一行
    }

    return new_storage;                            // 返回指针(指向的地址)
}


// 显示数组
void display(int *array, size_t size)
{
    for(size_t i = 0; i < size; i++)
    {
        cout << *array++ << " ";                 // 先取 ++ 运算, 在取 * 运算, array++: 地址往下面加, 
    }

    cout << endl;
}


int main()
{
    // 在堆上分配
    size_t size {};
    int value {};
    int *new_arr {nullptr};

    cout << "请输入数组的大小: " ;
    cin >> size;

    cout << "请输入数组的初始值: ";
    cin >> value;


    // 动态分配内存
    new_arr = create_array(size, value);        // 此时 new_arr 指向 (new_storage指向的地址)

    display(new_arr, size);

    delete [] new_arr;                     // 释放内存


    return 0;

}









