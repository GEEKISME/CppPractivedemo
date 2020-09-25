/*
 * @Author: your name
 * @Date: 2020-09-18 09:47:24
 * @LastEditTime: 2020-09-18 10:08:16
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \cppdemo\lab2_8.cpp
 */
#include<iostream>
using namespace std;
#include<string>
//每个老师辅导一个学生
struct Student
{
    string name;
    int age;
    int score;
};

struct teacher
{
    int id;
    string name;
    int age;
    struct Student stu;
};
void printStudent1(Student s){
    s.age = 22;
    cout<<"值传递："<<"name :"<<s.name<<" age:"<<s.age<<" score:"<<s.score<<endl;
}
void printStudent2(Student* s){
    s->age = 200;
    cout<<"地址传递："<<"name :"<<s->name<<" age:"<<s->age<<" score:"<<s->score<<endl;
}
    teacher t;
int main(){
    t.id = 10000;
    t.name = "老王";
    t.age = 50;
    t.stu.name = "小王";
    t.stu.age = 20;
    t.stu.score = 80;

    cout<<"teacher name:"<<t.name<<" teacher's student name:"<<t.stu.name<<endl;

    //
    printf("===============================\n");
    //结构体作为函数参数：值传递  地址传递
    Student s;
    s.name = "zhangsan";
    s.age = 20;
    s.score = 60;
    //值传递
    printStudent1(s);
    printStudent2(&s);
    cout<<"main 函数打印"<<"name:"<<s.name<<" age:"<<s.age<<" score:"<<s.score<<endl;
    return 0;
}