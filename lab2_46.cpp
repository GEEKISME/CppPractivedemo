/*
 * @Author: your name
 * @Date: 2020-09-22 14:56:49
 * @LastEditTime: 2020-09-22 17:23:12
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_45.cpp
 */
#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>//标准算法头文件
//STL : standard Template  Library
//vector

void printnumber(int value){
    cout<<value<<endl;
}

void test01(){
    //创建一个vector容器，数组
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    //通过迭代器访问容器中的数据
    vector<int>::iterator begin = v.begin();//起始迭代器，指向容器中的第一个元素 
    vector<int>::iterator end = v.end();//结束迭代器，指向容器中最后一个元素的下一个
    //第一种遍历方式
    while (begin!=end)
    {
        //迭代器可以当做指针来用因此，*begin就是取值操作
        cout<<*begin<<endl;
        begin++;
    }
    
    printf("=======================\n");
    //第二种遍历方式
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout<<*it<<endl;
    }
    printf("=======================\n");
    //第三种遍历方式，利用STL提供的遍历算法
    for_each(v.begin(),v.end(),printnumber);

}
int main(){
    test01();
    return 0;
}