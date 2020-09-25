/*
 * @Author: your name
 * @Date: 2020-09-18 09:18:22
 * @LastEditTime: 2020-09-18 09:47:06
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_7.cpp
 */
#include<iostream>
using namespace std;
#include<string>
//创建学生的结构体
struct Student
{
    string name;
    int age;
    int score;
};

int main(){
    //三种创建结构体的方法
    struct Student s1;
    s1.name = "zhangsan";
    s1.age = 18;
    s1.score = 100;
    cout<<"姓名："<<s1.name<<"  年龄："<<s1.age<<"分数："<<s1.score<<endl;
    //
    printf("============================= \n");
    struct Student s2 = {"lisi",19,80};
    cout<<"姓名："<<s2.name<<"  年龄："<<s2.age<<"分数："<<s2.score<<endl;
    printf("============================= \n");
    //结构体数组 struct 结构体名 数组名[元素个数] = {{}，{}，{}....{}}
    struct Student studentarr[3] = {
        {"lxh",31,100},
        {"fcj",29,100},
        {"lyj",0,100}
    };

    //修改数组元素中的值
    studentarr[2].name = "liyijia";
    studentarr[2].age = 1;
    //遍历数组
    for (size_t i = 0; i < 3; i++)
    {
        cout<<"name:"<<studentarr[i].name
            <<" age: "<<studentarr[i].age
            <<" score:"<<studentarr[i].score<<endl;
    }
    
    printf("============================\n");
    //结构体指针
    struct Student *p = &s1;
    //通过结构体指针访问结构体中的数据,会用到  ->
    cout<<"name:"<<p->name<<" age:"<<p->age<<" score:"<<p->score<<endl;

    printf("============================\n");
    //结构体中嵌套结构体
    

    return 0;
}