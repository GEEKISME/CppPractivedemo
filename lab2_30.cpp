/*
 * @Author: your name
 * @Date: 2020-09-21 10:23:15
 * @LastEditTime: 2020-09-21 15:01:41
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_30.cpp
 */
#include<iostream>
using namespace std;
#include<string>
//抽象不同的零件类
class CPU{
    public:
    //抽象的计算函数
    virtual void calculate()=0;
};
class VideoCard{
    public:
    //抽象的计算函数
    virtual void display()=0;
};
class Memory{
    public:
    //抽象的计算函数
    virtual void storage()=0;
};



class Computer{
    public:
    Computer(CPU *cpu,VideoCard * vc,Memory *mem){
        m_cpu = cpu;
        m_vc = vc;
        m_mem = mem;
    }
    void work(){
        m_cpu->calculate();
        m_vc->display();
        m_mem->storage();
    }
    //提供析构函数，释放电脑的3个零件
    ~Computer(){
        if (m_cpu!=NULL)
        {
            delete m_cpu;
            m_cpu = NULL;
        }
        if (m_vc!=NULL)
        {
            delete m_vc;
            m_vc = NULL;
        }
        if (m_mem!=NULL)
        {
            delete m_mem;
            m_mem = NULL;
        }
        
    }
    private:
    CPU *m_cpu;
    VideoCard *m_vc;
    Memory * m_mem;
};

//具体厂商
class IntelCpu :public CPU{
    public:
    virtual void calculate(){
        cout<<"Intel cpu开始计算了！"<<endl;
    }
};
class IntelVideoCard :public VideoCard{
    public:
    virtual void display(){
        cout<<"Intel 显卡开始计算了！"<<endl;
    }
};

class IntelMemory :public Memory{
    public:
    virtual void storage(){
        cout<<"Intel 内存条存储数据了！"<<endl;
    }
};

//Lenovo
class LenovoCpu :public CPU{
    public:
    virtual void calculate(){
        cout<<"lenovo cpu开始计算了！"<<endl;
    }
};
class lenovoVideoCard :public VideoCard{
    public:
    virtual void dispaly(){
        cout<<"lenovo 显卡开始计算了！"<<endl;
    }
};

class LenovoMemory :public Memory{
    public:
    virtual void storage(){
        cout<<"lenovo 内存条存储数据了！"<<endl;
    }
};

void test01(){
    //第一台电脑的零件
    CPU *intelcpu = new IntelCpu;
    VideoCard *intelcard = new IntelVideoCard;
    Memory *intelmem = new IntelMemory;
    //创建第一台电脑
    Computer *computerintel = new Computer(intelcpu,intelcard,intelmem);
    computerintel->work();
    delete computerintel;
    printf("=============================\n");
    //创建第一台电脑
    // Computer *computerinte2 = new Computer(new LenovoCpu,intelcard,intelmem);
    // computerinte2->work();
    // delete computerinte2;
}

int main(){
    test01();
    return 0;
}