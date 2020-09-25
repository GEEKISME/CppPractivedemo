/*
 * @Author: your name
 * @Date: 2020-09-23 15:07:13
 * @LastEditTime: 2020-09-24 13:11:44
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_61.cpp
 */
#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<map>
#include<vector>

//谓词：返回bool类型的仿函数称为谓词
//如果operator()接收一个参数，那么叫做一元谓词
//如果operator()接受两个参数，那么叫做二元谓词
// 一元谓词

class GreaterFive{
    public:
    bool operator()(int val){
        return val>5;
    }
};


void test1(){
    vector<int> v;
    for (size_t i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    //查找容器中是否有大于5 数字  第三个参数 GreaterFive() 是一个匿名的函数对象
    vector<int>::iterator it =  find_if(v.begin(),v.end(),GreaterFive());
    if (it==v.end())
    {
        cout<<"未找到"<<endl;
    }else{
        cout<<"找到了大于5 的数字:"<<(*it)<<endl;
    }
}
//二元谓词
class MyCompare{
    public:
    bool operator()(int val1,int val2){
        return  val1>val2;
    }
};
void test2(){
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(20);
    v.push_back(30);
    v.push_back(50);
    sort(v.begin(),v.end());
    for (vector<int>::iterator it = v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end(),MyCompare());
    for (vector<int>::iterator it = v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main(){
    test1();
    printf("==================\n");
    test2();
    // printf("==================\n");
    // test03();
    
    return 0;
}