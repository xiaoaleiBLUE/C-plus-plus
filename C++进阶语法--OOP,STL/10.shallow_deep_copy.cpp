#include<iostream>
#include<string>
#include<vector>

using namespace std;


class Account
{
private:
    // 属性
    string name {"account"};
    double *balance {nullptr};

public:
    double get_balance() {return *balance;};              // 获取余额
    string get_name() {return name;};                     // 获取名字


    // 构造函数
    Account(string name = "none", double balance = 0.0);  // 有默认参数的构造函数

    // 拷贝构造函数
    Account(const Account &source);

    // 析构函数
    ~Account();


};


// 构造函数
Account :: Account(string name, double balance)
{
    this -> name = name;
    this -> balance = new double {balance};                     // 因为是指针, 堆上进行分配内存
    cout << "2个参数的构造函数被调用, nmae: " << name << endl;
}


// 拷贝构造函数
Account :: Account(const Account &source)
    {
        this -> name = source.name;
        // this -> balance = source.balance;                   // 浅拷贝
        this -> balance = new double {*source.balance};        // 深拷贝
        cout << "拷贝构造函数被调用, 是" << source.name << "的拷贝" << endl;
    }


// 拷贝构造函数
Account :: ~Account()
{
    if (balance != nullptr)
        delete balance;           // 释放内存
    
    cout << "析构函数被调用, name: " << name << endl;
    
}




int  main()
{
    // 演示深拷贝与浅拷贝
    Account alice_account {"Alice", 1000.0};
    Account new_account {alice_account};             // 拷贝构造函数被调用


    return 0;

}