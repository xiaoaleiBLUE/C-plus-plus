#include<iostream>

using namespace std;


// 递归调用, 输出 n 的阶乘
unsigned long long factorial(unsigned long long n)
{
    if (n == 0)
        return 1;
    return n * factorial(n-1);                      // 递归调用
}


int main()
{
    long long n {0};

    cout << "请输入需要计算阶乘的数字: " ;

    cin >> n;

    cout << factorial(n) << endl;                  // 计算 n 的阶乘

    cout << factorial(5) << endl;                  // 5 的阶乘: 120


    return 0;
}

















