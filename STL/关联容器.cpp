#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<iostream>

//对于set来说，键就是值，并且键是唯一的，也就是集合的抽象
//对于map来说，键与值是分开的，键也是唯一的（multimap允许一个键对于多个值）

void Print(int val)
{
    std::cout<<val<<" ";
}

void test01()
{
    //如何创建set？
    using namespace std;

    //创建元素迭代器，使用构造方法创建set
    int N = 6;
    int i[N] = {1,2,3,4,5,6};

    set<int> s(i , i+N);

    // 如何对set进行操作？
    auto it = s.begin();

    //遍历
    for_each(s.begin() , s.end() , Print);
}

void test02()
{
    using namespace std;

    pair<int , string> p1 = {1,"kiroitorat"};

    map<int,string> m;
    m.insert(p1);
    
}

int main()
{
    test01();
}