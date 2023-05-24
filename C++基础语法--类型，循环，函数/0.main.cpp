/*********************
 *  作者: 小啊磊
 *  日期: 2023-5-11 
 *  运行 C++ 第一个程序
 *  运行环境: 英伟达 GPU + Ubuntu 操作系统
 *  开发工具: Visual Studio Code 
**********************/
#include <iostream>

int main()
{
    int favorites_num;


    std::cout << "请输入0~10中你最喜欢的数字: ";


    std::cin >> favorites_num;


    std::cout << favorites_num << "也是我喜欢的数字！" << std::endl;


    return 0;
}


//  C++ 输入与输出
//  cout: 输出, 可以自动识别变量的类型
//  cin: 输入
//  iostream头文件, 是标准输入/输出文件, 可以支持使用 cout 和 cin 等函数, 分别代替 printf 和 scanf
//  using namespace std; 命名空间
//  std是 C++ 标准库的命名空间名, C++ 将标准库的定义实现都放到这个命名空间中
//  << ：流插入操作符, 与cout配合使用, 可以将所有你需要输出的变量或者字符串流入到cout中, 让cout负责输出
//  >> ：流提取操作符, 与cin配合使用, 可以将你输入的值流入到某变量中
//  endl: 与 \n (换行符) 等价, 都是进行换行的意思
//  使用 cout标准输出(控制台) 和 cin标准输入(键盘) 时, 必须包含< iostream >头文件以及std标准命名空间。


//  标识符    操作符    标点
//  操作符:  <<   >> 
//  << :  将右侧的文本传给前面, 在命令行打印显示出来
//  >> :  提取操作, 将用户在命令行输入的内容提取到 后面的变量中去, 将 命令行输出的内容 赋值到 favorites_num 中去
//  :: :  作用域运算符, 表示从属关系
//  预处理命令: 将头文件包含到源代码中去, 指示编译器在实际编译开始之前预处理信息, 以 # 开头, 不以分号结尾
//  /*   */ 多行注释
//  单行注释


//  main() 函数:  不带参数,  带参数
//  主要两种 main() 函数, 一种 int main()   一种 int main(int argc, char** argv) argc: 参数数量   argv: 参数列表


//  第一个参数是命令本身
//  参数数量: 1
//  ============参数列表============
//  参数: ./release/2.main_type


//  对上述命令进行添加参数:  终端输入: ./release/2.main_type argc1 argc2 argc3
//  参数数量: 4
//  ============参数列表============
//  参数: ./release/2.main_type
//  参数: argc1
//  参数: argc2
//  参数: argc3


//  命名空间: namespace,   using namespace std; 命名空间 namespace, 解决命名冲突, 使用 std 的 namespace
//  解决命名冲突, 可以定义为 xiao::cout
//  在这前写的程序中,  using namespace std; 在main()中,  std::cout << " 请输入你喜欢的数字:";  等


//  变量(variable) ---- 值是可以改变的
//  变量是内存地址的抽象
//  变量有两个重要的属性:
//  Type: 变量类型(integer, real number, string, Person, Student)
//  Value: 变量值(1, 3, 14, "computer")
//  使用前, 需要声明变量
//  int score;         整型 分数
//  double height;     浮点型 身高
//  string name;       字符型 姓名
//  Account studet_account;        自定义类的类型
//  Person student_a;              自定义类的类型

//  变量的初始化 ---- 3种不同的初始化
//  int age;          未初始化
//  int age = 18;     c 风格初始化
//  int age(18);      构造函数用法
//  int age {18};     c++标准, 列表初始化语法


//  基本的数据类型 ---- type
//  不同类型分配内存大小和取值范围和 os 平台 和 编译器 版本有关
//  字符型: char
//  整型: short, int, long, long long
//  浮点型: float, double
//  布尔型: bool

//  Bits(比特)   bytes(字节)
//  1比特是存储的最小的单位
//  1比特只能存储 0 或 1
//  比特数量: 1    0, 1                模式数量: 2
//  比特数量: 2    00, 01, 10, 11      模式数量: 4
//  1 字节 = 8 比特
//  1 字节能表达的模式数量 = 2^8 = 256, 可以用来存储 0-255 数字
//  适合存储 字符, 字母

//  字符型(注意: 需要和字符串区分开, 用单引号不是双引号, 存储是字符 ASCII 编码, 而不是字符本身)
//  作用: 用于表示单个字符, '@', 'a', 'X'
//  只占用一个字节
//  语法: char c = 'a'

//  整型: 表示整数类型的数据
//  short(短整型): 2字节
//  int(整型):     4字节
//  long(长整型):  win 4字节,  32位linux 4字节,  64位linux 8字节
//  long long(长长整型): 8字节

//  浮点型: 表示小数, 有效数字包含整数部分, 3.14159(6个有效数字)
//  主要有2种: float(单精度 -> 4字节), double(双精度 -> 8字节)

//  布尔值: 真(非0值), 假(0),  占用一个字节
//  语法: bool  add_to_cart  {false}

//  sizeof 和 climits
//  sizeof(int): 确定 int 占用的空间
//  sizeof(变量名): 确定具体某个变量占用的空间
//  sizeof 变量名: 不用括号

//  cout << "short min:"<< SHRT_MIN << endl;  确定 short 的数字的最小值
//  cout << "short max:"<< SHRT_MAX << endl;  确定 short 的数字的最大值

//  常量: constant, 记录不可更改的数据, 防止变量误修改
//  预处理定义
//  const double pi {3.1415926}
//  const months {12}
//  pi = 3.5;   常量不可以再变更值, 否则编译器会报错

//  数组: 数组所有元素都是同一个数据类型, 每个元素可以单独读取
//  数组性质: 长度大小固定, 且不可再修改, 所有元素同一类型, 在内存中连续存储的, 
//  索引位置获取元素(0,size-1), 不检查是否超出区域
//  声明好以后 array， 长度不可修改
//  格式: elementType array_name [size];
//  int student_scores [100];
//  int ages [10];

//  const int days_in_year {365};               定义整型的常量
//  double hi_temperatures [days_in_year];      定义数组

//  数组 ---- 数组元素的获取及更新
//  array_name [element_index];                 数组名称[下标索引]
//  array_name [element_index] = 27;            对元素进行重新赋值

//  数组的初始化
//  格式: elementType array_name [size]{初始化列表};
//  int student_scores [5]{92, 78, 100, 86, 83};          所有元素初始化
//  int ages [10]{19, 23};                                前两个元素初始化, 其他元素均为0

//  const int days_in_year {365};              
//  double hi_temperatures [days_in_year]{0};             所有元素初始化为 0
//  int another_array []{1, 2, 3, 4, 5, 6}                所有元素初始, 数组大小自动计算


//  容器 ---- vector
//  假设需要存储整个学校所有学生的考试成绩
//  无法知道具体的学生数量
//  解决办法: 使用数组, 数组大小设置的足够大, 使用 vector 动态数组

//  容器 vector
//  c++ 标椎模板库STL中的容器(container)
//  长度大小可以随时缩放
//  和数组类似的语法用法
//  高性能
//  越界检查
//  很多有用的函数: sort, reverse, find 等

//  容器 vector(性质)
//  动态调整大小
//  所有元素是同一类型
//  元素在内存中是连续存储的, 0 -- size-1
//  []方式获取元素, 提供了函数越界检查
//  性能非常高
//  所有元素会初始化到 0

//  vector -- 声明
//  #include<vector>
//  using namespace std;                           限定作用域
//  vector <char> vowels;                          声明 vector
//  vector <int> student_scores;

//  声明方法, 自动初始化为 0
//  vector <char> vowels (5);                      构造函数初始化方法, 需要5个位置
//  vector <int> student_scores (10);              大小为10, 与 array 不同, 这10个数字会自动初始化为0

//  vector <char> vowels {'a','b','c','d','e'};
//  vector <int> student_scores {100, 99, 98, 97, 96};    // 5个元素
//  vector <int> hi_temperatures (365, 37.0);             // 长度为 365, 365个数的所有初始值 37.0

//  vector -- 获取m,元素
//  类似于数组的方法与形式
//  vector <int> student_scores {100, 98, 97, 96, 95};
//  cout << "第1个分数: " << student_scores[0] << endl;

//  获取vector元素 ---- vector_name[element_index],  vector_name.at(element_index)
//  vector -- 函数语法
//  语法格式: vector_name.at(element_index)
//  student_scores.at(1);                                     获取元素
//  vector <int> student_scores {100, 98, 97, 96, 95};
//  cout << "第1个分数: " << student_scores.at(0) << endl;
//  重新赋值
//  student_scores.at(0) = 90;          进行重新赋值

//  vector -- 追加元素
//  vector -- 函数语法
//  语法格式: vector_name.push_back(new_element);
//  vector <int> student_scores {100, 98, 97};                大小为3
//  student_scores.push_back(80);                             100, 98, 97, 80
//  student_scores.push_back(79);                             100, 98, 97, 80, 79

//  vector 初始化方法
//  vector <int> student_scores_1(3);                           // 3个元素, 每个元素都是 0
//  vector <int> student_scores_2(3, 100);                      // 3个元素, 每个元素都是 100
//  vector <int> student_scores_3 {100, 98, 65};                // 3 个元素都进行初始化, 分别是100, 98, 65

//  获取 vector 方法
//  cout << "第 1 个元素是: " << student_scores_3[0] << endl;
//  cout << "第 1 个元素是: " << student_scores_3.at(0) << endl;

//  vector -- 越界检查
//  vector <int> student_scores {100, 98, 97};
//  cin >>  student_scores.at(5);                              编译器会报错

//  C++ 程序流程
//  顺序执行, 指令按先后顺序执行
//  条件分支, 做决定
//  循环, 重复执行某任务

//  if, switch, 循环:for, while, do-while

//  for 循环
//  int i {0};                              初始化
//  for(i=1; i<=5; i++)                     i++, ++i 效果一样的
//      cout << i << endl;

//  遍历数组
//  int scores [] {100, 99, 96}
//  for(int i {0}; i<3; ++i)
//  cout << scores[i] << endl;

//  初始化两个条件, 用逗号分隔两个参数
//  for(int i {1}, j{5}; i <= 5; ++i, ++j)
//  cout << i "*" << j << "=" << (i*j) << endl;

//  for 基于范围的循环
//  int scores [] {100, 99, 66}
//  for (int score : scores)
//      cout << score << endl;

//  for 遍历 vector 容器, 这里使用 size_t 或 unsigned  
//  vector <int> nums {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};             // 初始化
//  for(size_t i {0}; i < nums.size(); i++)
//   {
//       cout << nums[i] << endl;
//   }

//  遍历整型数组, auto 方式
//    int student_scores [] {100, 65, 45, 32, 99, 98};
//   for(auto score : student_scores)
//   {
//       cout << score << " " << endl;
//    }   


//  while 循环
//  while (expression)
//  {
//     statements;
//  }  

//  do - while 循环(先执行一次循环体, 在判断循环条件 )
//  do
//    {
//       statements;
//    } while (expression);


//  C++ 字符 和 字符串
//  C 风格字符串
//  C++ 风格字符串 

//  C 风格字符串
//  char my_name [] {"world"};                    // 数组方式, 会分配 6 个字符的大小, 最后一个存放 \0
//  char your_name [5] {"world"};                 // 数组方式, 会报错, 位置不够存放 \0
//  char your_name [8] {"world"};                 // 数组方式, 会分配 8 个字符的大小, 后 3 个位置存放 \0

//  char my_name [8];                             // 数组方式, 未初始化
//  #include <cstring>
//  strcpy(my_name, "Hello")                      // 将 "Hello" 字符串 copy 至 my_name 中
//  char str [80];
//  strcpy(str, "hello");                         // 拷贝
//  strcat(str, "there ");                        // 拼接
//  cout << strlen(str);                          // 长度
//  strcmp(str, "another");                       // 

//  C++ 风格字符串 
//  std::string 是 STL 中的一个类
//  使用前必须导入 #include<string>
//  std nameespace
//  内存中连续, 动态大小
//  可转 c-style 字符串相互转化
//  更安全

//  std::string

//  std::string s0 ("Initial string");    // 根据已有字符串构造新的string实例
//  std::string s1;                       // 构造一个默认为空的string
//  std::string s2 (s0);                  // 通过复制一个string构造一个新的string
//  std::string s3 (s0, 8, 3);            // 通过复制一个string的一部分来构造一个新的string, 8为起始位置, 3为偏移量。
//  std::string s4 ("A character sequence");  //与s0构造方式相同。
//  std::string s5 ("Another character sequence", 12);    //已知字符串，通过截取指定长度来创建一个string
//  std::string s6a (10, 'x');  //指定string长度，与一个元素，则默认重复该元素创建string
//  std::string s6b (10, 42);      // 42 is the ASCII code for '*'  //通过ASCII码来代替s6a中的指定元素
//  std::string s7 (s0.begin(), s0.begin()+7);  //通过迭代器来指定复制s0的一部分，来创建s7

// 输出
// s0:  Initial string
// s1:  
// s2:  Initial string
// s3:  str 
// s4:  A character sequence
// s5:  Another char
// s6a: xxxxxxxxxx
// s6b: **********
// s7:  Initial


//  string s1;                                       // 全部初始化为空
//  string s2 {"hello"};                             // 初始化 hello
//  string s3 {s2};                                  // 拷贝 s2
//  string s4 {s3, 0, 4};                            // 拷贝 s3 的前 4 个字符: hell
//  string s5 {"hello", 3};                          // 拷贝 hello 的前 3 个字符: hel
//  string s6 {5, 'x'};                              // 5个x: xxxxx

//  C++ 风格字符串 --- 字符串拼接
//  string part1 {"C++"};
//  string part2 {"是一门强大的"};
//  string sentence;
//  sentence = part1 + " " + part2 + "语言";


//  C++ 风格字符串 --- 获取字符, 更新
//  获取字符, 更新值
//  string c1 {"hello"};

//    // 获取元素
//    cout << "c1[0]: " << c1[0] << endl;
//    cout << "c1[1]: " << c1.at(1) << endl;

//    // 重新赋值
//    c1[0] = 'H';
//    c1[4] = 'X';
//    cout << "c1: " << c1 << endl;

//    // 遍历输出字符
//    string t1 {"hello"};

//    for (auto c : t1)
//    {
//        cout << c << endl;
//    }

//    //  int, 遍历输出 ASCII
//    for (int c : t1)
//    {
//        cout << c << endl;
//    }


//  函数
//  C++ 程序
//      C++标准库(functions, classes)
//      第三方库(functions, classes)  
//      自定义(functions, classes)  

//  函数让我们的程序更加模块化
//      让代码解耦, 分成按业务, 按逻辑的单元
//      提高代码的复用性

//  函数的定义
//  参数列表(传给函数的变量, 变量类型需要声明)
//  返回值类型
//  函数体(函数被调用执行的部分, 花括号{} 内部)

//  function

//  int function_name(int a)
//  {

//     statments(s);
//     return 0;
//   }

//  int: 返回类型        function_name: 函数名称
//  int function_name(int a, std::string b)

//  函数原型
//  编译器要求: 使用函数前必须 见过 这个函数
//  先定义函数在调用: 使用小程序, 不适用大型项目

//  使用函数原型
//  告诉编译器函数定义必要的信息(也称为前向声明 forward declaration)
//  放在程序开始的部分, 或者放在头文件( header files)(.h) 中

//  int functions_name();                 // 函数原型
//  int functions_name()
//  {
//      函数体
//      return 0;
//  }

//  int functions_name(int);                 // 函数原型, 函数需要一个 int 类型
//  int functions_name(int a);               // 函数原型

//  参数 ---- 值传递
//  当我们传递数据给函数时, 其实用的是值传递
//  数据的拷贝会传给函数
//  函数内部的代码不会改变我们传给它的变量

//  形参 ---- 实参
//  形参: 函数定义语句中的参数
//  实参: 调用函数时传递的参数

//  函数调用结束后, 整个栈会全部销毁掉

//  函数重载: 一组函数具有相同的函数名, 不同的参数列表
//  这些同名函数的形参列表(参数个数 或 类型 或 顺序)必须不同, 即参数个数, 参数顺序, 参数类型三者有一个不同即可
//  函数原型, 函数重载
//  int  add_numbers(int, int);                // 两个 int 类型
//  double  add_numbers(double, double);       // 两个 double 类型

//  函数的重载
//  void  display(int n);                            显示整数
//  void  display(double d);                         显示浮点数
//  void  display(std::string s);                    显示字符串
//  void  display(std::vector<std::string> v);       显示字符串 vector

//  函数传参 ---- 传递数组
//  void print_array(int my_numbers []);             传递数组给函数
//  数组元素并没有复制
//  数组变量名称表示: 第一个元素在内存中的地址 -- 这个地址才被复制
//  函数内部无法知道数组的大小(数组大小需要额外传参), 数组长度是未知的, 无法遍历, 需要增加 size 函数

//  void print_array(int my_numbers [], size); 
//  这样就可以使用 for 循环

//  声明参数 numbers 是常量(只读 read-only)
//  void print_array(const int my_numbers [], size_t size);


//  函数的传参 ---- 引用传递(pass by reference),  传递参数前面需要加 &
//  有时希望在函数体内部改变实参的值
//  需要实参的地址
//  类似数组方式改变原始参数, 别的类型能否支持？
//  可以使用 引用 传参给函数, 形参会变成实参的一个 别名(alias), 一个变化另一个也会变化

//  函数的调用机制
//  1. 使用函数调用栈
//     类别一摞书, LIFO(后入先出),  入栈: 在栈顶添加记录   出栈: 从栈顶移除记录
//  2. 栈帧 或 活动记录
//     每次函数被调用, 入栈一条新的活动记录
//     函数结束时, 活动记录出栈移除, 返回至调用函数的位置
//     局部变量和函数会在栈上分配空间
//  3. 栈的大小有限, 超出会栈溢出

//  函数调用机制 ---- 内存模型
//  堆 heap         Dynamic
//  栈 stack        Local variables 
//                  Function
//  全局区           Global Variable, static variables
//  代码区           二进制代码区     
//  memory


//  指针 pointer 介绍
//  指针是变量
//      变量的值是一个地址
//  指针的值可以存储哪些地址
//      另一个变量
//      函数
//  比如: int a = 20, 可以声明一个指针指向它

//  如果指针指向变量或者函数, 那么为什么不直接用他们
//  可以但不常用
//      函数内部, 指针可以访问函数作用域外的数据
//      高效操作数组
//      在 堆(heap) 上动态分配内存空间
//          这些空间没有变量名称, 只能通过指针访问
//  可以获取内存中的特殊地址
//      如嵌入式系统, 设备驱动

//  指针 ---- 声明指针
//  变量类型  *指针名称
//  variable_type  *pointer_name;

//  int  *int_ptr;             // * 靠右
//  double*  double_ptr;       // * 靠左, 编译器都支持
//  char  *char_ptr;
//  string  *string_str;

//  指针 ---- 初始化指针
//  variable_type  *pointer_name {nullptr};    初始化空指针

//  int *int_ptr{};
//  double  *double_ptr{nullptr};
//  char  *char_ptr {nullptr};
//  string  *string {nullptr};

//  指针 ---- 地址操作符 &
//  编译器需要检查指针变量存储地址的类型
//  int *ptr;
//  &ptr                                  // 指针 ptr 的地址
//  &num                                  // 获取 num 的地址
//  int student_score {100};
//  int *score_ptr {nullptr};             // 初始化为空指针
//  score_ptr = &student_score;           // 允许

//  指针 ----  重要概念
//  & 地址操作符
//  指针也是一个变量, 所以它的值是可以改变的
//  指针可以为 null
//  指针可以不初始化

//  指针初始化
//  double  high_temp {41.2};
//  double  low_temp {31.2};
//  double *temp_ptr;                      // 未初始化, 指向 double 类型的指针 temp_ptr
//  temp_ptr = &high_temp;                 // 指向high_temp
//  temp_ptr = &low_temp;                  // 指向low_temp
//  temp_ptr = nullptr;                    // 空指针


//  指针的解引用
//  获取指针指向的数据 -- 解引用 *temp_ptr


//  动态内存分配
//  在堆 heap 上程序员自己分配内存空间
//  回忆一下 C++ 数组(array)
//      使用数组需要知道数组大小, 并且数组大小是固定的
//      vector 容器大小可以动态去调整
//  使用指针获取堆上刚分配的内存空间

//  动态内存分配 ---- new
//  使用 new 关键字, 分配内存空间

//  int *int_ptr {nullptr};
//  int_ptr = new int {10};                     // 在堆上分配内存, 并初始化 10

//  使用 delete 关键字, 释放内存空间
//  int *int_ptr {nullptr};
//  int_ptr = new int;                          // 在 堆 上分配内存
//  delete int_ptr;                             // 释放内存

//  使用 new[] 为数组分配内存空间
//  使用 delete[] 释放内存
//  array_ptr = new int[arr_size]               // 在 堆 上分配内存, arr_size: 代表数组的大小
//  ....(数组的使用)
//  delete [] array_ptr                         // 释放内存

//  int, double  ----> heap 堆
//  *int_ptr, *double_ptr  ----> stack 栈

//  指针和数组的关系
//  数组变量名称的值是数组第一个元素的地址
//  指针变量的值是一个地址
//  如果指针指向的类型和数组元素的类型一致, 那么指针和数组名称几乎是等价的

//  int student_scores [] {100, 97, 45, 67, 87};
//  int *score_ptr {student_scores};                               // 数组名 等价于 数组的首地址
//  cout << *score_ptr << endl;                                    // 100
//  cout << *(score_ptr + 1) << endl;                              // 97
//  cout << *(score_ptr + 2) << endl;                              // 45

//  指针和数组的关系     
//  int student_scores [] {100, 98, 99};
//  int *score_ptr {student_scores}; 
//  1. 数组名称, 下表访问元素 
//  student_scores[index]
//  2. 指针名称, 下表访问元素
//  score_ptr[index]
//  3. 指针名称, 指针运算符方式访问元素
//  *(score_ptr + index)
//  4. 数组名称, 指针运算符方式访问元素
//  *(student_scores + index)


//  const 和 指针 ---- 被指向的对象是常量(被指向的对象可以通过指针改动)
//  指针可以操作: 地址及被指向的对象
//      被指向的对象是常量
//      指针本身就是 const
//      指针本身和被指向的对象都是常量


// 被指向的数据是常量 ==============
//  int main()
//  {
//      int high_temp {40};
//      int low_temp  {20};
//      const int *temp_ptr {&high_temp};       // 被指向的数据是常量
//      *temp_ptr = 100;                        // 错误, 不能通过解引用修改常量的值
//      temp_ptr = &low_temp;                   // 正确, 可以通过指针修改指向的地址
//  }

//  指针本身为常量, 指向 high_temp ============
//  int main()
//  {
//      int high_temp {40};
//      int low_temp  {20};
//      int *const temp_ptr {&high_temp};       // 指针本身为常量, 指向 high_temp
//      *temp_ptr = 100;                        // 正确, 通过指针解引用修改值
// 
//  }

//  指针和被指向对象都是常量
//  const int *const temp_ptr {&high_temp};
//  上述两种语句, 都会有语法错误

//  (实参可以是 指针 或 一个变量的地址)   -----   (函数的形参是指针)
//  函数指针传参
//  使用指针, 解引用实现函数引用传参
//  函数的形参是指针
//  实参可以是 指针 或 一个变量的地址
//  void double_data(int *int_ptr);             // 函数原型
//  完成指针指向的值扩大 2 倍
//  void double_data(int *int_ptr)
//  {
//      *int_ptr *= 2;        // 通过指针修改内存空间的值
//      // 和下面等价的写法
//      // *int_ptr =*int_ptr * 2;

  


































































































