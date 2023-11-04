#include<iostream>
using namespace std;

//全局变量
int q_a=1;

//const修饰的全局常量
const q_b = 3;

int main()
{

    //局部变量
    int a =1;
    //局部常量
    const int c =4;
    
    //字符串常量
    cout<<"这是一个字符串常量"<<"地址是"<<(int)&"这是一个字符串常量"<<endl;


    //静态变量，存在于全局区中，可以全局访问
    static int b = 2;
}