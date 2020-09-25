/*
 * @Author: your name
 * @Date: 2020-09-21 10:23:15
 * @LastEditTime: 2020-09-22 13:46:37
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_30.cpp
 */
#include<iostream>
using namespace std;
#include<string>
//实现通用 对数组进行排序的函数
//规则 从大到小
//测试char数组，int 数组

//提供打印数组的模板
template<class T>
void printArray(T arr[],int len){
    for (size_t i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout <<endl;
}

//交换函数模板
template <class T>
void mySwap(T &a,T &b){
    T temp = a;
    a = b;
    b = temp;
}


//排序算法
template<class T>
void mySort(T arr[],int len){
    for (size_t i = 0; i < len; i++)
    {
        int max = i;//认定最大值的下标
        for (size_t j = i+1; j < len; j++)
        {
            //认定的最大值比遍历出的数值要小，说明j下标的元素才是真正的最大值
            if (arr[max]<arr[j])
            {
                max = j;
            } 
        }
        if (max!=i)
        {
           mySwap(arr[max],arr[i]);
        } 
    }
}

void test01(){
    char charArr[] = "badcef";
    int num = sizeof(charArr)/sizeof(char);
    mySort(charArr,num);
    printArray(charArr,num);
}

void test02(){
    int intArr[] = {7,5,1,3,9,2,4,6,8};
    int num = sizeof(intArr)/sizeof(int);
    mySort(intArr,num);
    printArray(intArr,num);
}

int main(){
    test01();
    printf("================================\n");
    test02();
    return 0;
}