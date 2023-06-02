#include<iostream>
#include<string>
#include<vector>

using namespace std;


// 定义 account 账户类
class Account
{
public:
    // 定义成员属性
    string name {"None"};                               // 账户姓名
    double balance {0.0};                               // 账户余额

    // 定义成员方法: 存款, 取款
    bool deposit (double amount)                       // 存款 --> 只是一个函数原型 -- 可以直接用函数方法进行定义
    {
        balance = balance + amount;
        cout << name << "刚存入" << amount << "元, 现在余额为: " << balance << "元" << endl;

        return true;
    };


    bool withdraw (double amount)                      // 取款 --> 只是一个函数原型 -- 可以直接用函数方法进行定义
    {
        if (balance >= amount)
        {
            balance = balance - amount;
            cout << name << "刚取出" << amount << "元, 现在余额为: " << balance << "元" << endl;

            return true;
        }
        else
        {
            cout << name << "余额不足, 取款失败" << endl;

            return false;
        }
    };

};


int main()
{
    // 实例化两个对象, 访问成员属性
    Account jobs_account;
    
    jobs_account.name = "Jobs";
    jobs_account.balance = 1000.0;

    // 访问成员方法, 运行存款函数
    jobs_account.deposit(500.0);

    // 访问成员方法, 运行取款函数
    jobs_account.withdraw(300.0);


    // 采用指针的方法, 进行获取,  -> 访问成员和方法
    cout << "==============================" << endl;
    Account *alice_account = new Account();

    // (*alice_account).name = "Alice";
    alice_account -> name = "Alice";

    // (*alice_account).balance = 2300.0;
    alice_account -> balance = 2300.0;

    alice_account -> deposit(300.0);
    alice_account -> withdraw(1100.0);


    return 0;
    
}












