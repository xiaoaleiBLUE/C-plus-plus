#include<iostream>
#include<vector>

using namespace std;


// 创建类
class Account
{
private:                                           // private 属性, 内部可进行调用
    // 成员属性
    string name {"None"};
    double balance {0.0};


public:
    // 成员方法 ---- 实现方法在类里面进行实现
    // 设置余额
    void set_balance(double amount)
    {
        balance = amount;
    };

    // 获取余额
    double get_balance()
    {
        return balance;
    };

    // 设置名称
    void set_name(string name);

    // 获取名称
    string get_name();

    // 存款
    bool deposit(double amount);

    // 取款
    bool withdraw (double amount);


};


// 设置名称, 在类的外部进行实现, 此时 set_name 就是 Account 成员函数
void Account :: set_name(string name)
{
    // 将该函数的形参 name 变成 成员属性 name, this -> neme: 成员属性的name, name该函数的形参name 
    this -> name = name;
}


// 获取名称
string Account :: get_name()
{
    return name;
}


// 存款
bool Account :: deposit(double amount)
{
    balance = balance + amount;
    cout << name << "刚存入" << amount << "元, 现在余额为: " << balance << "元" << endl;

    return true;

}


// 取款
bool Account :: withdraw (double amount)
{
    if (balance >= amount)
    {
        balance = balance - amount;
        cout << name << "刚取出" << amount << "元, 现在余额为: " << balance << "元" << endl;
        
        return true;

    }
    else
    {
        balance = balance - amount;
        cout << name << "刚取出" << amount << "元, 现在余额为: " << balance << "元" << endl;

        return false;
    }

}




int main()
{
    // 创建对象
    Account alice_account;

    // 设置账户名称
    alice_account.set_name("Alice account");

    // 设置账户余额
    alice_account.set_balance(1000);

    // 获取账户信息
    cout << alice_account.get_name() << "的余额为: " << alice_account.get_balance() << "元" << endl;

    // 存款
    alice_account.deposit(500.0);

    // 输出账户信息
    cout << alice_account.get_name() << "的余额为: " << alice_account.get_balance() << "元" << endl;

    // 取款
    alice_account.withdraw(300);

    // 输出账户信息
    cout << alice_account.get_name() << "的余额为: " << alice_account.get_balance() << "元" << endl;


    return 0;

}




