/*
 * @Author: your name
 * @Date: 2020-09-22 13:49:02
 * @LastEditTime: 2020-09-22 14:50:29
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_40.cpp
 */
#include<iostream>
using namespace std;
#include<string>

//类模板   ；类模板在模板参数列表中可以有默认参数，如下，AgeType默认为int
template<class NameType,class Agetype = int>
class Person{
    public:
    NameType name;
    Agetype age;
    Person(NameType name,Agetype age){
        this->age = age;
        this->name = name;
    }
    void showPerson(){
        cout<<this->name<<" "<<this->age<<endl;
    }
};
void test01(){
    Person<string,int> p1("tom",18);
   p1.showPerson();
}
int main(){
   test01();
    return 0;
}