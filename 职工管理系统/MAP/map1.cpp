#include<map>
#include<iostream>
#include<algorithm>

using namespace std;
class myCompare
{
public:
    bool operator()(const int &v1 ,const int &v2)
    {
        return v1 > v2;
    }
};

void PrintMap(std::map<int , int,myCompare> &mp)
{
    for (map<int , int>::iterator it = mp.begin(); it!=mp.end() ; it++)
    {
        std::cout<<it->second<<" ";
    }

    std::cout<<mp.size()<<std::endl;
    //std::cout<<mp.count(10)<<std::endl;
    
}





void test01()
{
    std::map<int , int, myCompare> mp;
     mp.insert(std::pair<int , int>(2,20));
      mp.insert(std::pair<int , int>(3,30));
       mp.insert(std::pair<int , int>(4,40));

    PrintMap(mp);
    
    
    
    std::map<int , int>::iterator  it = mp.find(3);
    std::cout<<it->second<<std::endl;
    mp.empty();

}


int main()
{
    test01();
}