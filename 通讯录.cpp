#include<iostream>
#include<string>
#include<cstring>
using namespace std;
#define MAX 1000
struct People
{
   string pname;
   char xb;
   int age;
   string address;
   string phoneNumber;
};
struct AddressBooks
{
    struct People peoples[MAX];
    int B_SIZE;
};

void showMessage(AddressBooks* );
void showMenu();
void addPerson(AddressBooks* );
void deletePerson(AddressBooks*);
int isExist(AddressBooks*,string);
void findPerson(AddressBooks*);
void changePersonMessage(AddressBooks*);
void showMessageOf(AddressBooks*,int);
void clearPerson(AddressBooks*);




void showMenu()
{
    cout<<"###### 1.添加联系人 ######"<<endl;
    cout<<"###### 2.显示联系人 ######"<<endl;
    cout<<"###### 3.删除联系人 ######"<<endl;
    cout<<"###### 4.查找联系人 ######"<<endl;
    cout<<"###### 5.修改联系人 ######"<<endl;
    cout<<"###### 6.请空联系人 ######"<<endl;
    cout<<"###### 0.退出 ######"<<endl;         
}
void addPerson(AddressBooks* abs){
    if (abs->B_SIZE<MAX)
    {
       
       string _name;
       cout<<"输入姓名！"<<endl;
       cin>>_name;
       abs->peoples[abs->B_SIZE].pname=_name;

       cout<<"输入性别"<<endl;
       s:
       char sex;
       cin>>sex; 
       if(sex=='M'||sex=='F'){
        abs->peoples[abs->B_SIZE].xb=sex;
       }else{
        cout<<"请输入M或者F！"<<endl;
        goto s;
       }

       cout<<"输入年龄！"<<endl;
       int _age;
       cin>>_age;
       abs->peoples[abs->B_SIZE].age=_age;

       cout<<"输入地址"<<endl;
       string nowAddress;
       cin>>nowAddress;
       abs->peoples[abs->B_SIZE].address=nowAddress;

       cout<<"输入电话"<<endl;
       string _phone;
       cin>>_phone;
       abs->peoples[abs->B_SIZE].phoneNumber=_phone;
       cout<<"爆金币了！";
       abs->B_SIZE++;
       system("pause");//按任意键继续
       system("cls");
       


    }else{
        cout<<"已满！";
    }
    
}
void showMessage(AddressBooks* abs){
    if(abs->B_SIZE>0){
        for (int i = 0; i < abs->B_SIZE; i++)
        {
           cout<<"第"<<i+1<<"个人："<<endl;
           cout<<"姓名为:"<<abs->peoples[i].pname
           <<"  年龄为"<<abs->peoples[i].age
           <<"  性别为"<<abs->peoples[i].xb
           <<"  地址为"<<abs->peoples[i].address
           <<"  电话为"<<abs->peoples[i].phoneNumber<<endl<<endl;
        }
        
        
    }else{
        cout<<"目前为空";
    }

    system("pause");
    system("cls");
}
void deletePerson(AddressBooks* abs){
    cout<<"你要跟谁断绝关系？"<<endl;
    string deName;
    cin>>deName;
    int ret = isExist(abs,deName);

    if(ret!=-1){
        for (int i = ret; i < abs->B_SIZE; i++)
        {
            //数据前移
            abs->peoples[i]=abs->peoples[i+1];
        }
        
        abs->B_SIZE--;
    }else{
        cout<<"查无此人"<<endl;
    }

}
int isExist(AddressBooks* abs,string checkName){
    for (int i = 0; i < abs->B_SIZE; i++)
    {
        if (abs->peoples[i].pname==checkName)
        {
            return i;
        }
            
        
    }
    return -1;
    
}
void findPerson(AddressBooks* abs){
    string findName;
    cout<<"who you wanna find?"<<endl;
    cin>>findName;
    int flog = isExist(abs,findName);
    showMessageOf(abs,flog);
    system("pause");
    system("cls");
    
}
void changePersonMessage(AddressBooks* abs){
    cout<<"改谁？"<<endl;
    string changeName;
    cin>>changeName;
    int flog = isExist(abs,changeName);
    if(isExist(abs,changeName)>=0){
        showMessageOf(abs,flog);

    }else{
    cout<<"查无此人"<<endl;
    system("pause");
    system("cls");
    goto x;
    }

    cout<<"你想要改变什么？"<<endl;
    cout<<"a-姓名  b-年龄  c-性别  d-地址  e-电话"<<endl;
    char number;
    cin>>number;
    switch (number)
    {
    case 'a':
        {cout<<"改成什么？"<<endl;
        string changingName;
        cin>>changingName;
        abs->peoples[flog].pname=changingName;
        break;}

    case 'b':
        {cout<<"改成什么？"<<endl;
        int changingAge;
        cin>>changingAge;
        abs->peoples[flog].age=changingAge;
        break;}

    case 'c':
        {cout<<"改成什么？"<<endl;
        char changingSex;
        cin>>changingSex;
        abs->peoples[flog].xb=changingSex;
        break;}

    case 'd':
        {cout<<"改成什么？"<<endl;
        string changingAddress;
        cin>>changingAddress;
        abs->peoples[flog].address=changingAddress;
        break;}

    case 'e':
        {cout<<"改成什么？"<<endl;
        string changingPhone;
        cin>>changingPhone;
        abs->peoples[flog].phoneNumber=changingPhone;
        break;}
    
    default:
    cout<<"你是希尔瑞斯吗？"<<endl;
        break;
    }
    x:
    system("pause");
    system("cls");
    



}

void showMessageOf(AddressBooks* abs,int flog){
    cout<<"姓名为:"<<abs->peoples[flog].pname
    <<"  年龄为"<<abs->peoples[flog].age
    <<"  性别为"<<abs->peoples[flog].xb
    <<"  地址为"<<abs->peoples[flog].address
    <<"  电话为"<<abs->peoples[flog].phoneNumber<<endl;
}
void clearPerson(AddressBooks* abs){
    abs->B_SIZE=0;
    system("pause");
    system("cls");
}

int main()
{
    AddressBooks abs;
    //初始化通讯录当前的人员个数
    abs.B_SIZE=0;

    int choice;
    while (1)
    {
        showMenu();
        cin>>choice;
        switch (choice)
       {
        case 1:
            addPerson(&abs);
        break;

        case 2:
            showMessage(&abs);
        break;

        case 3:
            // {
            //     cout<<"你想删除谁？"<<endl;
            //     string deleteName;
            //     cin>>deleteName;

            //     if(isExist(&abs,deleteName)>=0){
                    
            //     }else{
            //         cout<<"查无此人"<<endl;
            //         system("pause");
            //         system("cls");
            //     }
            // }
            deletePerson(&abs);
        break;

        case 4:
            findPerson(&abs);
        break;

        case 5:
            changePersonMessage(&abs);
        break;

        case 6:
        cout<<"清空！"<<endl;
        clearPerson(&abs);
        break;

        case 0:
        cout<<"阿里嘎多！";
        return 0;
        break;

        default:
        cout<<"差不多得了"<<endl;
        break;
       }
    }


}