#include<iostream>
using namespace std;


int main(int argc, char ** argv)
{

    cout << "参数数量: " << argc << endl;
    cout << "============参数列表============" << endl;

    // argv: 参数列表
    for (int i {0}; i<argc; ++i)
    {
        cout << " 参数: " << argv[i] << endl;
    }

    int name  {};
    cout << "请输入你想要的数字" << endl;
	cin >> name;

    cout << "你输入的数字" << name << endl;

    return 0;

}












