#pragma once
#include<iostream>

class speechManager
{
private:
    
public:











    void quitSystem()
    {
        std::cout<<"白白喵~白白喵";
        system("pause");
        exit(0);
    }

    void createMenu()
    {
        std::cout<<"**********************************"<<std::endl;
        std::cout<<"*****欢迎参加演讲比赛**************"<<std::endl;
        std::cout<<"*****1.开始演讲比赛***************"<<std::endl;
        std::cout<<"*****2.查看往届记录**************"<<std::endl;
        std::cout<<"*****3.清空比赛记录**************"<<std::endl;
        std::cout<<"*****0.退出系统**************"<<std::endl;
    }

    speechManager();
    ~speechManager();
};

speechManager::speechManager()
{
}

speechManager::~speechManager()
{
}

