#include<iostream>
#include<string>
#include<vector>


using namespace std;


class Account
{
private:
    // 属性
    std ::string name {"account"};
    double balance {0.0};

public:
    // 打印信息
    void printInfo();

    // 构造函数, 初始化参数
    Account(string name, double balance);
};


void Account :: printInfo()
{
    cout << "name: " << name << " balance: " << balance << endl;
}


// 构造函数内部初始化对象
Account :: Account(string name, double balance)
{
    this -> name = name;
    this -> balance = balance;
}


int main()
{
    Account *mark_account = new Account("mark account", 1000.0);
    

    return 0;
}