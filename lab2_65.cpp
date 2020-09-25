/*
 * @Author: your name
 * @Date: 2020-09-24 11:15:38
 * @LastEditTime: 2020-09-24 13:51:04
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_65.cpp
 */
#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<map>
#include<vector>
#include<functional>
//stl常用的算法 算法主要由头文件<algorithm><functional><numeric>
//<algorithm> 是所有stl头文件中最大的一个，范围涉及到比较、交换、查找、遍历、复制、修改
//<numeric> 体积很小，只包括几个在序列上面进行简单数学运算的模板函数
//<functional>定义了一些模板类，用以声明函数对象

//常用遍历算法  for_each    transform

//普通函数
void print01(int val){
    cout<<val<<" ";
}
//仿函数
class print02{
    public:
    void operator()(int val){
        cout<<val<<" ";
    }
};
void test1(){
    vector<int>v;
    for (size_t i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    
    for_each(v.begin(),v.end(),print01);
    cout<<endl;
    for_each(v.begin(),v.end(),print02());
    cout<<endl;

}
// transform 搬运容器的内容到另一个容器

class Transform{
    public:
    int operator()(int val){
        return val*val;
    }

};
class MyPrint{
    public:
    void operator()(int val){
        cout<<val<<" ";
    }
};

void test2(){
    vector<int>v;
    for (size_t i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    vector<int> target;
    target.resize(v.size());//目标容器需要提前开辟空间
    transform(v.begin(),v.end(),target.begin(),Transform());
    for_each(target.begin(),target.end(),MyPrint());
}
int main(){
    test1();
    printf("================================\n");
    test2();
    return 0;
}