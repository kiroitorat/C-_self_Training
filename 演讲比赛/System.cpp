#include"speechManager.h"

int main()
{
    speechManager m;
    
    while (1)
    {
        m.createMenu();

        int choice = 0;
        std::cin>>choice;
        switch (choice)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 0:
            m.quitSystem();
            break;
        
        default:
            {
                system("cls");
                std::cout<<"差不多得了喵~我们原神怎么你了喵？"<<std::endl;
                system("pause");
            }
            break;
        }
    }
    

    system("pause");
}