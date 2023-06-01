#include<iostream>

using namespace std;


// 函数原型
// 打印数组
void print_arr(int arr[], size_t size);

// 更改数组
void change_arr(int arr[], size_t size);


int main()
{
    // 定义一个数组
    int student_scores [] {100, 98, 99, 65};                 // 初始化数组
    
    cout << student_scores << endl;                          // 打印数组的地址, 和形参函数的 数组地址 一致

    // 打印数组内容, 必须传入 数组名, 数组大小, 形式函数才可以进行参数的遍历
    print_arr(student_scores, 4);

    // 更改数组内容
    change_arr(student_scores, 4);

    // 打印更改后的数组
    print_arr(student_scores, 4);
    

    return 0;
}


// 完整的函数定义
void print_arr(int arr[], size_t size)
{
    cout << arr << endl;                        // 打印数组的地址

    for(size_t i {0}; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


// 更改的函数定义
void change_arr(int arr[], size_t size)
{
    cout << arr << endl;                        // 打印数组的地址

    int array [] { 100, 27, 34, 59};

    for(size_t i {0}; i < size; i++)
    {
        arr[i] = array[i];
    }
}





