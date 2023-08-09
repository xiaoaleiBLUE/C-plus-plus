/*
        STL 标准模板库
一个强大的, 可复用的, 自适应的泛型类和函数集合
使用 C++ 模板 实现
实现了常见的数据结构 和 算法
庞大的类库

        三个主要的组件
容器
    各种对象或原始类型的集合
    array, vector, deque, stack, set, map

算法
    处理容器元素序列的各种函数
    find, max, count, accumulate, sort

迭代器
    从容器中生成元素的序列
    forward, reverse, by value, by reference, constant等

        STL -- 简单示例
#include<algorithm>                   // 导入算法头文件

{
    std :: vector<int> vec {1, 5, 2, 4, 3};

    std :: sort(vec.begin(), vec.end());                   // 排序

    for(auto v : vec)
    {
        std :: cout << v << " ";
    }

    return 0;
}

        STL 容器类别
序列式容器
关联式容器
容器适配器

        STL 迭代器的类别
输入迭代器
输出迭代器
前向迭代器
双向迭代器
随机访问迭代器

        函数模板
可以有多个模板
他们的类型可以不一样

template<typename T1, typename T2>                                 // 定义模板, 可以有多个类型参数
void func(T1 a, T2 b)
{
    std :: cout << a << " " << b << std :: endl;
}

*/

#include<iostream>
#include<string>

using namespace std;


// 函数模板(也支持 class)
template<typename T>
T min_func(T a, T b)
{
    return a < b ? a : b;
}


// 函数模板
template<class T1, class T2>
void display(T1 a, T2 b)
{
    cout << a << " " << b << endl;
}




// 主函数
int main()
{
    std :: cout << min_func<int>(4, 3) << std :: endl;
    std :: cout << min_func(5, 6) << std :: endl;                           // 无需模板参数类型
    std :: cout << min_func('B', 'D') << std :: endl;
    std :: cout << min_func(3.3, 2.2) << std :: endl;


    return 0;

}



