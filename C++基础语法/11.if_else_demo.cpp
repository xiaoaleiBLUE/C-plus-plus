#include <iostream>

using namespace std;

int main()
{
    int input_num {0};
    const int target_num {50};

    cout << "请输入一个整数, 我将和" << target_num << "比较大小: ";
    cin >> input_num;

    if (input_num <= target_num)
    {
        cout << "=========条件1满足========" << endl;
        cout << input_num << "小于等于" << target_num << endl;
        cout << input_num << "比" << target_num << "小" << (target_num - input_num) << endl;
    }
    else
    {
        cout << "=========条件2满足========" << endl;
        cout << input_num << "大于" << target_num << endl;
        cout << input_num << "比" << target_num << "大" << (input_num - target_num) << endl;
    }


    return 0;
}