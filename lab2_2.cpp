
#include<iostream>
using namespace std;
#define Day 7
int main(){
    cout << "hello world!" << endl;
    int a = 10;
    cout << "a = " << a << endl;
    cout << "一周共有："<< Day << "天" << endl;
    const float PI = 3.14;
    cout << "PI 是："<< PI<<"haha"<<endl;

    cout << "==================="<<endl;
    cout << "short 所占的内存空间"<< sizeof(short)<<endl;
    cout << "int 所占的内存空间"<< sizeof(int)<<endl;
    cout << "long 所占的内存空间"<< sizeof(long)<<endl;
    cout << "long long 所占的内存空间"<< sizeof(long long)<<endl;
    return 0;
}