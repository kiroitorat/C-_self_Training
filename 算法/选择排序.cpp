#include<iostream>


void chooseSort(int a[] , int size)
{
    for (int i = 0; i < size-1; i++)
    {
        int min = i;
        for (int j = i+1; j < size; j++)
        {
            if (a[j] < a[min]
            {
                min = j;
            }
            
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
        
    }
    
}


int main()
{
    int a[] = {88,78,12,65,411,3,45};
    int size = sizeof(a) / sizeof(a[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << a[i] << " ";
    }


    chooseSort(a , size);

    std::cout << "\nSorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << a[i] << " ";
    }

}