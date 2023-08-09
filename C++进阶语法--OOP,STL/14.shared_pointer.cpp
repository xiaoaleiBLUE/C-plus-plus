/*
        shared_ptr
shared_ptr<T> ptr_name
    指向 head 堆上类型 T 的对象
    不唯一, 多个 shared_ptr 可以指向同一个对象
    被管理对象的所有权在多个 shared_ptr 中共享
    可以复制或赋值
    可以移动
    引用计数为 0, 被指向的对象会自动释放销毁

{
    std :: shared_ptr<int> p1 {new int {100}};

    std :: cout << *p1 << std :: endl;                // 100

    *p1 = 200;

    std :: cout << *p1 << std :: endl;                // 200
}   // 自动销毁

{
    std :: vector<std :: shared_ptr<int>> vec;
    std :: shared_ptr<int> ptr {new int {100}};

    vec.push_back(ptr);                              // 允许拷贝

    std :: cout << ptr.use_count() << std :: endl;   // 2 
}   // 自动销毁

            使用 make_shared 初始化(C++11 标注)
{
    std :: shared_ptr<int> p1 = std :: make_shared<int>(100);              // use count = 1

    std :: shared_ptr<int> p2 {p1};                                        // use count = 2

    std :: shared_ptr<int> p3;

    p3 = p1;                                                               // use count = 3

    cout << p1.use_count() << endl;                                        // 3

}   // 自动销毁

*/

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
    Account(string name = "none", double balance = 0.0);
    ~Account();
    void print() const;

};


Account :: Account(string name, double balance)
    : name {name}, balance {balance}
    {
        cout << "构造函数, name: " << name << endl;
    }


Account :: ~Account()
{
    cout << "析构函数, name: " << name << endl;
}


void Account :: print() const
{
    cout << "name: " << name << ", balance: " << balance << endl;
}


void test_func(shared_ptr<Account>p)
{
    cout << "p.use_count(): " << p.use_count() << endl;
}




// 主函数
int main()
{
    // cout << "==========================" << endl;
    // shared_ptr<int> p1 {new int {100}};
    // cout << "p1.use_count(): " << p1.use_count() << endl;             // 1

    // shared_ptr<int> p2 {p1};                                          // 拷贝构造, 共享所有权
    // cout << "p1.use_count(): " << p1.use_count() << endl;             // 2

    // p1.reset();                                                       // 释放所有权, 但是不会销毁对象, 因为p2还在使用
    // cout << "p1.use_count(): " << p1.use_count() << endl;             // 0
    // cout << "p2.use_count(): " << p2.use_count() << endl;             // 1


    cout << "==========================" << endl;
    shared_ptr<Account> p1 = make_shared<Account>("Alice", 1000.0);      // 使用 make_shared 方法创造指向 Account 类型的shared_ptr
    test_func(p1);

    cout << "p1.use_count(): " << p1.use_count() << endl;                // 1

    {
        shared_ptr<Account> p2 = p1;
        cout << "p2.use_count(): " << p2.use_count() << endl;            // 2

        {
            shared_ptr<Account> p3 = p1;
            cout << "p3.use_count(): " << p3.use_count() << endl;        // 3

            p1.reset();
        }

        cout << "p1.use_count(): " << p1.use_count() << endl;            // 0
        cout << "p2.use_count(): " << p2.use_count() << endl;            // 1

    }

    cout << "p1.use_count(): " << p1.use_count() << endl;                // 0


    cout << "==========================" << endl;
    shared_ptr <Account> p1_1 = make_shared<Account>("Alice", 300.0);
    shared_ptr <Account> p2_1 = make_shared<Account>("Bob", 300.0);
    shared_ptr <Account> p3_1 = make_shared<Account>("Charlie", 300.0);

    vector<shared_ptr<Account>> accounts;

    accounts.push_back(p1_1);
    accounts.push_back(p2_1);
    accounts.push_back(p3_1);

    for (const auto &p : accounts)
    {
        p -> print();
        cout << "p.use_count(): " << p.use_count() << endl;

    }


    return 0;

}




