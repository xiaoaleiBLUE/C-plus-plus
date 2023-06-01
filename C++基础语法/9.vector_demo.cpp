# include<iostream>
#include<vector>

using namespace std;

int main()
{
    // 创建 char vector
    // vector <char> vowels;             未初始化, 空的
    vector <char> vowels(5);             // 初始化 5个元素, 每个元素都是 0, 字符型 0 --> 打印出来是 空的

    cout << "第一个元素是: " << vowels[0] << endl;

    vector <char> vowels_char {'a', 'e', 'i', 'o', 'u'};

    cout << "第1个元素是: " << vowels_char[0] << endl;

    cout << "第5个元素是: " << vowels_char[4] << endl;

    // 创建 int vector,, 第 1 种初始化方法
    vector <int> student_scores_1(3);                           // 3个元素, 每个元素都是 0

    cout << "第1个元素是: " << student_scores_1[0] << endl;

    // 创建 int vector,, 第 2 种初始化方法
    vector <int> student_scores_2(3, 100);                      // 3个元素, 每个元素都是 100

    cout << "第1个元素是: " << student_scores_2[0] << endl;   
  
    vector <int> student_scores_3 {100, 98, 65};                // 3 个元素都进行初始化, 分别是100, 98, 65
    
    cout << "第 1 个元素是: " << student_scores_3[0] << endl;

    // 函数的 vector 进行访问
    cout << "=================" << endl;

    cout << "vector 方式进行访问: " << endl;

    cout << "第 1 个元素是: " << student_scores_3.at(0) << endl;

    // 添加元素
    cout << "=================" << endl;

    int add_new_value {0};

    cout << "请输入一个新的成绩: ";

    cin  >> add_new_value;

    student_scores_3.push_back(add_new_value);                          // 添加到 vector 末尾

    // 添加元素
    cout << "在添加一个新的成绩: ";

    cin >> add_new_value;

    student_scores_3.push_back(add_new_value); 

    cout << "添加后一共有" << student_scores_3.size() << "个元素" << endl;

    cout << "第1个成绩" << student_scores_3.at(0) << " 第2个成绩" << student_scores_3.at(1) << " 第3个成绩" << student_scores_3.at(2) <<
    " 第4个成绩" << student_scores_3.at(3) << " 第5个成绩" << student_scores_3.at(4) << endl;
    

    cout << "获取不存在元素: " << endl;
    cout << "array 方式进行获取第 6 个元素: " << student_scores_3[5] << endl;         // 不存在, 输出结果为 0

    // cout << "vector 方式进行获取第 6 个元素: " << student_scores_3.at(5) << endl;         // 不存在, 产生报错

    cout << "===============" << endl;

    // 定义 1 个二维的 vector
    vector < vector <int> > movie_ratings
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // vector 风格进行获取元素
    cout << "vector 风格第 1 个电影的第 3 个评分是: " << movie_ratings.at(0).at(2) << endl;

    cout << "vector 风格第 3 个电影的第 2 个评分是: " << movie_ratings.at(2).at(1) << endl;

    // array 风格进行获取元素
    cout << "array 风格第 1 个电影的第 3 个评分是: " << movie_ratings[0][2] << endl;

    cout << "array 风格第 3 个电影的第 2 个评分是: " << movie_ratings[2][1] << endl;


    return 0;
}




 