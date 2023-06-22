#include<iostream>
#include<string>
#include<vector>

using namespace std;


template <typename T>
class Item
{
private:
    std :: string name;
    T value;

public:
    Item(std :: string name, T value)
        : name {name}, value{value}
        {

        }

    std :: string get_name() const {return name;}

    T get_value() const {return value;}


};


// 类型可以不同
template <typename T1, typename T2>
struct My_pair
{
    T1 first;
    T2 second;
    
};




int main()
{
    Item<int> item_1 {"alice", 200};
    cout << item_1.get_name() << " " << item_1.get_value() << endl;

    Item<string> item_2 {"bob", "C++"};
    cout << item_2.get_name() << " " << item_2.get_value() << endl;

    // value 是一个自定义类型, value 的自定义类型也是 Item 类型
    Item<Item<string>> item_3 {"caaol",{"david", "C++"}};
    cout << item_3.get_name() << " " << item_3.get_value().get_name() << " " << item_3.get_value().get_value() << endl;

    // 定义容器
    vector<Item<double>> vec;

    vec.push_back(Item<double>("Frank", 100.0));
    vec.push_back(Item<double>("George", 200.0));
    vec.push_back(Item<double>("Harry", 300.0));

    for (const auto &item : vec)
    {
        cout << item.get_name() << " " << item.get_value() << endl;
    }


    cout << "================" << endl;
    My_pair<std :: string, int> p1 {"hello", 100};
    My_pair<int, double> p2 {200, 3.14};

    // 访问成员属性
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;


    return 0;

}











