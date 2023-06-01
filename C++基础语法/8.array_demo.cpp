#include<iostream>

using namespace std;

int main()
{
    
    char vowels []{'a', 'e', 'i', 'o', 'u'};

    cout << "第一个元素是: " << vowels[0] << endl;

    cout << "第五个元素是: " << vowels[4] << endl;

    // cin >> vowels[5];      试图访问数组的第6个元素, 报错

    double hi_temps []{90.1, 89.8, 77.5, 81.6};                   // 4个元素

    cout << "第一天最高的温度: " << hi_temps[0] << endl;           // 输出第一天的最高温度 90.1

    hi_temps[0] = 100.7;                                          // 对第一天的温度重新赋值
    
    cout << "修改后的第一天的温度是: " << hi_temps[0] << endl;      // 修改后的第一天的最高温度 100.7

    cout << " 试图访问第六天的温度: " << hi_temps[5] << endl;       // 会输出异常值, 每次运行值还是不一样的

    int student_scores[5];                                        // 5个元素未初始化, 输出值为 随机的任意值
    // int student_scores[5]{100};                                // 只对第一个元素进行初始化
    // int student_scores[5]{100, 200};                           // 只对前两个元素进行初始化

    cout << "第1个学生的成绩是: " << student_scores[0] << endl;

    cout << "第2个学生的成绩是: " << student_scores[1] << endl;

    cout << "第3个学生的成绩是: " << student_scores[2] << endl;

    cout << "第4个学生的成绩是: " << student_scores[3] << endl;

    cout << "第5个学生的成绩是: " << student_scores[4] << endl;
    
    cout << "请重新输入5个学生的成绩: ";

    // 如果输入数字过多, 会自动舍弃后面的数值, 只会取前面的数值
    cin >> student_scores[0];
    cin >> student_scores[1];
    cin >> student_scores[2];
    cin >> student_scores[3];
    cin >> student_scores[4];

    cout << "更新后的成绩: " << endl;

    cout << "第1个学生的成绩是: " << student_scores[0] << endl;

    cout << "第2个学生的成绩是: " << student_scores[1] << endl;

    cout << "第3个学生的成绩是: " << student_scores[2] << endl;

    cout << "第4个学生的成绩是: " << student_scores[3] << endl;

    cout << "第5个学生的成绩是: " << student_scores[4] << endl;

    cout << "数组的名称是: " << *student_scores << endl;                 // 打印数组名称(数组的首地址), 其实就是打印数组的首地址

    // 定义一个二维数组
    cout << "定义一个二维数组: " << endl;

    // 定义一个二维数组的 3行4列
    int move_ratings[3][4]
    {
        {0, 4, 3, 5},
        {2, 3, 3, 5},
        {1, 4, 4, 5}
    };

    cout << "第1行第1列的元素是: " << move_ratings[0][0] << endl;

    cout << "第3行第2列的元素是: " << move_ratings[2][1] << endl;

    cout << endl;

    return 0;
}


















