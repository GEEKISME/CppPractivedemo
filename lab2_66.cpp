/*
 * @Author: your name
 * @Date: 2020-09-24 11:15:49
 * @LastEditTime: 2020-09-24 14:27:03
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_66.cpp
 */
#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<map>
#include<vector>
#include<functional>
//常用的查找算法
//查找内置数据类型
void test1(){
    vector<int> v;
    for (size_t i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    vector<int>::iterator it  = find(v.begin(),v.end(),5);
    if (it == v.end())
    {
        cout<<"no find"<<endl;
    }else{
        cout<<" find:"<<*it<<endl;
    }
};
//查找自定义数据类型
class Person{
    public:
    string name;
    int age;
    Person(string name,int age){
        this->name = name;
        this->age = age;
    }
};
void test2(){
    vector<Person> v;
    Person p1("aaa",10);
    Person p2("bbb",20);
    Person p3("ccc",30);
    Person p4("ddd",40);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    





}
int main(){
    test1();
    printf("==============================\n");
    test2();
    return 0;
}