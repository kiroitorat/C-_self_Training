#pragma once
#include<iostream>
#include<string>

class Employee
{
private:
    std::string e_name;
    int e_money;
    std::string  e_department;
public:
    Employee(std::string name , int money , int departmentNum)
    {
        this->e_department = setDepartment(departmentNum);
        this->e_name = name;
        this->e_money = money;
    }

    std::string getName()
    {
        return this->e_name;
    }

    std::string setDepartment(int num)
    {
        switch (num)
        {
        case 1:
            return "策划";
            break;
        case 2:
            return "美术";
            break;
        case 3:
            return "研发";
            break;
        }
    }

    int getDepartment()
    {
        if (this->e_department == "策划")
        {
            return 1;
        }else if (this->e_department == "美术")
        {
            return 2;
        }else if (this->e_department == "研发")
        {
            return 3;
        }else{
            return -1;
        }
    }

    int getMoney()
    {
        return this->e_money;
    }

};

