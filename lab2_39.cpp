/*
 * @Author: your name
 * @Date: 2020-09-21 10:23:15
 * @LastEditTime: 2020-09-22 14:31:26
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_30.cpp
 */
#include<iostream>
using namespace std;
#include<string>

class Person{
    public:
    string m_Nmae;
    int    m_Age;
    Person(string name,int age){
        this->m_Nmae = name;
        this->m_Age = age;
    }
};
//模板的局限性，因为有些特定的数据类型，需要用具体化方式做特殊实现
// 对比两个数据是否相等
template<class T>
bool myCompare(T &a,T &b){
    if (a == b)
    {
        return true;
    }else{
        return false;
    }
    
};
//利用具体化Person的版本实现代码，具体化优先调用
template<> bool myCompare(Person &p1,Person &p2){
    if (p1.m_Nmae == p2.m_Nmae && p1.m_Age == p2.m_Age)
    {
        return true;
    }else{
        return false;
    }
};

void test01(){
    int s = 10;
    int t = 10;
    bool ret = myCompare(s,t);
    if (ret)
    {
        cout<<"a==b"<<endl;
    }else{
        cout<<"a!=b"<<endl;
    }
}


void test02(){
    Person p1("Tom",10);
    Person p2("Tom",10);
    bool ret  = myCompare(p1,p2);
    if(ret){
        cout<<"p1==p2"<<endl;
    }else{
        cout<<"p1!=p2"<<endl;
    }
}



int main(){
    // test01();
    printf("++++++++++++++++++++++\n");
    test02();
    return 0;
}