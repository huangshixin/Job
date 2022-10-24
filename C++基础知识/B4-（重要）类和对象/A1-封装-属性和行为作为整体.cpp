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










