/*
 * @Author: your name
 * @Date: 2020-09-23 09:49:28
 * @LastEditTime: 2020-09-23 15:05:33
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_56.cpp
 */
#include<iostream>
using namespace std;
#include<string>
#include<queue>
// queue ,队头只能出数据 队尾入数据
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
    queue<Person>q;
    //准备数据
    Person p1("唐僧",20);
    Person p2("su",1000);
    Person p3("zhu",900);
    Person p4("sha",800);
    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);
    cout<<"size"<<q.size()<<endl;
    while (!q.empty())
    {
        //查看对头
        cout<<"队头元素--name:"<<q.front().name<<endl;
        //查看对尾
        cout<<"队尾元素--name:"<<q.back().name<<endl;
        q.pop();
    }
    cout<<"size"<<q.size()<<endl;
    

}
int main(){
    test01();
    return 0;
}