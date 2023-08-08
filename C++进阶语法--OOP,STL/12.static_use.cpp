/*
            在类中使用 static
静态成员变量
    所有对象共有同一份数据(数据共享)
    在类中声明, 类外初始化

静态成员函数
    所有对象共享同一函数
    只能访问静态成员变量

class Account
{
private:
    static int num_accounts;                  // 静态成员变量

public:
    static int get_num_accounts();            // 静态成员函数

};

*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;


// 
class Account
{
private:
    string name {"account"};
    double balance {0.0};
    static int num_accounts;                         // 静态成员变量, 需要: 类外初始化

public:
    static int get_num_accounts();                   // 一般是创建一个方法去访问静态成员变量, 静态成员函数
    Account(string name, double balance);
    ~Account();
};


// 静态成员变量, 类外初始化
int Account :: num_accounts {0};

// 定义方法访问 private 中的静态成员变量
int Account :: get_num_accounts()                   // 前面不需要使用 static 关键字
{
    // 静态成员方法只能访问静态成员变量
    return num_accounts;
}


Account::Account(string name, double balance)
    : name {name}, balance {balance}
    {
        num_accounts++;
    }


Account::~Account()
{
    num_accounts--;
}




int main()
{
    cout << Account :: get_num_accounts() << endl;                    // 0

    // 定义对象
    Account alice_account {"alice_account", 1000.0};

    cout << Account :: get_num_accounts() << endl;                    // 1

    // 定义对象
    Account bob_account {"bob_account", 500.0};
    
    cout << Account :: get_num_accounts() << endl;                    // 2


    return 0; 

}











