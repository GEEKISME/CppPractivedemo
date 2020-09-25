/*
 * @Author: your name
 * @Date: 2020-09-23 15:06:29
 * @LastEditTime: 2020-09-23 16:26:59
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_57.cpp
 */
#include<iostream>
using namespace std;
#include<string>
#include<list>
//list : 将数据进行链式存储 很像linklist。但是STL中的list是双向循环链表
// list 数据元素的逻辑顺序是通过链表中的指针链接实现的
//链表是由一系列节点组成的。节点的组成：一个是存储数据元素的数据域，另一部分是春初下一个节点地址的指针域
//list和vector是STL中最经常被使用的容器
void printList(const list<int> &ls){
    for (list<int>::const_iterator it = ls.begin();it!=ls.end();it++ )
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

void test01(){
    list<int> ls;
    ls.push_back(10);
    ls.push_back(20);
    ls.push_back(30);
    ls.push_back(40);
    ls.push_back(50);
    printList(ls);
    list<int> l2(ls.begin(),ls.end());
    printList(l2);
    list<int> l3(l2);
    printList(l3);

    list<int> l4(10,1000);
    printList(l4);
};

void test02(){
    list<int> ls;
    ls.push_back(10);
    ls.push_back(20);
    ls.push_back(30);
    ls.push_back(40);
    ls.push_back(50);
    list<int> l2;
    l2 = ls;
    printList(l2);
    list<int> l3;
    l3.assign(l2.begin(),l2.end());
    printList(l3);
    list<int> l4;
    l4.assign(10,10000);
    printList(l4);
}
void test03(){
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    list<int> l2;
    l2.assign(10,100);
    printList(l1);
    printList(l2);
    cout<<"=-====swap前======\n"<<endl;

    cout<<"=-====swap后======\n"<<endl;
    l1.swap(l2);
    printList(l1);
    printList(l2);

}
//list 的大小操作
//size（），empty（），resize（）
void test04(){
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    if (l1.empty())
    {
        cout<<"wei null"<<endl;
    }else{
        cout<<"bu wei null"<<endl;
        cout<<"元素个数："<<l1.size()<<endl;

    }
    l1.resize(10,10000);
    printList(l1);
}

void test05(){
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_front(100);
    l1.push_front(200);
    l1.push_front(300);
    printList(l1);
    l1.pop_back();
    printList(l1);
    l1.pop_front();
    printList(l1);
    l1.insert(l1.begin(),1000);
    printList(l1);
    list<int>::iterator it= l1.begin();
    l1.insert(++it,2000);
    printList(l1);
    it = l1.begin();
    l1.erase(it);
    printList(l1);
    l1.push_back(10000);
    printList(l1);
    //删除容器中所有与10000匹配的元素
    l1.remove(10000);
    printList(l1);
    l1.clear();
    printList(l1);
}
void test06(){
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    // l1[0]  不可以用[]访问list容器中的元素
    // l1.at(0)  不可以用at访问list容器中的元素
    //本质原因在于list是链表，不是用连续的线性空间存储数据，迭代器也是不支持随机访问

    cout<<"the first:"<<l1.front()<<endl;
    cout<<"the last:"<<l1.back()<<endl;
    //验证迭代器不支持随机访问
    list<int>::iterator it = l1.begin();
    // it = it+1;//这样是错的因为你能加1，就可能加2,3等，而迭代器只能一个一个的走
    it++;

}
int main(){
    test01();
    printf("==================\n");
    test02();
    printf("==================\n");
    test03();
    printf("==================\n");
    test04();
    printf("==================\n");
    test05();
    printf("==================\n");
    test06();
    return 0;
}