/*
 * @Author: your name
 * @Date: 2020-09-17 15:24:37
 * @LastEditTime: 2020-09-17 16:01:28
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_1.cpp
 */
#include<iostream>
using namespace std;

int main(){
    int i = 1,sum = 0;
    do
    {
        sum+=i;
        i++;
        
    } while (i<101);
    cout << "hello world!" << endl;
    cout << "sum = " << sum << endl;
    return 0;
}