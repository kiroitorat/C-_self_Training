#pragma once
#include<iostream>
#include<string>

class speaker
{
public:
    std::string name;
    double score[2];
    std::string number;



    speaker(std::string name , std::string number);
    ~speaker();
};

speaker::speaker(std::string name , std::string number)
{
    this->name = name;
    this->number = number;
}

speaker::~speaker()
{
}
