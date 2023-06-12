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



// 代理构造函数 初始化列表
Account :: Account()                                   
    : Account {"none", 0.0}                                 // 花括号进行初始化
    {

    }


Account :: Account(string name)
    : Account {name, 0.0}                                   // 花括号进行初始化
    {

    }


// 构造函数初始化列表
Account :: Account(string name, double balance)
    : name {name}, balance {balance}
    {

    }




int main()
{
    Account alice_account;                                 // 调用过程: Account :: Account() --> Account :: Account(string name, double balance)
    alice_account.printInfo();                      

    Account jobs_account {"Job's account"};                // 这里使用 () 也能正常运行
    jobs_account.printInfo();

    Account bill_account {"Bill's account", 1230.0};
    bill_account.printInfo();


    return 0;

}




