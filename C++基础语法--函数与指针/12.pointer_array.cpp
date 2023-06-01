#include<iostream>


using namespace std;


int main()
{

    int student_scores [] {100, 98, 99};
    cout << "student_scores的地址值是: " << student_scores << endl;             // 数组地址: 0x7ffe560146fc

    int *score_ptr {student_scores};                                           // score_ptr指向 student_scores 数组的第一个元素地址
    cout << "score_ptr的值是: " << score_ptr << endl;                          // 数组地址: 0x7fff94350e9c


    cout << "====== 输出每个元素对应的地址值 ======" << endl;
    cout << score_ptr << endl;                                                // 0x7fff94350e9c
    cout << score_ptr + 1 << endl;                                            // 0x7fff94350ea0
    cout << score_ptr +2 << endl;                                             // 0x7fff94350ea4


    cout << "====== 数组名称, 下表访问元素 ======" << endl;
    cout << student_scores[0] << endl;                         // 100
    cout << student_scores[1] << endl;                         // 98
    cout << student_scores[2] << endl;                         // 99


    cout << "====== 指针名称, 下表访问元素 ======" << endl;     // 指针名称 和 数组名称 等价
    cout << score_ptr[0] << endl;                             // 100
    cout << score_ptr[1] << endl;                             // 98
    cout << score_ptr[2] << endl;                             // 99


    cout << "====== 指针名称, 指针运算符方式访问元素 ======" << endl;
    cout << *score_ptr << endl;                               // 100
    cout << *(score_ptr + 1) << endl;                         // 98
    cout << *(score_ptr + 2) << endl;                         // 99
    // 对指针进行解引用
    cout << *score_ptr << endl;                               // 这里解引用还是初始值, 100


    cout << "====== 数组名称, 指针运算符方式访问元素 ======" << endl;
    cout << *student_scores << endl;                          // 100
    cout << *(student_scores + 1) << endl;                    // 98
    cout << *(student_scores + 2) << endl;                    // 99


    cout << "====== ++ 运算符 ======" << endl;

    // 但需要注意的是, ++ 会改变指针的值, 下次访问的就不是原来的位置, score_ptr 会赋值 
    cout << *score_ptr++ << endl;                             // 100
    cout << *score_ptr++ << endl;                             // 99
    cout << *score_ptr++ << endl;                             // 98
    cout << *score_ptr << endl;                               // ++ 会改变指针的值, 所以最后会输出一个随机值


    return 0;
}










