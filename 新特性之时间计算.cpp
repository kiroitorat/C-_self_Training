#include<chrono>
#include<iostream>
#include<vector>
#include<ctime>
#include<algorithm>

void myPrint(int val)
{
    std::cout<<val<<" ";
}

void Function(int val)
{
    std::vector<int> v;
    for (int i = 0; i < val ; i++)
    {
        int randNum = rand()%100 +1;
        v.push_back(randNum);
    }

    std::sort(v.begin() , v.end());

    std::for_each(v.begin() , v.end() , myPrint);
    

}


int main()
{
    
    srand((unsigned int) time(NULL));
    //读取现在的时间
    std::chrono::high_resolution_clock::time_point  start_time1 = std::chrono::high_resolution_clock::now();
    
    Function(10);

    //读取现在的时间
    std::chrono::high_resolution_clock::time_point  end_time1 = std::chrono::high_resolution_clock::now();

    //计算时间差
    std::chrono::duration<double> running_time1 = std::chrono::duration_cast<std::chrono::duration<double>>(end_time1 - start_time1);
    std::cout << "运行时间: " << running_time1.count() << " 秒"<<std::endl;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    std::chrono::high_resolution_clock::time_point  start_time2 = std::chrono::high_resolution_clock::now();
    
    Function(100);

    //读取现在的时间
    std::chrono::high_resolution_clock::time_point  end_time2 = std::chrono::high_resolution_clock::now();

    //计算时间差
    std::chrono::duration<double> running_time2 = std::chrono::duration_cast<std::chrono::duration<double>>(end_time2 - start_time2);
    std::cout << "运行时间: " << running_time2.count() << " 秒"<<std::endl ;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    std::chrono::high_resolution_clock::time_point  start_time3 = std::chrono::high_resolution_clock::now();
    
    Function(1000);

    //读取现在的时间
    std::chrono::high_resolution_clock::time_point  end_time3 = std::chrono::high_resolution_clock::now();

    //计算时间差
    std::chrono::duration<double> running_time3 = std::chrono::duration_cast<std::chrono::duration<double>>(end_time3 - start_time3);
    std::cout << "运行时间: " << running_time3.count() << " 秒"<<std::endl ;
}