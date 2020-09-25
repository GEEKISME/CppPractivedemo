/*
 * @Author: your name
 * @Date: 2020-09-23 15:06:50
 * @LastEditTime: 2020-09-23 17:07:42
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_59.cpp
 */
#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<set>
//set 所有元素都会在插入时自动被排序，底层是二叉树
//set不允许容器中有重复元素
//multiset 允许有重复元素
void printset(set<int> &s){
    for (set<int>::iterator it = s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void test01(){
    set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);
    // 重复的值自动过滤，而且插入的值会被排序
    printset(s1);

    set<int> s2(s1);
    printset(s2);
    set<int> s3;
    s3 = s2;
    printset(s3);
}
int main(){
    test01();
    // printf("==================\n");
    // test02();
    // printf("==================\n");
    // test03();
    
    return 0;
}