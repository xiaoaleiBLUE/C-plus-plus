/*
代理构造函数
    重载的构造函数很相似
    冗余的代码可能会导致错误
    C++ 允许使用代理构造函数
        在一个构造函数中初始化列表调用另一个构造函数

*/

#include<iostream>
#include<string>

using namespace std;


class Account
{

private:
    // 属性
    std :: string name {"account"};
    double balance {0.0};

public:
    // 打印信息
    void printInfo();

    // 三个重载的构造函数(函数名可以一样, 参数需不一致), 初始化参数
    Account();
    Account(string name);
    Account(string name, double balance);

};


void Account :: printInfo()
{
    cout << "姓名为name: " << name << " 存款为balance: " << balance << endl;

} 



// 没有参数的构造函数
Account :: Account()                                   
    : Account {"none", 0.0}                                 // 初始化列表, 调用两个参数的Account函数, 即调用  Account(string name, double balance)
    {

    }


// 1个参数的构造函数
Account :: Account(string name)
    : Account {name, 0.0}                                   // 初始化列表, 调用两个参数的Account函数, 即调用  Account(string name, double balance)
    {

    }


// 2个参数的构造函数
Account :: Account(string name, double balance)
    : name {name}, balance {balance}
    {

    }




// 主函数
int main()
{
    Account alice_account;                                     // 调用Account(), 调用Account(string name, double balance)
    alice_account.printInfo();                      

    Account jobs_account {"Job's account"};                    // 调用 Account(string name), 调用Account(string name, double balance)
    jobs_account.printInfo();

    Account bill_account {"Bill's account", 1230.0};           // 调用 Account(string name, double balance)
    bill_account.printInfo();


    return 0;

}




