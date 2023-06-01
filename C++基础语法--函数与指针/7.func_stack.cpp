#include<iostream>

using namespace std;


//
void func_2(int &x, int y, int z)
{
    x += y + z;
}


//
int func_1(int a, int b)
{
    int result {};

    result = a + b;

    func_2(result, a, b);

    return result;
}


int main()
{
    int x {20};
    int y {30};
    int z {};

    z = func_1(x, y);

    cout << "z = " << z << endl;


    return 0;
}


//  入栈: main,  func_1,  func_2
//  出栈: func_2,  func_1,  main
