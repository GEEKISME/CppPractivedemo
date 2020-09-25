/*
 * @Author: your name
 * @Date: 2020-09-23 15:06:39
 * @LastEditTime: 2020-09-23 16:42:22
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_58.cpp
 */
#include<iostream>
using namespace std;
#include<string>
#include<list>
#include<algorithm>


void printList(const list<int> &ls){
    for (list<int>::const_iterator it = ls.begin();it!=ls.end();it++ )
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

bool myCompare(int v1,int v2){
    //降序  就让第一个数 >  第二个数
    return v1>v2;
};

//将list中的元素反转以及将list中的数据进行排序、
//reverse() 反转链表
//sort（）链表排序
void test01(){
    list<int> ls;
    ls.push_back(10);
    ls.push_back(50);
    ls.push_back(40);
    ls.push_back(30);
    printList(ls);
    cout<<"反转后："<<endl;
    ls.reverse();
    printList(ls);
};
void test02(){
    list<int> ls;
    ls.push_back(20);
    ls.push_back(10);
    ls.push_back(50);
    ls.push_back(40);
    ls.push_back(30);

    cout<<"sort qian"<<endl;
    printList(ls);
    cout<<"sort hou"<<endl;
    //所有不支持随机访问的迭代器的容器，不可以用标准算法
    ls.sort();//默认从小到大 升序
    printList(ls);
    ls.sort(myCompare);
    printList(ls);
};
class Person{
    public:
    string name;
    int age;
    int height;
    Person(string name,int age,int height){
        this->name = name;
        this->height = height;
        this->age = age;
    }
};
//对于自定义数据类型做排序
//按照年龄进行升序，如果年龄相同按照身高进行降序
void printPerson(const list<Person> &ls){
    for (list<Person>::const_iterator it  = ls.begin();it!=ls.end();it++)
    {
        cout<<"name:"<<it->name<<" age:"<<it->age<<" height:"<<it->height<<endl;
    }
}
//指定排序规则
bool comparePerson(Person &p1,Person &p2){
    if (p1.age == p2.age)
    {
        return p1.height>p2.height;
    }else{
        return p1.age<p2.age;
    }
}
void test03(){
    list<Person> L;
    Person p1("刘备",35,175);
    Person p2("曹操",45,180);
    Person p3("孙权",40,170);
    Person p4("赵云",25,190);
    Person p5("张飞",35,160);
    Person p6("关羽",35,200);
    L.push_back(p1);
    L.push_back(p2);
    L.push_back(p3);
    L.push_back(p4);
    L.push_back(p5);
    L.push_back(p6);
    printPerson(L);
    cout<<"sort  hou "<<endl;
    L.sort(comparePerson);
    printPerson(L);
}
int main(){
    test01();
    printf("==================\n");
    test02();
    printf("==================\n");
    test03();
    
    return 0;
}