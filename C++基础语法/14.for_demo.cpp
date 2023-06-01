#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // 打印乘法表
    for(int i {1}; i <=9; i++)
    {
        for(int j {1}; j<=i; j++)
        {
            cout << i << "*" << j << "=" << (i*j) << "\t";
        }

        cout << endl;
    }

    // 循环中嵌套 if 语句
    for(int i {1}; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << "是偶数" << endl;
        }
        else
        {
            cout << i << "是奇数" << endl;
        }
    }

    // 用逗号分隔两个参数
    for(int i {1}, j{5}; i <= 5; i++, j++)
    {
        cout << i << "*" << i << (i*j) << endl;
    }

    // for 遍历 vector 容器, for(int i {0}): 会报错,  这里使用 size_t, unsigned 
    vector <int> nums {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};             // 初始化

    for(size_t i {0}; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }
    
    // for 解析 vector
    vector <double> temps {23.1, 22.9, 19.3, 23.2};

    double average_temps {};
    double sum_temp {};

    for (auto temp : temps)
    {
        sum_temp += temp;
    } 

    average_temps = sum_temp / temps.size();

    cout << "The average temperature is " << average_temps << endl;

    return 0;
}











