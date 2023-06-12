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


// 传统的赋值语句, 进行构造函数初始化列表
// Account :: Account()
// {
//     name = "None";
//     balance = 0.0;
// }


// Account :: Account(string name)
// {
//     this -> name = name;
//     balance = 0.0;
// }


// Account :: Account(string name, double balance)
// {
//     this -> name = name;
//     this -> balance = balance;
// }


// 构造函数初始化列表
Account :: Account()
    : name {"None"}, balance {0.0}
    {

    }


Account :: Account(string name)
    : name {name}, balance {0.0}
    {

    }


Account :: Account(string name, double balance)
    : name {name}, balance {balance}
    {

    }




int main()
{
    Account alice_account;
    alice_account.printInfo();                      

    Account jobs_account {"Job's account"};                               // 这里使用 () 也能正常运行
    jobs_account.printInfo();

    Account bill_account {"Bill's account", 1230.0};
    bill_account.printInfo();


    return 0;

}




