/*
 * @Author: your name
 * @Date: 2020-09-22 13:49:02
 * @LastEditTime: 2020-09-22 14:33:09
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_40.cpp
 */
#include<iostream>
using namespace std;
#include<string>
//类模板的成员函数的类外实现。一下13-25行是正常实现
// template<class T1,class T2>
// class Person{
//     public:
//     T1 name;
//     T2 age;
//     Person(T1 name,T2 age){
//         this->name = name;
//         this->age = age;
//     }
//     void showPerson(){
//         cout<<"name:"<<this->name<<" age:"<<this->age<<endl;
//     }
// };

//类外实现
template<class T1,class T2>
class Person{
    public:
    Person(T1 name,T2 age);
    void showPerson();
    T1 name;
    T2 age;
};

//构造函数的类外实现
template<class T1,class T2>
Person<T1,T2>::Person(T1 name,T2 age){
    this->age = age;
    this->name = name;
}
//成员函数的类外实现
template<class T1,class T2>
void Person<T1,T2>::showPerson(){
    cout<<"name:"<<this->name<<" age:"<<this->age<<endl;
};
int main(){
   
    return 0;
}