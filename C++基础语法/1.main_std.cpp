#include<iostream>
#include<stdio.h>
#include<stdlib.h>


namespace  xnh
{
    int rand = 0;
}

int main()
{

    printf("%d\n", rand);               //访问的是<stdlib.h>中的rand函数，打印的是以十进制打印的该函数地址
	
	printf("%d\n", xnh::rand);          //访问的是xnh这个命名空间中的rand变量，打印显示为0




    return 0;
}


//  想访问命名空间中的变量, 则需要借助一个作用符 ::
//  xnh :: rand 的意思就是, 去左边这个叫xnh的域(命名空间)里面找rand这个变量

//  命名空间内的变量只能允许声明和初始化, 而不能在其中进行赋值
namespace xnh
{
	int a;              // ok
	int b=10;           // ok
	//b=20;             // no

}





