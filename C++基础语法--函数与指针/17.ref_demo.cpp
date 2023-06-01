#include<iostream>
#include<string>
#include<vector>

using namespace std;


int main()
{
    int my_num {10};
    int &my_ref {my_num};                          // 这里采用引用, my_ref 是 my_num 的别名, 一个改变另一个也会改变

    cout << "my_num: " << my_num << endl;
    cout << "my_ref: " << my_ref << endl; 

    my_ref = 100;                                  // 修改引用, my_num 也会修改

    cout << "my_num: " << my_num << endl;
    cout << "my_ref: " << my_ref << endl; 

    vector <string> my_str {"Hello", "World", "!"};

    cout << "========================" << endl;

    // 输出 vector 元素的值
    for (auto str : my_str)
    {
        cout << str << endl;
    }

    cout << "========================" << endl;

    // 这里的 str 是一个拷贝, str 的值改变不会影响 my_str 的值
    for(auto str : my_str)
    {
        str = "C++";
    }

    // 输出还是原来的字符串
    for (auto str : my_str)
    {
        cout << str << endl;
    }

    // 这里的 str 是一个引用  ----> 引用后修改的值才会改变, my_str 中的所有字符串都会被修改为 C++
    for(auto &str : my_str)
    {
        str = "C++";
    }

    cout << "========================" << endl;

    // 输出是修改以后的值
    for (auto str : my_str)
    {
        cout << str << endl;
    }


    return 0;
}








