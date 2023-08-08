/*
            在类中使用 const
常函数
    函数名称后加const
    函数体内不可以修改类成员属性

常对象
    声明对象时前面加const
    不可以修改常对象的成员属性
    仅能调用常函数

*/

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

    // 设置修改名字函数, const 修饰, 就不能修改
    void set_new_name(string new_name) const 
    {

    }

    // 获取名字函数
    string get_name() const 
    {

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




// 主函数
int main()
{
    Account alice_account {"Alice", 1000};

    alice_account.set_new_name ("Alice2");                // 由于是 const, 名字不会被修改

    cout << alice_account.get_name() << endl;             // Alice, 输出仍是 Alice

    // string name 是 public 属性, 可以进行直接属性修改
    Account bob_account {"Bob", 2000.0};
    bob_account.name = "Bob2";                            // 修改名字
    cout << bob_account.get_name() << endl;               // Bob2

    // 常对象, 代表变量不可发生改动
    const Account bob_account {"Bob", 2000.0};

    cout << bob_account.get_name() << endl;               // 必须修改 string get_name() 为 string get_name() const


    return 0;

}









