#include<vector>
#include<algorithm>
#include<iostream>
#include<ctime>
using namespace std;

//vector是一个容器，类似于数组，支持随机访问（即重载了[]）
//swap insert push_back pop_back at back erase [] assign
// for_each random_shuffle(itb , ite)--随机排列范围元素
// sort按照规则排序，默认是升序


//定义函数对象
    void MyPrint(int x)//for_each的函数对象
    {
        cout<<x<<" ";
    }

    bool MyCompare(int a , int b)//sort的函数对象
    {
        if (a < b)
        {
            return true;
        }else return false;
        
    }


//打印函数
    void PrintVector(vector<int>  &v)
    {
        //法1
        // auto it = v.begin();
        // while (it != v.end())
        // {
        //     cout<<*it<<" ";
        //     it++;
        // }

        //法2
        for_each(v.begin() , v.end() , MyPrint);
    }

//随机填充容器
    void FillVector(vector<int>  &v)
    {
        for (int i = 0; i < 10; i++)
        {
            int randomNum = rand()%(100) +1;
            v.push_back(randomNum);
        }
    }

//测试assign函数
    void test1(vector<int>  &v)
    {
        //assign函数
        vector<int> copy_v;
        FillVector(copy_v);

        cout<<"当前随机容器是: "<<endl;
        PrintVector(copy_v);

        //作用1：复制容器内容
        v.assign(copy_v.begin() , copy_v.end());

        cout<<""<<endl;
        cout<<"当前容器是: "<<endl;
        PrintVector(v);


        
    }

//删除功能
    void Delete_factor(vector<int>  &v , int position)
    {
        //1.使用erase删除指定范围u下标元素
        auto itB = v.begin();
        auto itE = v.end();
        v.erase(itB , itE-3);

        //2.使用erase删除指定下标
        v.erase(itB+position);

        //3.使用pop_back
        

    }

//插入功能
    void insert_Vector(vector<int>  &v , int position , int factor)
    {
        //1.按照下标插入（位置，元素）
        auto it = v.begin();
        v.insert(it+position , factor);
        


        //2.插入一段元素

        //创造一个随机容器
        // vector<int> random_v;
        // FillVector(random_v);
        // auto itB = random_v.begin();
        // auto itE = random_v.end();

        // v.insert(it+position , itB , itE);
    }


    void testOfSort(vector<int>  &v , string rule)
    {
        cout<<"排序之前的矢量:";
        PrintVector(v);

        if (rule == "升序")
        {
            sort(v.begin() , v.end());
        }else if (rule == "降序")
        {
            sort(v.begin() , v.end() , MyCompare);
        }
        
        cout<<"排序之后的矢量:";
        PrintVector(v);
        
    }



int main()
{
    srand((unsigned int)time(NULL));
    //构造大小为10的矢量
    vector<int> test_v(10);

    //测试assign
    //test1(test_v);

    //测试insert
    // insert_Vector(test_v , 2 , 10);
    // PrintVector(test_v);
    FillVector(test_v);
    testOfSort(test_v , "降序");
    

}