#include<iostream>
#include<cstring>
#include<vector>


using namespace std;


// 函数的重载
void demo_print(int);                                     // 打印整数
void demo_print(double);                                  // 打印浮点数
void demo_print(string);                                  // 打印 1 个字符串
void demo_print(string, string);                          // 打印 2 个字符串
void demo_print(vector <string> );                        // 打印字符串向量


int main()
{
    // 函数重载示例, 打印不同类型的数据
    demo_print(1000);                                 // void demo_print(int num)
    demo_print(123.456);                              // double --> void demo_print(double num)
    demo_print(123.5f);                               // float 会被转为 double --> void demo_print(double num)
    demo_print('A');                                  // 会被转为整数的 ASCII 的值 --> void demo_print(int num)
    demo_print("C style string");                     // c-style string 被转换为 string --> void demo_print(string s)

    string s {"C++ string"};                          // C++ string

    demo_print(s);                                    // --> void demo_print(string s)

    demo_print("C style string ", s);                 // c-style string 和C++ string, --> void demo_print(string s1, string s2)

    vector <string> languages {"C++", "Python", "Java"};
    demo_print(languages);                            // --> void demo_print(vector <string> v)


    return 0;
}


void demo_print(int num)
{
    cout << "整数: " << num << endl;
}


void demo_print(double num)
{
    cout << "浮点数: " << num << endl;
}


void demo_print(string s)
{
    cout << "字符串: " << s << endl;
}


void demo_print(string s1, string s2)
{
    cout << s1 << s2 << endl;
}


void demo_print(vector <string> v)
{
    cout << "字符向量: " << endl;

    for (auto s:v)
    {
        cout << s << " ";
    }
    cout << endl;
}







