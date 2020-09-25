/*
 * @Author: your name
 * @Date: 2020-09-23 09:49:03
 * @LastEditTime: 2020-09-23 14:19:36
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_54.cpp
 */
#include<iostream>
using namespace std;
#include<string>
#include<deque>
#include<algorithm>//标准算法头文件
//deque :双端数组，可以对头端进行插入删除操作
//deque与vector的区别：vector对于头部的插入删除效率低，数据量悦达，效率越低，涉及到数据的整体迁移
//deque相对于而言，头部的插入删除操作比vector快
//vector访问元素是的速度比deque快
//vector像ArrayList,是一段连续的内存空间，deque像linklist，不过也
//不全一样，deque依靠的是中控器
void printDeque(deque<int> de){
    //const_iterator 是只读迭代器
    for (deque<int>::const_iterator it = de.begin();it!=de.end();it++)
    {
        // *it=100;
    cout<<*it<<"  ";
    }
    cout<<endl;
}
void test01(){
    deque<int> d1;
    for (size_t i = 0; i < 10; i++)
    {
        d1.push_back(i);
    }
    printDeque(d1);
    deque<int> d2(d1.begin(),d1.end());
    printDeque(d2);
    deque<int>d3(10,100);
    printDeque(d3);
    deque<int>d4(d3);
    printDeque(d4);

    deque<int> d5;
    d5 = d1;
    printDeque(d5);
    deque<int> d6;
    d6.assign(d1.begin(),d1.end());
    printDeque(d6);

    deque<int> d7;
    d7.assign(10,1000);
    printDeque(d7);
}

void test02(){
    deque<int> d1;
    for (size_t i = 0; i < 10; i++)
    {
        d1.push_back(i);
    }
    if (d1.empty())
    {
       cout<<"wei null"<<endl;
    }else{
        cout<<" buwei null"<<endl;
        cout<<"size:"<<d1.size()<<endl;
        // deque容器没有容量的概念 
    }
    // d1.resize(15);
    d1.resize(15,1);
    printDeque(d1);   
}
//deque的插入删除操作
// 两端插入操作push_back,push_front,pop_back,pop_front
// 指定位置操作 insert ,clear , erase
void test03(){
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);

    d1.push_front(100);
    d1.push_front(200);
    printDeque(d1);


    d1.pop_back();
    d1.pop_front();
    printDeque(d1);

    d1.insert(d1.begin(),1000);
    printDeque(d1);
    d1.insert(d1.begin(),2,999);
    printDeque(d1);

    deque<int> d2;
    d2.push_back(1);
    d2.push_back(2);
    d2.push_back(3);
    d1.insert(d1.begin(),d2.begin(),d2.end());
    printDeque(d1);

    printf("=====================\n");
    deque<int>::iterator it = d1.begin();

    it++;
    d1.erase(it);
    printDeque(d1);
}
//deque数据存取
//at，[],front,back

void test04(){
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_front(100);
    d.push_front(200);
    d.push_front(300);
    for (size_t i = 0; i < d.size(); i++)
    {
        cout<<d[i]<<" ";
    }
    cout<<endl;
    for (size_t i = 0; i < d.size(); i++)
    {
        cout<<d.at(i)<<" ";
    }
    cout<<endl;

    cout<<"the first ele:"<<d.front()<<endl;
    cout<<"the last ele:"<<d.back()<<endl;
}
// deque 排序
// sort
void test05(){
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_front(100);
    d.push_front(200);
    d.push_front(300);
    printDeque(d);
    //排序，默认排序规则，从小到大升序
    //对于支持随机访问的迭代器容器，都可以利用sort来进行排序
    sort(d.begin(),d.end());
    printDeque(d);
}
int main(){
    test01();
    printf("================\n");
    test02();
    printf("================\n");
    test03();
    printf("================\n");
    test04();
    printf("================\n");
    test05();
    return 0;
}