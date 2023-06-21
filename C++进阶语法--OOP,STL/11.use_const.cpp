#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Account
{
private:
    
    double balance {0.0};

public:
    string name {"account"};

    // 设置新名称, 修改名字
    void set_new_name(string new_name) const {

        // name = new_name;
    }

    // 获取名字 --> get_name() 变成常函数
    string get_name() const {

        return name;
    }

    // 构造函数
    Account(string name = "none", double balance = 0.0);

    // 析构函数
    ~Account();

};


Account::Account(string name, double balance)
    : balance {balance}, name {name}
    {
        cout << "构造函数" << endl;

    }


Account::~Account()
{
    cout << "析构函数" << endl;
}




int main()
{
    // 常函数
    // Account alice_account {"Alice", 1000};

    // alice_account.set_new_name ("Alice2");             // 由于是 const, 名字不会被修改

    // cout << alice_account.get_name() << endl;          // Alice


    // 常对象 --> 只能访问常函数
    const Account bob_account {"Bob", 2000.0};
    // bob_account.name = "Bob2";                         // 修改名字
    // cout << bob_account.get_name() << endl;            // Bob2

    cout << bob_account.get_name() << endl;
    

    return 0;

}