/*
 * @Author: your name
 * @Date: 2020-09-23 09:48:50
 * @LastEditTime: 2020-09-23 13:16:01
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_53.cpp
 */
#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>//标准算法头文件
//vector 数据结构和数组非常类似，也称为单端数组
//vector与普通数组的区别：数组是静态空间，而vector可以动态扩容
//动态扩容并不是在原空间之后接续新的控件，而是找到更大的内存空间，然后将原数据拷贝到新空间，释放原空间
void printVector(vector<int> &v){

    for (vector<int>::iterator it = v.begin();it!=v.end();it++)
    {
        cout<< *it <<" ";
    }
    cout<<endl;
}
void test01(){
    vector<int> v1; //默认构造，无参构造
    for (size_t i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);
    printf("===================\n");
    //通过区间方式进行构造
    vector<int> v2(v1.begin(),v1.end());
    printVector(v2);
    printf("===========================\n");
    //通过n个element方式构造
    vector<int> v3(10,100); //10个100
    printVector(v3);
    printf("======================\n");
    vector<int> v4(v3);//拷贝构造
    printVector(v4);
};
void test02(){
    vector<int> v1; //默认构造，无参构造
    for (size_t i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);
    printf("===================\n");
    vector<int> v2 ;
    v2 = v1;
    printVector(v2);
    vector<int>v3;
    v3.assign(v1.begin(),v1.end());
    printVector(v3);
    printf("======vector capacity================\n");
    if (v1.empty())
    {
        cout<<"wei null"<<endl;
    }else{
        cout<<"bu wei null"<<endl;
        cout<<"capacity:"<<v1.capacity()<<endl;
        cout<<"size:"<<v1.size()<<endl;
    }
    //重新指定大小
    v1.resize(15);
    printVector(v1); // 如果重新指定的比原来长，则默认填充0
}

void test03(){
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    printVector(v1);
    //尾删
    v1.pop_back();
    printVector(v1);
    //插入
    v1.insert(v1.begin(),100);
    printVector(v1);
    v1.insert(v1.begin(),2,1000);
    printVector(v1);

    // v1.erase(v1.begin(),v1.end());
    v1.clear();
    printVector(v1);
}

void test04(){
    vector<int> v1; //默认构造，无参构造
    for (size_t i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    for (size_t i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for (size_t i = 0; i < v1.size(); i++)
    {
        cout<<v1.at(i)<<" ";
    }
    cout<<endl;
    cout<<"the first:"<<v1.front()<<endl;
    cout<<"the last:"<<v1.back()<<endl;
}

//vector 容器互换
void test05(){
    vector<int> v1; //默认构造，无参构造
    for (size_t i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);
    vector<int> v2;
    for (size_t i = 10; i > 0; i--)
    {
        v2.push_back(i);
    }
    printVector(v2);
    cout<<"互换前=====================\n";
    v1.swap(v2);
    printVector(v1);
    printVector(v2);
}
void test06(){
    vector<int> v;
    for (size_t i = 0; i < 100000; i++)
    {
        v.push_back(i);
    }
    cout<<"v capacity:"<<v.capacity()<<endl;
    cout<<"v size:"<<v.size()<<endl;
    v.resize(3);
    cout<<"v capacity:"<<v.capacity()<<endl;
    cout<<"v size:"<<v.size()<<endl;
    //巧用swap收缩内存
    vector<int> (v).swap(v); //vector<int>(v)是一个匿名对象
    cout<<"v capacity:"<<v.capacity()<<endl;
    cout<<"v size:"<<v.size()<<endl;
}

// vector 预留空间，这样可以减少vector动态扩容的次数
//reserve(int len) 容器预留len个元素长度，预留位置不可以初始化，元素不可访问
void test07(){
    vector<int> v;
    v.reserve(100000);
    int num;
    int *p = NULL;
    for (size_t i = 0; i < 100000; i++)
    {
        v.push_back(i);
        if (p!=&v[0])
        {
            p = &v[0];
            num++;
        }
        
    }
    //154行代码处于注释状态，那么指针改变了18次，也就是vector动态扩容了18次。
    //如果给154行代码解开注释，那么num = 1；因为我们知道要装100000个数据，我们已经提前预留了100000个位置
    //这样vector就不用动态扩容了
    cout<<"num:"<<num<<endl;   

}
int main(){
    test01();
    printf("====================\n");
    test02();
    printf("====================\n");
    test03();
    printf("====================\n");
    test04();
    printf("====================\n");
    test05();
    printf("====================\n");
    test06();
    printf("====================\n");
    test07();
    return 0;
}