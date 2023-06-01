#include<iostream>

using namespace std;

int main()
{
    char input_grade {};
    cout << "请输入你的成绩: ";
    cin >> input_grade;

    switch (input_grade)
    {
        case 'a':
        case 'A':
            cout << "优秀" << endl;                     // 当字母是 a 或 A, 输出 优秀
            break;

        case 'b':
        case 'B':
            cout << "良好"  << endl;
            break;

        case 'c':
        case 'C':
            cout << "中等"  << endl;
            break;

        case 'd':
        case 'D':
            cout << "及格"  << endl;
            break;

        case 'e':
        case 'E':
            cout << "不及格"  << endl;  
            break;

        default:
            cout << "输入错误" << endl;
            break;

    }



    return 0;
}