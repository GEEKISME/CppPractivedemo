/*
 * @Author: your name
 * @Date: 2020-09-22 14:56:49
 * @LastEditTime: 2020-09-23 08:58:21
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_45.cpp
 */
#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>//标准算法头文件

class Person{
    public:
    string name;
    int age;
    Person(string name,int age){
        this->name = name;
        this->age = age;

    }
};

void test01(){
    vector<Person> vperson;
    Person p1("aaa",10);
    Person p2("bbb",20);
    Person p3("ccc",30);
    Person p4("ddd",40);
    Person p5("eee",50);
    vperson.push_back(p1);
    vperson.push_back(p2);
    vperson.push_back(p3);
    vperson.push_back(p4);
    vperson.push_back(p5);
    //遍历
    for ( vector<Person>:: iterator  itperson = vperson.begin(); itperson!=vperson.end(); itperson++)
    {
        cout<<"name:"<<itperson->name<<" age:"<<itperson->age<<endl;
        printf("==============================================\n");
        cout<<"name:"<<(*itperson).name<<" age:"<<(*itperson).age<<endl;
    }
    
};

//存放自定义数据类型 指针
void test02(){
    //存储指针
    vector<Person*> vperson;
    Person p1("aaa",10);
    Person p2("bbb",20);
    Person p3("ccc",30);
    Person p4("ddd",40);
    Person p5("eee",50);
    vperson.push_back(&p1);
    vperson.push_back(&p2);
    vperson.push_back(&p3);
    vperson.push_back(&p4);
    vperson.push_back(&p5);
    //遍历容器
    for (vector<Person*>::iterator it = vperson.begin(); it!=vperson.end(); it++)
    {
        cout<<"::name"<<(*it)->name<<" ::age:"<<(*it)->age<<endl;
    }
    
}
int main(){
    test01();
    printf("===========================\n");
    test02();
    return 0;
}