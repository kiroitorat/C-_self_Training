#include<vector>
#include<iostream>
#include<algorithm>
#include<ctime>
#include<functional>

//find查找算法(内置的和自定义的)
class person
{

public:
    int age;
    person(int age);

    //重载==号，才能让vector的find知道怎么对比,以及count算法

    bool operator==(const person &p)
    {
        return this->age == p.age;
    }
    //重载find_if的==号
    // bool operator==(const person &p)
    // {
    //     if ()
    //     {
    //         /* code */
    //     }
        
    // }


};

person::person(int age)
{
    this->age = age;
}


void test1()//内置类型的find
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    std::vector<int>::iterator it = std::find(v.begin(),v.end(),9);

    if (it!=v.end())
    {  
        std::cout<<"找到了"<<*it<<std::endl;
    }
    
    
}


void test2()//自定义的数据类型需要重载==号
{
    person p1(19);
    person p2(20);
    person p3(22);
    person p4(23);

    std::vector<person> v_p;

    v_p.push_back(p1);
    v_p.push_back(p2);
    v_p.push_back(p3);
    v_p.push_back(p4);

    std::vector<person>::iterator it_p = std::find(v_p.begin() , v_p.end() , 21);

    if (it_p==v_p.end())
    {
        std::cout<<"没找到21";
    }
    


}


//find_if查找算法
//find_if(itbegin , itend , 谓词)

bool myFind(const int val)
{
    return val>5;
}


void find_if()
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    std::vector<int>::iterator it = std::find_if(v.begin() , v.end() , myFind);
    std::cout<<*it<<std::endl;
}


class myFindOFDiy
{
public:
    bool operator()(person &p)
    {
        return p.age > 20;
    }
};

void find_if_DIY()
{
    std::vector<person> v;
    person p1(19);
    person p2(20);
    person p3(22);
    person p4(23);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    

    std::vector<person>::iterator it = std::find_if(v.begin() , v.end() , myFindOFDiy());

    std::cout<<it->age;

}

//adjacent_find相邻重复查找，返回第一对相同元素的前一个的迭代器

void adjacent_find()
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(rand()%2+i);
    }

    std::vector<int>::iterator it = std::adjacent_find(v.begin() , v.end());

    if (it==v.end())
    {
        std::cout<<"未找到";
    }else
        std::cout<<*it;
    
    
}

//二分查找bool binary_search(begin , end , value),前提是有序,此算法效率很高

void binary_search()
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(rand()%41 + 60);
    }

    std::sort(v.begin() , v.end());
    if(std::binary_search(v.begin() , v.end() , 88))
    {
        std::cout<<"找到了88";
    }else
        std::cout<<"未找到88";

    

}


//count查找算法，用于统计元素个数，也是分为内置和自定义

void count()
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(rand()%41 + 60);
    }

    int num = std::count(v.begin() , v.end() , 55);
    std::cout<<"num="<<num;

}

void countOFDiy()
{
    std::vector<person> v;
    person p1(19);
    person p2(20);
    person p3(22);
    person p4(23);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    int num = std::count(v.begin() , v.end() , 20);
    std::cout<<"num="<<num;


}


class MyCount_IF
{
public:
    bool operator()(int val)
    {
        return val>50;
    }
};

void count_if()
{
    std::vector<int> v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(rand()%100);
    }

    int num = std::count_if(v.begin() , v.end() , MyCount_IF());
    std::cout<<"num="<<num;
    
}

class MyCount_IF_DIY
{
public:
    bool operator()(const person &p)
    {
        return p.age >20;
    }
};

void count_if_DIY()
{
    std::vector<person> v;
    person p1(19);
    person p2(20);
    person p3(22);
    person p4(23);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    int num = std::count_if(v.begin() , v.end() , MyCount_IF_DIY());
    std::cout<<"num="<<num;
}

int main()
{
    srand((unsigned int) time(NULL));
    //test1();
    //test2();
    //find_if();
    //find_if_DIY();
    //adjacent_find();
    //binary_search();
    //count();
    //countOFDiy();
    //count_if();
    count_if_DIY();
}