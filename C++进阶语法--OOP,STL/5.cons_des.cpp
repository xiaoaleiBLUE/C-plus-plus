#include<iostream>
#include<string>
#include<vector>

using namespace std;


class Account
{
private:
    // 属性
    std :: string name {"account"};
    double balance {0.0};

public:
    void setName(string name)
    { 
        this->name = name; 
    };


    // 构造函数
    Account()
    {
        cout << "没有参数的构造函数被调用" << endl;
    };

    Account(std :: string name)
    {
        cout << "带 string name 参数的构造函数被调用" << endl;
    };

    Account(double balance)
    {
        cout << "带 double balance 参数的构造函数被调用" << endl;
    };

    Account(string name, double balance)
    {
        cout << "带 string name 和 double balance 参数的构造函数被调用" << endl;
    };


    // 析构函数
    ~Account()
    {
        cout << name << " 的析构函数被调用" << endl;
    };

};




int main()
{
    {
        Account alice_account;                         // 没有参数 --> 构造函数Account()
        alice_account.setName("Alice's account");      // --> 设置名称 --> 析构函数~Account()
    }

    cout << "====================" << endl;

    {
        Account jobs_account;  
        jobs_account.setName("Jobs account");


        Account bill_account("Bill's account");
        bill_account.setName("Bill's account");

    
        Account steve_account(1000.0);
        steve_account.setName("Steve's account");

        // 调用完要出栈, 先进后出, 首先调用 Steve's account 析构函数, 然后 Bill's account 析构函数, 最后 Jobs account 析构函数

    }

    Account *mark_account = new Account("Mark account", 1000.0);
    mark_account -> setName("Mark account");
    delete mark_account;                                            // delete 才会出栈, 显示: Mark account 的析构函数被调用

    return 0;
}








