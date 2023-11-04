#include<iostream>
//引用&代表别名
//1.不要返回引用！
//2.若函数返回一个引用，则该函数可以作为左值
//3.引用其实是一个指针常量，type* const 名，意思是const的是地址，因此引用只能指向规定的地址，但是可以改值
void mySwapByValue(int a , int b ){
    int temp = a;
    a = b;
    b = temp;
}

void mySwapByAddress(int* a , int* b ){
    int temp = *a;
    *a = *b;
    *b = temp;
}


void mySwapByYY(int &a , int &b){//这里的a是参数1的别名，b是参数2的别名||相当于int* const a,int* const b
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 10;
    int b = 20;
    int c = 30;
    mySwapByValue(a,b);
    std::cout<<"1.值传递无法改变实参数，所以a依旧为"<<a<<std::endl;

    mySwapByAddress(&a,&b);
    std::cout<<"2.地址传递可以改变实参，所以a为"<<a<<std::endl;

    mySwapByYY(a,c);
    std::cout<<"3.引用传递可以改变实参，所以a为"<<a;
}