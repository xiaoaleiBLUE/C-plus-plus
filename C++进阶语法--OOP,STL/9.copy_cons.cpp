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
    string getName() { return name; }               // 获取 name
    double getBalance() { return balance; }         // 获取 balance

    // 构造函数
    Account(string name = "none", double balance = 0.0);

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


// 拷贝构造函数: 根据已存在的对象属性来更新新对象的属性(name, balance)
// Account :: Account(const Account &source)
// {
//     this -> name = source.name;
//     this -> balance = source.balance;

// }


// 拷贝构造函数
Account :: Account(const Account &source)
    : name {source.name}, balance {source.balance}
    {
        cout << "拷贝构造函数被调用, 是" << source.name << "的拷贝" << endl;

    }


// 打印账户基本信息
void printAccountInfo(Account acc)
{
    cout << acc.getName() << "的余额是: " << acc.getBalance() << endl;
}




int main()
{
    // 1.值传递的方式给函数传递参数
    // Account alice_account;                         // 调用构造函数,

    // cout << "=============" << endl;

    // printAccountInfo(alice_account);               // 调用拷贝函数, 调用打印函数, acc需要销毁, 然后调用析构函数, 最后调用 alice_account 析构函数

    // 2.基于已存在的对象创建新的对象

    Account alice_account {"Alice account", 1000.0};  // 调用构造函数

    Account new_account {alice_account};              // 调用拷贝函数,  后入先出进行销毁函数, 调用析构函数(调用两个析构函数)


    return 0;

}







