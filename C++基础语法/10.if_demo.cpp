#include<iostream>

using namespace std;


int main()
{
    int input_num {0};
    const int lower_limit {10};
    const int upper_limit {50};

    cout << "请输入一个介于" << lower_limit << "和" << upper_limit << "之间的整数: ";

    cin >> input_num;

    if (input_num >= lower_limit) 
    {
        cout << "=========条件 1 满足=========" << endl;
        cout << input_num << "大于等于" << lower_limit <<endl;
        cout << input_num << "比" << lower_limit << "大" << (input_num - lower_limit) << endl;  
    }

    if (input_num <= upper_limit) 
    {
        cout << "=========条件 2 满足=========" << endl;
        cout << input_num << "小于等于" << upper_limit <<endl;
        cout << input_num << "比" << upper_limit << "小" << (upper_limit - input_num) << endl;  
    }

    if (input_num >= lower_limit && input_num <= upper_limit)
    {
        cout << "=========条件 3 满足=========" << endl;
        cout << input_num << "介于" << lower_limit << "和" << upper_limit << "之间" << endl;
    } 

    if (input_num == lower_limit || input_num == upper_limit)
    {
        cout << "=========条件 3 满足=========" << endl;
        cout << input_num << "等于" << lower_limit << "或" << upper_limit << endl;
        cout << input_num << "在边界点" << endl;
        cout << "条件1, 2, 3满足" << endl;
    }

    return 0;
}