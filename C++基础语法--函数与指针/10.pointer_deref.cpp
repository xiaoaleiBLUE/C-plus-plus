/*
        指针的解引用运算
int main()
{
    double high_temp {40.1};
    double low_temp {20.2};


    double *temp_ptr {nullptr};            指向 double 类型的指针
    temp_ptr = &high_temp;                 指向 high_temp
    cout << *temp_ptr << endl;             指针解引用, 40.1

    temp_ptr = &low_temp;                  重新指向 low_ptr
    cout << *temp_ptr << endl;             指针解引用, 20.2


    return 0;

}

*/
#include<iostream>
#include<vector>

using namespace std;


int main()
{
    // 这种引用方法也需要掌握
    cout << "========================" << endl;
    int student_score {100};                         // 初始值: 100
    int *score_ptr {&student_score};                 // 指向 student_score的 int类型的指针 score_ptr, 初始值是student_score的地址

    cout << "student_score的值是: " << student_score << endl;                         // 100
    cout << "通过指针score_ptr 访问 student_score的值是: " << *score_ptr << endl;      // 指针的解引用,  100


    // 对指针重新赋值, 值都会进行更新
    *score_ptr = 150;                                                                        // 指针的值作为地址指向的值进行改变, 间接就是student_score的值改变
    cout << "Updated, student_score的值是: " << student_score << endl;                       // 150
    cout << "Updated, 通过指针score_ptr 访问 student_score的值是: " << *score_ptr << endl;    // 150


    cout << "========================" << endl;
    double high_temp {41.5};
    double low_temp {37.5};

    double *temp_ptr {&high_temp};                                                            // 等价语句 double *temp_ptr {};  temp_ptr = &high_temp;
    cout << "通过指针temp_ptr 访问 high_temp的值是: " << *temp_ptr << endl;                    // 41.5

    temp_ptr = &low_temp;                                                                    // 指针的值: 改变, high_temp, low_temp本身没有改变
    cout << "通过指针temp_ptr 访问 low_temp的值是: " << *temp_ptr << endl;                    // 37.5


    cout << "========================" << endl;

    string str {"Hello"};
    string *str_ptr {&str};

    cout << "通过指针str_ptr(指针解引用) 访问 str的值是: " << *str_ptr << endl;                // Hello

    str = "World";                                                                          // 对 str 重新赋值, 其指针的指向的值也会改变
    cout << "Updated, 通过指针str_ptr 访问 str的值是: " << *str_ptr << endl;                 // World

    *str_ptr = {"hello"};                                                                  // 指针指向进行重新赋值
    cout << "Updated, str的值是: " << str << endl;                                          // hello
    cout << "Updated, 通过指针 str_ptr 访问 str的值是: " << *str_ptr << endl;                // hello


    cout << "========================" << endl;
    vector <string> my_str_vec {"Hello", "World", "computer", "vision"};
    vector <string> *vector_ptr {&my_str_vec};                                                   // 指针vector_ptr存放地址值, 指针本身也有地址值

    cout << "my_str_vec的第一个元素是: " << my_str_vec.at(0) << endl;                                           // Hello
    cout << "通过指针vector_ptr(指针解引用) 访问 my_str_vec的第一个元素是: " << (*vector_ptr).at(0) << endl;      // Hello


    // 通过指针 --> 遍历所有元素
    cout << "遍历所有元素: ";       
    for (auto str : *vector_ptr)                           // *vector_ptr(指针的解引用)  --等价-->  my_str_vec
    {
        cout << str << " ";
    }

    cout << endl;


    // 遍历所有元素
    cout << "遍历所有元素: ";
    for (size_t i {0}; i<4; i++)
    {
        cout << (*vector_ptr).at(i) << " ";
    }

    cout << endl;


    return 0;

}








