#include<iostream>
#include<string>
#include<vector>
#include<memory>

using namespace std;


class Account
{
private:
    string name {"account"};
    double balance {0.0};

public:
    // 构造函数
    Account(string name = "none", double balance = 0.0);

    // 析构函数
    ~Account();

    // 存款
    bool deposit(double amount);     

    // 打印信息
    void printInfo() const;

    // 获取存款
    double getBalance();

};


Account::Account(string name, double balance)
    : name {name}, balance {balance}
    {
        cout << "构造函数, name: " << name << endl;
    }


Account::~Account()
{
    cout << "析构函数, name: " << name << endl;
}


bool Account :: deposit(double amount)
{
    balance = balance + amount;
    return true;
}


void Account :: printInfo() const
{
    cout << "name: " << name << ", balance: " << balance << endl;
}


double Account :: getBalance()
{
    return balance; 
}




int main()
{
    Account alice_account {"Alice", 100.0};                       // 构造函数和析构函数都会调用
    
    // 指向 Account 类型的指针, 在堆上申请内存空间, 并初始化 Bob, 2000.0
    Account *bob_account = new Account{"Bob", 2000.0};            // 只有构造函数被调用
    delete bob_account;                                           // 析构函数被调用

    unique_ptr<Account> p1 {new Account {"jams", 1500.0}};        // 构造函数和析构函数都会调用

    auto p2 = make_unique<Account>("mike", 1200.0);               // 构造函数和析构函数都会调用

    unique_ptr<Account> p3;

    // p3 = p2;                                                   // 报错, 因为unique_ptr不允许被拷贝, 只能移动

    p3 = move(p2);                                                // p2 会被置为 null

    if (! p2)                                                     
        cout << "p2 is null " << endl;

    auto p4 = make_unique<Account>("Helen", 300.0);

    // 调用成员函数
    p4 -> deposit(1000.0);
    p4 -> printInfo();

    // 创建容器vector: accounts, 指向 Account 的 unique_ptr, 
    vector<unique_ptr<Account>> accounts;

    // 创建多个指向 Account 的 unique_ptr
    accounts.push_back( make_unique<Account>("alice", 700.0));
    accounts.push_back( make_unique<Account>("bob", 500.0));
    accounts.push_back( make_unique<Account>("mike", 1000.0));

    for (const auto &acc :  accounts)
        cout << acc -> getBalance() << endl;


    return 0;

}