#include<iostream>
#include<string>
#include<vector>

using namespace std;


// class Account
// {
// private:
//     string name {"account"};
//     double balance {0.0};

// public:
//     static int num_accounts;                        // 静态成员变量, 类外初始化
//     Account(string name, double balance);
//     ~Account();

// };


// // static 成员变量类外初始化
// int Account :: num_accounts {0};

// Account :: Account(string name, double balance)
//     : name {name}, balance {balance}
//     {
//         num_accounts++;
//     }


// Account :: ~Account()
// {
//     num_accounts--;
// }


// // 一般不这样进行访问
// int main()
// {
//     cout << Account :: num_accounts << endl;

//     // 创建一个对象
//     Account alice_account {"Alice_account", 2000.0};

//     // 访问 static 成员变量
//     cout << alice_account.num_accounts << endl;

//     // 访问 static 成员变量
//     cout << Account :: num_accounts << endl;




//     return 0;
// }


// 这样访问静态成员变量

class Account
{
private:
    string name {"account"};
    double balance {0.0};
    static int num_accounts;                         // 静态成员变量, 类外初始化

public:
    static int get_num_accounts();                   // 一般是创建一个方法去访问静态成员变量
    Account(string name, double balance);
    ~Account();
};


// 静态成员变量类外初始化
int Account :: num_accounts {0};

// 定义方法访问 private 中的静态成员变量
int Account :: get_num_accounts()                   // 前面不需要使用 static 关键字
{
    // 静态成员方法只能访问静态成员变量
    return num_accounts;
}


Account::Account(string name, double balance)
    : name {name}, balance {balance}
    {
        num_accounts++;
    }


Account::~Account()
{
    num_accounts--;
}




int main()
{
    cout << Account :: get_num_accounts() << endl;

    // 定义对象
    Account alice_account {"alice_account", 1000.0};

    cout << Account :: get_num_accounts() << endl;

    // 定义对象
    Account bob_account {"bob_account", 500.0};
    
    cout << Account :: get_num_accounts() << endl;


    return 0; 

}
