/*
 * @Author: your name
 * @Date: 2020-09-24 11:15:28
 * @LastEditTime: 2020-09-24 13:31:44
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_64.cpp
 */
#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<map>
#include<vector>
#include<functional>

void printvector(vector<int> &v){
    for (vector<int>::iterator it = v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void printvector_logic(vector<bool> &v){
    for (vector<bool>::iterator it = v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
//内建函数对象 STL内建了一些函数对象
//算术仿函数，逻辑仿函数，关系仿函数
//negate 一元仿函数 取反仿函数
void test1(){
    //
    negate<int> n;
    cout<<n(50)<<endl;
}
//plus 二元仿函数 加法
void test2(){
    plus<int>p;
    cout<<p(10,20)<<endl;
}
//greater 关系仿函数
void test3(){
    vector<int>v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(40);
    v.push_back(20);
    v.push_back(50);
    printvector(v);
    sort(v.begin(),v.end(),greater<int>());
    printvector(v);
}

void test4(){
    vector<bool>v;
    v.push_back(true);
    v.push_back(false);
    v.push_back(true);
    v.push_back(false);
    printvector_logic(v);
    //利用逻辑非，将容器v搬运到容器v2中，并执行取反操作
    vector<bool> v2;
    v2.resize(v.size());
    transform(v.begin(),v.end(),v2.begin(),logical_not<bool>());
    printvector_logic(v2);

}
int main(){
    test1();
    printf("========================\n");
    test2();
    printf("========================\n");
    test3();
    printf("========================\n");
    test4();
    return 0;
}