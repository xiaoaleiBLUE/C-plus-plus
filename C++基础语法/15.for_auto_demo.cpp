#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    // 遍历整型数组
    int student_scores [] {100, 65, 45, 32, 99, 98};

    for(auto score : student_scores)
    {
        cout << score << " " << endl;
    }

    // 计算平均温度
    vector <double> temps {23.1, 22.9, 23.3, 23.9, 23.5};

    double temp_average {};                     // 平均温度
    double temp_total {};                       // 总温度

    for(auto temp: temps)
    {
        temp_total += temp;                     // 累加
    }

    // 求平均温度
    temp_average = temp_total / temps.size();

    // 设置精度, 保留小数点后一位
    cout << fixed << setprecision(1);

    // 输出平均温度
    cout << "平均温度是: " << temp_average << endl;


    // 解析列表
    for (auto i : {1, 2, 3, 4, 5})
    {
        cout << i << " ";                                    // 在输出 i 后面, 加了空格
    }

    // 字符串解析
    for (auto c: "this is test")
    {
        cout << c << " ";                                    // 在输出 c 后面, 加了空格
    }

    // 


    cout << endl;
    return 0;
}  










