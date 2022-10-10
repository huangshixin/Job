1、结构体是用户自定义的数据类型

语法：
struct 结构体名 {结构体成员列表}

结构体定义的时候，struct不能省略
但是在创建的时候（给赋予初值）；可以省略

#include<string> 使用字符串时候

【第一种方式：】
    struct student{

     string name;
     int age;
     int score; 
     float average_score; 
  }
  
int main(){
 struct student s1; 这里是可以省略的
 s1.name = '张三';
  ...
  
}


【第二种方式：】

struct student s1{ //s1是别名

     string name ='zhangsan';
     int age=19;
     int score=83; 
     float average_score; 
  }
  
访问结构体中的值： cout<<s1.name<<endl; 


【第三种，在结构体时候顺便创建结构体】
