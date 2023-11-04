#pragma once
#include<iostream>
//动态增长的规则：初始时容量固定一个值，当加入新的元素的时候
//如果空间不够，则申请新的大空间，将原来的数据拷贝进来
//size概率和capacity概念

//定义动态数组
class myArr
{
private:
    typedef struct dynamicArr
    {;
        int size;
        int capacity;
        int* address;
    }ARR;

public:    
    //定义对结构体操作的函数

    //初始化
    ARR* a Init_Arr(ARR &arr)//类该怎么操作？？？？？？
    {
        //申请堆区内存
        ARR* dy_arr = new ARR();
        arr->size = 0;
        arr->capacity = 20;
        return dy_arr;
    }

    //插入数据
    void push_Arr(ARR &a , int val)
    {}

    //删除位置
    void pop_Arr_Pos(ARR &a  , int pos)
    {}

    //删除值
    void pop_Arr_Val(ARR &a  , int val)
    {}

    //清空
    void clear_Array(ARR &a)
    {}

    //查找
    int find_Arr_val(ARR &a , int val)
    {}

    //打印数组
    void print_Arr(ARR &a)
    {
        for (int i = 0; i < a.size; i++)
        {
            std::cout<<a.address[i]<<" ";
        }
        std::printf("\n");
        
    }

    //释放内存
    void free_Arr(ARR &a)
    {}

    //返回大小
    int Sizeof_Arr(ARR &a)
    {}

    //获取位置元素
    int getIndex_Pos(ARR &a , int pos)
    {}
 
};


int main()
{
    myArr* dyArr = arr->Init_Arr() 
    system("pause");
}