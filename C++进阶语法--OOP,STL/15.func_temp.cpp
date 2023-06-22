#include<iostream>
#include<string>

using namespace std;


template<typename T>
T min_func(T a, T b)
{
    return a < b ? a : b;
}


template<class T1, class T2>
void display(T1 a, T2 b)
{
    cout << a << " " << b << endl;
}



int main()
{
    std :: cout << min_func<int>(4, 3) << std :: endl;
    std :: cout << min_func(5, 6) << std :: endl;
    std :: cout << min_func('B', 'D') << std :: endl;
    std :: cout << min_func(3.3, 2.2) << std :: endl;





    return 0;
}