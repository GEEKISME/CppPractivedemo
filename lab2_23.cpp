/*
 * @Author: your name
 * @Date: 2020-09-21 10:13:47
 * @LastEditTime: 2020-09-21 10:18:07
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_23.cpp
 */
#include<iostream>
using namespace std;
#include<string>
//继承中的构造以及析构的顺序
class Base{
    public: Base(){
        cout<<"Base构造函数"<<endl;
    }
    public:~Base(){
        cout<<"Base的析构函数"<<endl;
    }
};

class Son : public Base{
    public: Son(){
        cout<<"Son构造函数"<<endl;
    }
    public:~Son(){
        cout<<"Son的析构函数"<<endl;
    }
};
void test01(){
    // Base b;
    Son s;//先构造父类 再构造子类。先析构子类，在析构父类
}
int main(){
    //
    test01();
    return 0;
}