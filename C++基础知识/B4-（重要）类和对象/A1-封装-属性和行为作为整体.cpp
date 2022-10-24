1\封装的意义：

将属性和行为作为一个整体
将属性和行为加以权限限制

[案例]

//圆的周长公式 2*pi*r

const double PI=3.14;
class circle
{
  //访问权限
public :
  //属性
  int m_r;
  
  //行为
  //获取圆的周长
  double calculateZC(){
    return 2*PI*m_r; 
  }
  
};

int main()
{
 circle c1;
 c1.m_r=10;//给类中的半径赋值
 cout<<c1.calculateZC()<<endl;
}




【练习】

设计一个学生类，属性有学生姓名和学号，可以给姓名和学号赋值（public），可以显示学生的姓名和学号；


class Student
{
  
  public :
    string name;//成员属性
    int stu_Num;
    string stuInfo(){//成员方法
       
      cout<<"student's name="<<name<<endl;
      cout<<"student's number"<<stu_Num<<endl;
      
    }
    void setValue(string a,int b)
    {
     name = a;
     stu_Num = b; 
    }
}

int main(){
 Student s1;
 s1.name = "lihua";
 s1.stu_Num = 1023332;
 cout<<s1.stuInfo()<<endl;
 //在函数内部给属性赋值
 //先调用setValue,,然后再调用新的值
}



##########################################################################################

【2、访问权限】

public 成员在类内可以访问

private 类内可以，类外不行 【继承了，子类可以访问父类保护的东西】

protected 类内可以，类外不行


【怎么定义呢？】
class Person
{
public:
    string m_name;
protected:
  string = m_Car;

private:
  int m_password;
}


##########################################################################################



【struct和class的区别是什么】

struct默认是共有；class默认是私有权限



##########################################################################################


将成员属性设置为私有：

【案例】
1、自己控制读写的权限
2、对于写，可以检测数据的有效性；

class Person
{
private://如果对成员属性进行私有化设置，那么会开放修改接口
  string m_name;
  string = m_Car;
  int m_password;
  
void setNAME(sting name)
{}

stting getName(){
  return m_name;
}

}










