#include<iostream>
#include<climits>
using namespace std;

int main()
{
    cout << " size info of data types:" << endl;
    cout << "=========================" << endl;

    // char
    cout << "char: " << sizeof(char) << "bytes" << endl;

    // short
    cout << "short: " << sizeof(short) << "bytes" << endl;

    // int
    cout << "int: " << sizeof(int) << "bytes" << endl;

    // long
    cout << "long: " << sizeof(long) << "bytes" << endl;
    
    // long long
    cout << "long long: " << sizeof(long long) << "bytes" << endl;

    // float
    cout << "float: " << sizeof(float) << "bytes" << endl;

    // double
    cout << "double: " << sizeof(double) << "bytes" << endl;

    cout << "=========================" << endl;

    cout << "min and max values" << endl;
    cout << "char min: " << CHAR_MIN << ", max: " << CHAR_MAX << endl;
    cout << "short min: " << SHRT_MIN << ", max: " << SHRT_MAX << endl;
    cout << "int min: " << INT_MIN << ", max: " << INT_MAX << endl;
    cout << "long min: " << LONG_MIN << ", max: " << LONG_MAX << endl;
    cout << "long long min: " << LLONG_MIN << ", max: " << LLONG_MAX << endl;

    cout << "=========================" << endl;
    cout << " sizeof using variable name: " << endl;
    
    int age {31};
    cout << "age is " << sizeof(age) << "bytes" <<endl;
    
    cout << endl;

    return 0;
}










