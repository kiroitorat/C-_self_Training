#include<vector>
#include<iostream>
#include<algorithm>
#include<ctime>
#include<functional>

//sort(begin , end , _pred)
//random_shuffle洗牌排序
//merge 容器合并排序,容器必须有序，注意一定要开辟空间！！
//reverse 反转排序


void myPrint(int val)
{
    std::cout<<val<<" ";
}

void Print(const std::vector<int> v)
{
    std::for_each(v.begin() , v.end() , myPrint);
}

void sort()
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(rand()%100);
    }

    //默认sort为升序排序
    // std::sort(v.begin() , v.end());
    // Print(v);

    //改为降序排序
    std::sort(v.begin() , v.end() , std::greater<int>());
    Print(v);
    
}

void random_shuffle()
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    std::random_shuffle(v.begin() , v.end());
    Print(v);
}

void merge()
{
    std::vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(rand()%100);
    }
    //v1升序
    std::sort(v1.begin() , v1.end());
    Print(v1);
    std::cout<<std::endl;

    std::vector<int> v2;
    for (int i = 0; i < 10; i++)
    {
        v2.push_back(rand()%100);
    }
    //v2降序
    std::sort(v2.begin() , v2.end() , std::greater<int>());
    Print(v2);
    std::cout<<std::endl;

    std::vector<int> v3;
    //开辟v3的空间！！！！！
    v3.resize(v1.size()+v2.size());
    std::merge(v1.begin() , v1.end() , v2.begin() , v2.end(),v3.begin());
    Print(v3);
}

void reverse()
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(rand()%100);
    }
    std::cout<<"反转前：";
    Print(v);

    std::reverse(v.begin() , v.end());

    std::cout<<"反转后：";
    Print(v);
}

int main()
{
    srand((unsigned int) time(NULL));
    //sort();
    random_shuffle();
    //merge();
    //reverse();
}