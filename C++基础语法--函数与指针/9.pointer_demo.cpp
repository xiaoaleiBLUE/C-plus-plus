#/*
&: 地址操作符
指针也是一个变量, 所以它的值可以改变
指针可以为 null
指针可以不初始化

指针和其他变量没啥区别, 只是指针存储的值是地址, 可以指向其他的数值
int *score_ptr {nullptr}   定义一个指针变量
score_ptr: score_ptr变量存储的值
*score_ptr: score_ptr变量存储的值作为地址所指向的值
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;


int main()
{
    cout << "====================" << endl;

    int my_num {10};

    cout << "my_num变量的值是: " << my_num << endl;                      // 10

    cout << "my_num变量的 sizeof 是: " << sizeof(my_num) << endl;        // 4

    cout << "my_num变量的地址是: " << &my_num << endl;                   //  获取 my_num 的地址: 0x7ffcd43a4a4c
    cout << endl;


    cout << "====================" << endl;

    int *num_ptr;                                                      // 指向 int 类型的指针 num_ptr, w未初始化(值是随机的), 但是地址是确定的

    cout << "num_ptr 变量的值是: " << num_ptr << endl;                  // 指针变量初始化, 可能指向任何地方, 值是随机的

    cout << "num_ptr 变量的sizeof是: " << sizeof(num_ptr) << endl;      // 8

    cout << "num_ptr 变量的地址是: " << &num_ptr << endl;               // 指针的值是随机的, 但是变量的地址是确定的
    cout << endl;


    num_ptr = nullptr;                                                 // 指针指向的值为 空(0)
    cout << "num_ptr变量的值是: " << num_ptr << endl;                   // 0


    cout << "====================" << endl;

    int *p1 {nullptr};
    double *p2 {nullptr};
    long long *p3 {nullptr};
    string *p4 {nullptr};
    vector<int> *p5 {nullptr};

    // 指针占用内存的大小
    cout << "p1的sizeof的值是: " << sizeof(p1) << endl;                 // 8
    cout << "p2的sizeof的值是: " << sizeof(p2) << endl;                 // 8
    cout << "p3的sizeof的值是: " << sizeof(p3) << endl;                 // 8
    cout << "p4的sizeof的值是: " << sizeof(p4) << endl;                 // 8
    cout << "p5的sizeof的值是: " << sizeof(p5) << endl;                 // 8
    

    cout << "====================" << endl;

    int student_score {100};                                           // 初始化student_score, 值是100, 地址是 2000
    // double high_temp {41.5};                                       

    int *score_ptr {nullptr};                                          // 指针变量score_ptr, 值是: 0, 地址是: 5000
    score_ptr = &student_score;                                        // 将student_score的地址赋值给score_ptr, score_ptr: 值是2000, 地址5000

    cout << "student_score的值是: " << student_score << endl;           // 100
    cout << "student_score的地址是: " << &student_score << endl;        // 0x7ffda400baa4
    cout << "score_ptr的值是: " << score_ptr << endl;                   // 0x7ffda400baa4
    cout << "*score_ptr的值是: " << *score_ptr << endl;                 // 100, 输出是: score_ptr的值(作为地址)所指向的数

    // score = &high_temp;                                              // 会报错, score_ptr 是 int 类型的指针, 不能指向 double 类型的变量


    // 字符操作及解引用和对指针重新赋值
    cout << "====================" << endl;
    string name {"John"};
    string *string_ptr = {&name};

    cout << *string_ptr << endl;                       // John

    name = "Mike";
    cout << *string_ptr << endl;                       // Mike


    return 0;
}
