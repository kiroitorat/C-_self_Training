//谓词：返回值为bool类型的仿函数
//仿函数：重载了（）运算符的函数，通常在一个类里面
#include<vector>
#include<iostream>
#include<algorithm>
#include<ctime>
#include<functional>
class MyClass
{
public:
    bool operator()(int val)//参数就是元数
    {
        return val>5;
    }
};


class MyCompare
{
public:
    bool operator()(int v1 , int v2)//二元谓词
    {
        return v1>v2;
    }
};

//这里的伪函数与类内函数是一致的 
bool mycompare(int v1 , int v2)
{
    return v1>v2;
}

void test1()
{

    std::vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        int randomNum = rand()%41 + 60;
        v.push_back(randomNum);
    }

    std::vector<int>::iterator it = std::find_if(v.begin(),v.end(),MyClass());//匿名对象，这个时候谓词就作为了find_if的判断条件，条件是一个值大于5返回真
    //返回一个迭代器，指向大于5的元素的第一个位置
    std::cout<<*it<<std::endl;
    
}   


void test2()
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        int randomNum = rand()%41 + 60;
        v.push_back(randomNum);
    }
    
    //std::sort(v.begin(),v.end());//默认的升序排列

    //改为降序排列
    std::sort(v.begin(),v.end(),MyCompare());
    //或者
    std::sort(v.begin(),v.end(),mycompare);
    //使用了谓词去改变排列的规则，是前者大于后者返回T,具体要看源代码，这里建议kr你理解怎么用就行

    for ( std::vector<int>::iterator it = v.begin(); it!=v.end(); it++)
    {
        std::cout<<*it<<" ";
    }
    
}




int main()
{
    srand((unsigned int) time(NULL));
    test2();

    
}
