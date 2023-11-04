#include<vector>
#include<iostream>
#include<algorithm>
#include<ctime>
#include<functional>

//盲猜要开辟空间
//copy指定范围拷贝
//replace替换范围内的特定元素
//replace_if按条件替换元素
//swap替换容器的元素

void myPrint(int val)
{
    std::cout<<val<<" ";
}

void Print(const std::vector<int> v)
{
    std::for_each(v.begin() , v.end() , myPrint);
}

void copy()
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(rand()%100);
    }

    std::vector<int> v_copy;
    v_copy.resize(v.size());
    std::copy(v.begin() , v.end() , v_copy.begin());

    Print(v_copy);

}

void replace()
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(rand()%100);
    }

    std::replace(v.begin() , v.end() , 80 , 1);
    Print(v);
}

class MyReplace
{
public:
    bool operator()(int val)
    {
        return (val == 6 || val == 66);
    }
};


void replace_if()
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(rand()%100);
    }

    std::replace_if(v.begin() , v.end() , MyReplace() , 666);
    Print(v);
}


//swap不想写了,要注意是同种类型的容器

int main()
{
    srand((unsigned int) time(NULL));
    //copy();
    //replace();
    replace_if();
}