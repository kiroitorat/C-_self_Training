#pragma once
#include<iostream>
#include<string>
using namespace std;

template<class T>
class MyArray
{
private:
    T* arrAddress;
    T my_Capacity = 0;
    T my_Size;
    
    
public:
    MyArray(int capacity){
        cout<<"耶唉~"<<endl;
        this->my_Capacity = capacity;
        this->my_Size=0;
        this->arrAddress = new T[this->my_Capacity];
    }

    MyArray(const MyArray &arr){
        cout<<"耶唉~~~~"<<endl;
        this->my_Capacity = arr.my_Capacity;
        this->my_Size=arr.my_Size;
        //this.arrAddress = new T();



        //进行深拷贝
        this->arrAddress = new T[arr.my_Capacity];
        for (int i = 0; i < this->my_Size; i++)
        {
            this->arrAddress[i] = arr.arrAddress[i];
        }
        
    }
    //重载=符号
    MyArray& operator=(const MyArray &arr){

        if (this->arrAddress!=NULL)
        {
            delete []this->arrAddress;
            this->arrAddress = NULL;
            this->my_Capacity = 0;
            this->my_Size = 0;
        }
        this->my_Capacity = arr.my_Capacity;
        this->my_Size = arr.my_Size;
        this->arrAddress = new T[arr.my_Capacity];
        for (int i = 0; i < this->my_Size; i++)
        {
            this->arrAddress[i] = arr.arrAddress[i];
            return *this;
        }
    }


    void inEOF(const T &value){
        if (this->my_Capacity == this->my_Size)
        {
            return;
        }
        this->arrAddress[this->my_Size] = value;
        this->my_Size++;
        

    }

    void deleteEOF(){
        if (this->Capacity == this->m_Size)
        {
            return;
        }
        this->m_Size--;
    }


    T& operator[](int index)
    {
        return this->arrAddress[index];
    }

    void print(MyArray <int>&arr1){
        for (int i = 0; i < arr1.my_Size; i++)
        {
            cout<<arr1[i]<<endl;
        }
        
    }

    void checkArray(){

    }



    ~MyArray(){
        if (this->arrAddress!=NULL)
        {
            delete []this->arrAddress;
            this->arrAddress = NULL;
        }
    }
};
