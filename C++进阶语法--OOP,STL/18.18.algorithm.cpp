/*
* 算法示例
* STL算法基于迭代器生成的序列
* STL提供了很多算法（例如查找、排序、计数、操作），可以对序列进行操作
* 多数算法要求提供额外参数，例如：排序算法需要提供排序规则，一般使用函数指针、lambda表达式或仿函数（函数对象）
*/

#include <iostream>
#include <vector>
#include <algorithm> // 算法头文件
#include <list>

void test1()
{
    std::cout << "test1 ======================" << std::endl;

    std::vector<int> v1{1, 2, 3, 4, 5};
    std::vector<int>::iterator loc = std::find(v1.begin(), v1.end(), 8); // 查找3
    if (loc != v1.end())
        std::cout << "找到 3" << std::endl;
    else
        std::cout << "未找到 3" << std::endl;
}


void test2()
{
    std::cout << "test2 ======================" << std::endl;
    std::vector<int> v1{1, 2, 3, 4, 5, 1, 2, 1};
    int counts = std::count(v1.begin(), v1.end(), 1); // 统计1的个数
    std::cout << "1的个数: " << counts << std::endl;
}


// 判断是否是偶数
bool isEven(int x)
{
    return x % 2 == 0;
}


void test3()
{
    std::cout << "test3 ======================" << std::endl;
    std::vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8, 9};

    int counts = std::count_if(v1.begin(), v1.end(), isEven); // 使用函数指针统计偶数个数

    counts = std::count_if(v1.begin(), v1.end(), [](int x)
                           { return x % 2 == 0; }); // 使用lambda表达式统计偶数个数
    std::cout << "偶数个数: " << counts << std::endl;

    counts = std::count_if(v1.begin(), v1.end(), [](int x)
                           { return x > 6; }); // 统计大于6的个数
    std::cout << "大于6的个数: " << counts << std::endl;
}


void test4()
{
    std::cout << "test4 ======================" << std::endl;
    std::vector<int> v1{1, 2, 3, 4, 5, 1, 2, 1};
    for (const auto &e : v1)
        std::cout << e << " ";
    
    std::cout << std::endl;

    std::replace(v1.begin(), v1.end(), 1, 100); // 将1替换为100

    for (const auto &e : v1)
        std::cout << e << " ";
    std::cout << std::endl;
}


void test5()
{
    std::cout << "test5 ======================" << std::endl;
    std::vector<int> v1{1, 2, 3, 4, 5, 6, 7, 8, 9};
    if (std::all_of(v1.begin(), v1.end(), [](int x) { return x > 5; }) ) // 所有元素都大于5
        std::cout << "所有元素都大于5" << std::endl;
    else
        std::cout << "不是所有元素都大于5" << std::endl;
    
    if (std::any_of(v1.begin(), v1.end(), [](int x) { return x > 5; }) ) // 至少有一个元素大于5
        std::cout << "有元素大于5" << std::endl;
    else
        std::cout << "没有元素大于5" << std::endl;

    if (std::none_of(v1.begin(), v1.end(), [](int x) { return x < 0; }) ) // 没有元素小于0
        std::cout << "没有元素小于0" << std::endl;
    else
        std::cout << "有元素小于0" << std::endl;

}


void test6()
{
    std::cout << "test6 ======================" << std::endl;
    std::string s1 {"hello world"};
    std::cout << s1 << std::endl;
    std::transform(s1.begin(), s1.end(), s1.begin(), ::toupper); // 转换为大写，从s1的begin到end，转换后的结果放到s1的begin
    std::cout << s1 << std::endl;

}




// 主函数
int main()
{
    // test1();
    // test2();
    // test3();
    // test4();
    // test5();
    // test6();


    return 0;

}





