/*
 * @Author: your name
 * @Date: 2020-09-21 10:23:15
 * @LastEditTime: 2020-09-21 15:56:37
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_30.cpp
 */
#include<iostream>
using namespace std;
#include<string>
#include<fstream>
//二进制文件，写文件
class Person{
    public:
    char m_Name[64];
    int  m_Age;
};

void test01(){
    //1 包含头文件
    //2. 创建流对象
    ofstream ofs;
    //3、打开文件
    ofs.open("lab2_33.txt",ios::out | ios::binary);
    //4. 写文件
    Person p = {"张三",18};
    //对p进行&操作，返回的类型是Person*,但是write函数要的是一个const char*，因此需要强转一下
    ofs.write((const char*)&p,sizeof(Person));
    //5. 关闭文件
    ofs.close();
}

int main(){
    test01();
    return 0;
}