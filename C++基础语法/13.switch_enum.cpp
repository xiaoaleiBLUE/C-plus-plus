#include <iostream>

using namespace std;

int main()
{
    enum Traffic_light {red, yellow, green};                    // 枚举类型

    Traffic_light light_colort {yellow};

    switch (light_colort)
    {
        case red:
            cout << "red" << endl;
            break;

        case yellow:
            cout << "yellow" << endl;
            break;

        case green:
            cout << "green" << endl;
            break;

        default:
            cout << "输入错误" << endl;
            break;

    }



    return 0;
}