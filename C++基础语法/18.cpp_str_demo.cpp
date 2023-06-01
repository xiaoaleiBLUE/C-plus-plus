#include<iostream>
#include<string>

using namespace std;

int main()
{
    // 声明和初始化
    string s1;                             // 默认初始化为空的字符串
    string s2 {"hello"};                   // 列表初始化
    string s3 {s2};                        // 拷贝初始化
    string s4 {"Hello", 3};                // 从字符串的前3个字符初始化
    string s5 {s2, 1, 3};                  // 从 s2的第 1 个开始, 拷贝 3 个字符
    string s6 (5, 'x');                    // 5 个 x, 括号形式

    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl;
    cout << "s4: " << s4 << endl;
    cout << "s5: " << s5 << endl;
    cout << "s6: " << s6 << endl;

    // 赋值
    string s_1;
    s_1 = "c++ hello world";
    cout << "s_1: " << s_1 << endl;

    string s_2 {"course"};
    cout << "s_2: " << s_2 << endl;

    s_2 = s_1;
    cout << "s_2: " << s_2 << endl;

    // 拼接
    string part1 {"C++"};
    string part2 {"是一门强大的语言"};
    string sentence;

    sentence = part1 + " " + part2 + "语言";
    cout << "sentence: " << sentence << endl;

    // 获取字符, 更新值
    string c1 {"hello"};

    // 获取元素
    cout << "c1[0]: " << c1[0] << endl;

    cout << "c1[1]: " << c1.at(1) << endl;

    // 重新赋值
    c1[0] = 'H';
    c1[4] = 'X';

    cout << "c1: " << c1 << endl;

    // 遍历输出字符
    string t1 {"hello"};

    for (auto c : t1)
    {
        cout << c << endl;
    }

    //  int, 遍历输出 ASCII
    for (int c : t1)
    {
        cout << c << endl;
    }


    return 0;
}








