#include<vector>
#include<iostream>
#include<algorithm>
#include<ctime>
#include<functional>

//set_intersection 求容器的交集，并把交集赋给另一个容器
//set_union 求容器的并集
//set_difference 求差集,也就是不一样的元素,但是v1差v2 和v2差v1不一样 ，前者以v1为最大容量 ， 后者以v2为最大容器
//什么意思呢？
/**
 * 假如v1存放了 1，2，3，4，5 ，10，11； v2存放了 5，6，7，8，9，11，13
 * 则v1差v2就是1，2，3，4，10
 * v2差v1就是6，7，8，9，13
*/

void MyPrint(int val)
{
    std::cout<<val<<" ";
}

void set_intersection()
{
    std::vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(rand()%100);
    }

    std::for_each(v1.begin() , v1.end() , MyPrint);

    std::vector<int> v2;
    for (int i = 0; i < 10; i++)
    {
        v2.push_back(rand()%100);
    }

    std::for_each(v2.begin() , v2.end() , MyPrint);

    std::vector<int> v3;

    //分配内存：容器大小的最小值
    v3.resize(std::min(v1.size() , v2.size()));

    std::vector<int>::iterator it = std::set_intersection(v1.begin() , v1.end() , v2.begin() , v2.end() , v3.begin());
    //这里用迭代器接受set_intersection结果是为了防止输出的时候把空的空间的0也输出

    std::for_each(v3.begin() , it , MyPrint);
}

void set_union()
{
    std::vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(rand()%100);
    }
    
    std::for_each(v1.begin() , v1.end() , MyPrint);
    std::cout<<std::endl;

    std::vector<int> v2;
    for (int i = 0; i < 10; i++)
    {
        v2.push_back(rand()%100);
    }

    std::for_each(v2.begin() , v2.end() , MyPrint);
    std::cout<<std::endl;

    std::vector<int> v3;
    v3.resize(v1.size() + v2.size());
    std::vector<int>::iterator it =  std::set_union(v1.begin() , v1.end() , v2.begin() , v2.end() , v3.begin());

    std::for_each(v3.begin() , it , MyPrint);

}

void set_difference()
{
    std::vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(rand()%100);
    }
    
    std::for_each(v1.begin() , v1.end() , MyPrint);
    std::cout<<std::endl;

    std::vector<int> v2;
    for (int i = 0; i < 10; i++)
    {
        v2.push_back(rand()%100);
    }

    std::for_each(v2.begin() , v2.end() , MyPrint);
    std::cout<<std::endl;

    std::vector<int> v3;
    v3.resize(std::max(v1.size() , v2.size()));
    std::vector<int>::iterator it =  std::set_difference(v1.begin() , v1.end() , v2.begin() , v2.end() , v3.begin());

    std::for_each(v3.begin() , it , MyPrint);
}

int main()
{
    srand((unsigned int) time(NULL));
    //set_intersection();
    //set_union();
    set_difference();
}