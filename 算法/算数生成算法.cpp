#include<numeric>//numeric小型算法库

#include<vector>
#include<iostream>
#include<ctime>
#include<functional>

//accumulate算法，累加
//fill算法，向容器中指定范围填充指定元素


void my_accumulate()
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(rand()%100);
    }

    int sum = std::accumulate(v.begin() , v.end() , 0);//第三个参数是基数
    std::cout<<"没有fill之前:"<<sum;

    std::fill(v.begin() , v.end() , 10);
    sum = std::accumulate(v.begin() , v.end() , 0);
    std::cout<<"fill之后:"<<sum;
}




int main()
{
    my_accumulate();
}