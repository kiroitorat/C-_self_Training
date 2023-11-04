#include"employee.cpp"
#include<map>
#include<ctime>
#include<vector>

std::vector<Employee> createEmployee(int &num)
{
    std::string  nameAdd = "A";
    std::vector<Employee> v;

    for (int i = 0; i < num; i++)
    {
        int randMoney = (rand()%8999) + 1000;
        int randomDepartment = (rand()%3) + 1;
        Employee e(nameAdd,randMoney,randomDepartment);
        v.push_back(e);
        nameAdd += std::to_string(i);
    }
    return v;
    
}

std::multimap<int , Employee> putEmployeeIntoMap(std::vector<Employee> &v_e)
{
    std::multimap<int , Employee> m;
    for (std::vector<Employee>::iterator it = v_e.begin(); it!=v_e.end(); it++)
    {
        std::pair<int , Employee> p(it->getDepartment(),*it);
        m.insert(p);
        
    }
    return m;
}

void showMessage(std::multimap<int , Employee> m)
{
    for (auto it = m.begin(); it != m.end(); ++it) {
        std::cout << "部门：" << it->second.setDepartment(it->first) << std::endl;
        std::cout << "员工姓名：" << it->second.getName() << std::endl;
        std::cout << "员工工资：" << it->second.getMoney() << std::endl;
        std::cout << std::endl;
    }
    
}

int main()
{
    srand((unsigned int)time(NULL));
    int num = 10;
    std::vector<Employee> v_e = createEmployee(num);
    std::multimap<int , Employee> m = putEmployeeIntoMap(v_e);
    showMessage(m);
    
}