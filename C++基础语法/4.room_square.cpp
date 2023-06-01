#include<iostream>
using namespace std;


//  计算房间面积的 demo   
int main()
{

    float room_width {0};

    cout << "请输入房间的宽度:";

    cin >> room_width;

    float room_length {0};

    cout << "请输入房间的长度:";

    cin >> room_length;

    cout << "======== 计算结果 ========" << endl;

    cout << "房间的面积: " << room_width * room_length << endl;

    return 0;
}























