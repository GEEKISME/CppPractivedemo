/*
 * @Author: your name
 * @Date: 2020-09-21 10:23:00
 * @LastEditTime: 2020-09-21 13:27:50
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_28.cpp
 */
#include<iostream>
using namespace std;
#include<string>
//多态案例2 制作饮品
class AbstractDrinking{
    public:
    virtual void Boil() = 0;
    virtual void Brew() = 0;
    virtual void PourInCup() = 0;
    virtual void PutSomething() = 0;
    void MakeDrinking(){
        Boil();
        Brew();
        PourInCup();
        PutSomething();
    }
};

class Coffe : public AbstractDrinking{
    public:
    virtual void Boil(){
        cout<<"煮水"<<endl;
    } ;
    virtual void Brew(){
        cout<<"冲泡咖啡"<<endl;
    } ;
    virtual void PourInCup(){
        cout<<"倒入杯中"<<endl;
    } ;
    virtual void PutSomething(){
        cout<<"放入糖和牛奶"<<endl;
    };
};

class Tea : public AbstractDrinking{
    public:
    virtual void Boil(){
        cout<<"煮白开水"<<endl;
    } ;
    virtual void Brew(){
        cout<<"冲泡茶叶"<<endl;
    } ;
    virtual void PourInCup(){
        cout<<"倒入茶杯中"<<endl;
    } ;
    virtual void PutSomething(){
        cout<<"放入枸杞"<<endl;
    };
};

//AbstractDrinking *abs = new Coffe(); 父类指针指向子类的对象
void doWork(AbstractDrinking * abs){ 
    abs->MakeDrinking();
    delete abs;
}
void test01(){
    doWork(new Coffe());
    printf("=======================\n");
    doWork(new Tea());
}
int main(){
    test01();
    return 0;
}