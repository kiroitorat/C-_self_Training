#pragma once
#include<iostream>
#include<string>
#include"WORKER.h"
using namespace std;

class Boss:public WORKER
{
public:
    Boss(int id,string name,int idSpace){
    this->w_ID=id;
    this->w_NAME=name;
    this->w_ID_SPACE=idSpace;
    }

    string getSpaceName(){
        return (string)"老板";
    }

    void showInfo(){
    cout<<"职工编号是"<<this->w_ID<<endl;
    cout<<"\t职工姓名是是"<<this->w_NAME<<endl;
    cout<<"\t职工岗位是"<<this->getSpaceName()<<endl;
    cout<<"\t职工职责是管理公司"<<endl;
    }

};

