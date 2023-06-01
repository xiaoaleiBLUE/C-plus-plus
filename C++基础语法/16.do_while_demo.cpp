#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    
    // 输入菜单小 demo
    char input_char {};

    do
    {   
        cout << endl;
        cout << "菜单选项: " << endl;
        cout << "1. 查看记录" << endl;
        cout << "2. 修改记录: " << endl;
        cout << "3. 新增记录" << endl;
        cout << "q 或者 Q, 退出" << endl;

        // 提醒用户输入选项
        cout << "请输入你的选项: ";
        cin >> input_char;

        // switch 和 if 进行条件的筛选和选择
        switch (input_char)
        {

            case '1':
                cout << "1. 查看记录" << endl;
                break;
            
            case '2':
                cout << "2. 修改记录: " << endl;
                break;

            case '3':
                cout << "3. 新增记录" << endl;
                break;

            case 'q':
            case 'Q':
                cout << "q 或者 Q, 退出" << endl;
                break;

            default:
                cout << "输入错误" << endl;
                break;

        }

    } while(input_char != 'q' && input_char != 'Q');


    return 0;
}









