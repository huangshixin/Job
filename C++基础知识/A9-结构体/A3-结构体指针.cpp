无论是结构体指针还是正常的指针，其引用方式都是一致的；

1、既然命名称之为结构体指针：那么指针的定义方式应该是 struct *p；

(1)先定义一个结构体
struct student{
    string name;
    int age;
    int score;
};

(2)定义一个结构体指针
struct student *p=&s1  //你需要指明是哪一个结构体的指针，这里struct可以省略

################################################################
(3)引用结构体指针【结构体指针的引用 是通过  ->】
################################################################
cout<<p[0]->name<<p[0]->age<<p[0]->score<<endl;

使用for循环来遍历
value =sizeof(s1)/sizeof(s1[0])
for (int i=0;i<=value-1;i++){
  
  cout<<p[i].name
      <<p[i].age
      <<p[i].score<<endl;
}  





#include<iostream>
using namespace std;
#include<math.h>
#include<string>

struct student 
{
    //定义一个结构体
    string name;
    int age;
    int score;

};
int main() {

    struct student s1[3] = {
        //定义了一个结构体数组
        {"zhangshan",17,98},
        {"wangwu",17,98},
        {"zhaoliu",17,98},
    };

    student * p = s1;//结构体数组本身就是一个地址，因此不需要使用&符号 但是如果是int a=10;需要 int *p=&a;
    for (int j = 0; j < 3; j++) {
        cout << p->name << endl;
        p = p++;#让指针自增
    }
	system("pause");
	return 0;
}
