/*
 * @Author: your name
 * @Date: 2020-09-18 10:30:05
 * @LastEditTime: 2020-09-18 10:42:46
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_9.cpp
 */
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void myPrint(int val){
    cout<<val<<endl;
}
void test01(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    //
    vector<int>::iterator itbegin = v.begin();// 起始迭代器，指向容器中的第一个元素
    vector<int>::iterator itend = v.end();// 结束迭代器，指向容器中的最后一个元素的下一个位置
    while (itbegin!=itend)
    {
        cout<<*itbegin<<endl;
        itbegin++;
    }
    printf("===========================\n");
    for_each(v.begin(),v.end(),myPrint);


}
int main(){
    test01();
    return 0;
}
