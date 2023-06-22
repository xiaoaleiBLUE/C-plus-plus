/*
* 迭代器示例
* 迭代器可以将任意的容器抽象成一个序列, 可以使用迭代器遍历容器中的元素
* 迭代器设计的目的是为了解决容器与算法之间的耦合问题, 与指针类似, 可以通过迭代器访问容器中的元素

* 迭代器的声明方式为: 容器类型 :: iterator, 比如:

std :: vector<int> :: iterator it;
std :: list<int> :: iterator it;
std :: map<int, int> :: iterator it;
std :: set<int> :: iterator it;

*/
#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<list>


// 打印 vector 元素
void printVec(const std :: vector<int> &v)
{
    std :: cout << "[";
    for(const auto &e : v)
    {
        std :: cout << e << " ";
    }
    std :: cout << "]" << std :: endl;

}


void test1()
{
    std :: cout << "test1 ===============" << std :: endl;
    std :: vector<int> v1 {1, 2, 3, 4, 5};
    std :: vector<int> :: iterator it = v1.begin();                    // 指向第一个元素
    std :: cout << *it << std :: endl;                                 // 指针的解引用

    it++;                                                              // 指向第二个元素
    std :: cout << *it << std :: endl;

    it += 2;                                                           // 指向第四个元素
    std :: cout << *it << std :: endl;

    it -= 2;                                                           // 指向第二个元素
    std :: cout << *it << std :: endl;

    it = v1.end() - 1;                    // 指向最后一个元素, 注意 end() 指向最后一个元素的下一个位置
    std :: cout << *it << std :: endl;

}


void test2()
{
    std :: cout << "test2==============" << std :: endl;
    std :: vector<int> v1 {1, 2, 3, 4, 5};
    auto it = v1.begin();

    while(it != v1.end())
    {
        std :: cout << *it << std :: endl;
        it ++;                                        //  指向下一个元素                           
    }

    printVec(v1);
}


void test3()
{
    std :: cout << "test3==============" << std :: endl;
    std :: vector<int> v1 {1, 2, 3, 4, 5};

    // 两种写法一致
    // std :: vector<int> :: const_iterator it = v1.begin();   // 常量迭代器, 只能读取元素, 不能修改元素
    auto it = v1.cbegin();                                     // 如果使用 auto, 需要使用cbegin()函数, 返回一个常量迭代器

    while(it != v1.end())
    {
        std :: cout << *it << std ::endl;
        it ++;                                                // 指向下一个元素
    }

    it = v1.begin();                                          // 重新指向第一个元素
    while(it != v1.end())
    {
        // *it = 100;                                         // 报错, 不能修改元素
        it ++;                                                // 指向下一个元素
    }

}


void test4()
{
    std :: cout << "test4==============" << std :: endl;
    std :: vector<int> v1 {1, 2, 3, 4, 5};
    auto it = v1.rbegin();                                    // 返回一个反向迭代器, 指向最后一个元素

    while(it != v1.rend())                                    // rend()指向一个元素的前一个位置
    {
        std::cout << *it << std::endl;
        it++;                                                 // 指向下一个元素
    }

    std :: list<std :: string> l_1 {"helo", "world", "C++"};
    auto it2 = l_1.rbegin();

    std :: cout << *it2 << std :: endl;
    it2 ++;

    std :: cout << *it2 << std :: endl;

    // map里面是数据对, 前面是 key, value, 里面元素自动按照 key 来排序, 
    std :: map<std :: string, std :: string> m1
    {
        {"hello", "你好"},
        {"world", "世界"},
        {"Computer", "计算机"}
    };

    auto it3 = m1.begin();

    while (it3 != m1.end())
    {
        std::cout << it3->first << " : " << it3->second << std::endl;
        it3++;
    }

}



int main()
{
    test1();
    test2();
    test3();
    test4();
    

    return 0;

}











