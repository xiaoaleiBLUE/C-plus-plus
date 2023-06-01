#include<iostream>
#include<string>
#include<vector>

using namespace std;


void display_1( vector<string> *v)
{
    for(auto str : *v)
    {
        cout << str << " ";
    }
    cout << endl;
}


void display_2( vector<string> *v)
{
    (*v).at(0) = "kiwi";                  // 修改 vector 第一个元素的值

    for(auto str : *v)
    {
        cout << str << " ";
    }
    cout << endl;
}


void display_3(int *array, int sentinel)
{
    while(*array != sentinel)                  // 如果指针指向的值 != sentinel, 执行 while 循环
    {
        cout << *array++ << endl;
    }
    cout << endl;
}


int main()
{
   
    vector <string> my_str {"apple", "orange", "banana"};

    display_1(&my_str);                                               // apple orange banana 

    // 修改指针元素指向的值元素
    display_2(&my_str);                                               // kiwi orange banana 


    cout << "===========================" << endl;

    int student_scores [] {100, 98, 90, 86, 84, -1};

    display_3(student_scores,-1);                                    // 100 98 90 86 84
    

    return 0;
}










