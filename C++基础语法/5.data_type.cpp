#include<iostream>
using namespace std;


int main()
{

    // 字符型
    cout << "======== 字符型 =========" << endl;

    char my_char {'j'};

    cout << "字符型:" << my_char << endl;


    // 整型

    cout << "======== 整型 =========" << endl;

    short my_short {54};

    cout << "短整型:" << my_short << endl;

    //  = 与 {} 初始化变量的区别
    //  short 取值范围: -32768(2^15) ~ 32767(2^15-1)
    short overflow_num_1 = 32768;                             // 不会报错, 但是值会溢出
    cout << "短整型溢出:" << overflow_num_1 << endl;           // 短整型溢出:-32768， 输出 -32768

    short overflow_num_2 = {368};                           // {} 赋值, 会检查报错
    cout << "短整型溢出:" << overflow_num_2 << endl;           // 短整型溢出:-32768， 输出 -32768


    // int
    int my_height = {175};
    cout << "整型:" << my_height << endl;

    // long
    long people_in_hangzhou {10360000};
    cout << "长整型:" << people_in_hangzhou << endl;

    // long long
    long people_in_world {80'0000'0000};                        // 方便阅读
    cout << "长长整型:" << people_in_world << endl;

    // 浮点型 float
    float book_price {32.23f};                                  // 默认为double, 加上 f, 表示 float
    cout << "浮点型:" << book_price << endl;                    //  默认输出 6 位有效数字                 

    // 浮点型 double
    double pi {3.1415926};                                      // 默认
    cout << "浮点型数值圆周率:" << pi << endl;                   // 输出 3.14159             

    // 布尔类型
    bool add_to_cart {false};
    cout << boolalpha;                                         // 以 bool 值得形式输出
    cout << "是否加入购物车:" << add_to_cart << endl;           // 0


    cout << endl;

    return 0;

}






