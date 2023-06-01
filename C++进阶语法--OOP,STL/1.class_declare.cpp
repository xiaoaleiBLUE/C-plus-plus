#include<iostream>
#include<string>
#include<vector>

using namespace std;


// 定义 account 账户类
class Account
{
    // 定义成员属性
    string name {"None"};                               // 账户姓名
    double balance {0.0};                               // 账户余额

    // 定义成员方法: 存款, 取款
    bool deposit (double amount);                       // 存款
    bool withdraw (double amount);                      // 取款

};


int main()
{
    // 实例化两个对象
    Account jobs_account;
    Account alice_account;

    Account accounts [] {jobs_account, alice_account};               // 数组

    vector<Account> accounts_vec {jobs_account};                     // vector

    accounts_vec.push_back(alice_account);

    Account *p_account = new Account();                              // 指针
    delete p_account;


    return 0;
}










