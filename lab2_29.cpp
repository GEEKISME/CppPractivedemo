/*
 * @Author: your name
 * @Date: 2020-09-21 10:23:09
 * @LastEditTime: 2020-09-21 14:01:31
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_29.cpp
 */
#include<iostream>
using namespace std;
#include<string>

//虚析构 与纯虚析构

class Animal{
    public:
    //纯虚函数
    virtual void speak() = 0;
    Animal(){
        cout<<"animal 的构造函数调用"<<endl;
    }
    //加上virtual 关键字，变为虚析构，这样就会走子类的析构函数了。利用虚析构可以解决父类
    //指针释放子类对象时不干净的问题
    virtual~Animal(){
        cout<<"animal 的析构函数调用"<<endl;
    }

    //这行加纯虚析构，可以代替上面的virtual ~Animal()。和上面的二选一即可.用了
    //第30行代码的话，同时需要解注释34-36，作用是可以释放父类中可能的堆区数据
    // virtual ~Animal()=0; 

};

// Animal::~Animal(){
//     cout<<"Animal 纯虚析构函数调用"<<endl;
// }

class Cat : public Animal{
    public:
    string *m_Name;
    Cat(string name){
        cout<<"cat 的构造函数调用"<<endl;
        m_Name = new string(name);
    }
    virtual void speak(){
        cout<<*m_Name<<"小猫在说话"<<endl;
    }
    ~Cat(){
        if (m_Name!=NULL)
        {
            cout<<"cat 的析构函数调用"<<endl;
            delete m_Name;
            m_Name = NULL;
        }
        
    }
};


void test01(){
    Animal *animal = new Cat("Tom");
    animal->speak();
    //父类指针在析构的时候，不会调用子类中的析构函数，导致子类如果有堆区属性，出现内存泄漏的情况
    //解决问题的方法是，在Animal的析构函数前面加上virtual关键字，改为虚析构，这样就可以在父类的析构函数的时候把子类的析构函数也走一遍
    delete animal; 
}

int main(){
    test01();
    return 0;
}

