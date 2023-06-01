#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 函数原型
void change_num(int num);
void change_string(string str);
void change_vector(vector <string> vec);
void print_vector(vector <string> vec);

// 函数定义
void change_num(int num)
{
    num = 1000;
    cout << "在change_num函数中, num的值是" << num << endl;
}


void change_string(string str)
{
    str = "World";
    cout << "在change_string函数中, str的值是" << str << endl;
}


void change_vector(vector <string> vec)
{
    vec.clear(); // 清空vector
}


void print_vector(vector <string> vec)
{
    for (auto s: vec)
    {
        cout << s << " ";
    }
    cout << endl;
}



// 主函数
int main()
{
    cout << "====================" << endl;
    int my_num {10};
    cout << "调用change_num函数前, my_num的值是" << my_num << endl;                   // 输出 my_num 的值
    change_num(my_num);
    cout << "调用change_num函数后, my_num的值是" << my_num << endl;


    cout << "====================" << endl;
    string my_string {"Hello"};
    cout << "调用change_string函数前, my_string的值是" << my_string << endl;
    change_string(my_string);
    cout << "调用change_string函数后, my_string的值是" << my_string << endl;


    cout << "====================" << endl;
    vector <string> my_vector {"Hello", "World", "computer", "vision"};
    cout << "调用change_vector函数前, my_vector的值是: " ;
    print_vector(my_vector);

    change_vector(my_vector);
    cout << "调用change_vector函数后, my_vector的值是: " ;
    print_vector(my_vector);


    return 0;
}






