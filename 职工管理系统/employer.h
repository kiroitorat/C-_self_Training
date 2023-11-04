#pragma once
#include<iostream>
#include<string>
#include"WORKER.h"
using namespace std;

class employer:public WORKER
{
private:
    /* data */
public:
    employer(int id,string name,int idSpace){
    this->w_ID=id;
    this->w_NAME=name;
    this->w_ID_SPACE=idSpace;
    }

    string getSpaceName(){
        return (string)"经理";
    }

    void showInfo(){
    cout<<"职工编号是"<<this->w_ID<<endl;
    cout<<"\t职工姓名是是"<<this->w_NAME<<endl;
    cout<<"\t职工岗位是"<<this->getSpaceName()<<endl;
    cout<<"\t职工职责是安排任务，听从老板安排"<<endl;
    }

};



