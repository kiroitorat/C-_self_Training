//栈区：由编译器管理，由编译器自动分配释放，存放函数的参数值和变量等
//不要返回局部变量的地址！！，栈区开辟的数据由编译器自动释放
#include<iostream>
using namespace std;
int * dontDoThis();
int* dontDoThis()//参数数据也会放在栈区
{
    int a = 10;//这个属于栈区的内存,在这个函数结束时会自动释放内存，a就没了
    return &a;   
}
int main()
{
    int* p = dontDoThis();
    cout<<*p;
    cout<<*p;
    return 0;
}