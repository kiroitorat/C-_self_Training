#include<vector>
#include<iostream>
#include<algorithm>
#include<ctime>
#include<functional>

void printOF_back(int val)
{
    std::cout<<val<<" ";
}

int f(int val)
{
    int r = rand()%10 +1;
    return val+r;
}   


void printVector(const std::vector<int> &v)
{
    //第二种算法，for_each
    std::for_each(v.begin() , v.end() , printOF_back);

    // for (std::vector<int>::iterator it = v.begin(); it!=v.end(); it++)
    // {
    //     std::cout<<*it<<" ";
    // }
    
}

void test1()
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    std::vector<int> v_t;

    //目标容器一定要提前定义容器size
    v_t.resize(v.size());

    //第一张算法，transform算法
    std::transform(v.begin(),v.end(), v_t.begin() , f);//使用v容器去填充v_t容器，规则是f

    std::sort(v_t.begin() , v_t.end() , std::greater<int>());//排序v_t容器，规则是grater<>()

    printVector(v_t);
    
}



int main()
{
    srand((unsigned int) time(NULL));
    test1();
}