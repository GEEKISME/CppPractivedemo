/*
 * @Author: your name
 * @Date: 2020-09-22 16:33:08
 * @LastEditTime: 2020-09-23 11:05:47
 * @LastEditors: your name
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_45_1.cpp
 */
#include "lab2_45_1.h"
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
