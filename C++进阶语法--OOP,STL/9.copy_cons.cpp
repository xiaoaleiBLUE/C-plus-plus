/*
            拷贝构造函数
当对象被拷贝时, C++ 必须从已存在的对象复制出一个新的对象

何时使用拷贝构造函数？
    以值传递方式传递对象给函数(作参数)
    函数以值方式返回对象
    使用已存在的对象复制新的对象

拷贝构造函数(函数名 和 类名 一样)的声明

Student :: Student(const  Student &source);
Account :: Account(const Account &source);

*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;


class Account
{
private:
    // 属性
    string name{"account"};
    double balance{0.0};

public:
    string getName() { return name; }                           // 获取 name
    double getBalance() { return balance; }                     // 获取 balance

    // 构造函数, 函数名 和 类名 一样
    Account(string name = "none", double balance = 0.0);        // 增加默认的初始值, 这样main()中的Account alice_account就不会报错

    // 析构函数
    ~Account();

    // 拷贝构造函数
    Account(const Account &source);

};


// 构造函数
Account :: Account(string name, double balance)
    : name {name}, balance {balance}
    {
        cout << "2个参数的构造函数被调用, name:" << name << endl;

    }


// 析构函数
Account :: ~Account()
{
    cout << "析构函数被调用, name:" << name << endl;
}



// 拷贝构造函数: 根据已存在对象的属性来更新新对象的属性(name, balance)
Account :: Account(const Account &source)
    : name {source.name}, balance {source.balance}
    {
        this -> name = source.name;                                            // source.name已存在对象, this -> name 新对象、
        this -> balance = source.balance;
        cout << "拷贝构造函数被调用, 是" << source.name << "的拷贝" << endl;

    }


// 打印账户基本信息
void printAccountInfo(Account acc)
{
    cout << acc.getName() << "的余额是: " << acc.getBalance() << endl;
}




// 主函数
int main()
{
    // 1.值传递的方式给函数传递参数
    Account alice_account;                                   // 调用构造函数 Account :: Account(string name, double balance)

    cout << "=============" << endl;

    printAccountInfo(alice_account);                         // 值传递方式传递对象给函数, 调用拷贝函数, 在调用打印函数, 最后调用 Account :: ~Account()


    // 2.基于已存在的对象创建新的对象
    Account Alice_account {"Alice account", 1000.0};      // 调用构造函数

    Account new_account {Alice_account};                  // 调用拷贝函数, 结束调用: Account new_account析构函数


    return 0;                                             // Account Alice_account调用析构函数, Account alice_account调用析构函数                              

}






