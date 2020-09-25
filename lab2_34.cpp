/*
 * @Author: your name
 * @Date: 2020-09-21 10:23:15
 * @LastEditTime: 2020-09-21 16:03:46
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_30.cpp
 */
#include<iostream>
using namespace std;
#include<string>
#include<fstream>

//二进制文件，读文件
class Person{
    public:
    char m_Name[64];//姓名
    int  m_Age; //年龄
};

void test01(){
    ifstream ifs;
    ifs.open("lab2_33.txt",ios::binary|ios::in);
    if (!ifs.is_open())
    {
        cout<<"打开失败"<<endl;
        return;
    }

    Person p;
    ifs.read((char*)&p,sizeof(Person));
    cout<<"name :"<<p.m_Name<<" age:"<<p.m_Age<<endl;
    ifs.close();
    
}

int main(){
    test01();
    return 0;
}