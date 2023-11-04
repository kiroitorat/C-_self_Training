#include<list>
#include<vector>
#include<iostream>
using namespace std;

template <typename T>
void eraseOF(T &l)
{
    auto itr = l.begin();
    while (itr !=l.end())
    {
        itr = l.erase(itr);
        if (itr != l.end())
        {
            ++itr;
        }
        
    }
    
}

int main()
{
    list<int> l1;
    for (int i = 0; i < 10; i++)
    {
        l1.push_front(i);
    }
    
    eraseOF(l1);
    pair<int , double> p = make_pair(1,2.1);//对组
    

    for (list<int>::iterator it = l1.begin(); it!=l1.end(); it++)
    {
        cout<<*it<<endl;
    }
    
    
}