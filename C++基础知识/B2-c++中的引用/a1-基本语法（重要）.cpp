【1、语法】

数据类型  &别名 = 原名

【引用的目的就是给变量起一个别名】




举例子：
int a = 10;系统开辟了一个内存地址a，它占用四个字节；
那么现在想得到这个地址的值除了使用a，还能怎么拿呢？


int &b =a;

int *p =&a;  之后再使用“解指针”；


c =a;这个只是赋值操作


【2、注意事项】

1、引用必须要初始化；--必须有值  ，所以int &b 是错误的；必须要初始化
2、初始化后，无法修改；



【3、引用做函数的参数】
1、值传递 2、地址传递 

引用如何做函数的参数；

[回顾值传递]
void swap(int a,int b){
  int temp = a;
  a = b;
  b = temp;
}

[回顾地址传递]
swap(&a,&b);

void swap(int *p,int *q){#指针接受的是【引用地址&a】，在内部依旧写的是*的格式；

    int temp =*p 
    *p =*q;
    *q=temp;
}


【信息引用当参数】
void swap(int &a,int &b){#这个时候相当于【以引用的方式起别名】--作用类似于‘指针’；
  int temp = a;
  a = b;
  b = temp;
}







【4、引用做函数的返回值】
注意：
1、不要返回局部变量的引用 【因为：；使用后直接释放了】
int &test01{
  int a =10;
  return a;
}




2、函数的调用可以作为‘左值’

int &test02{
  static int a =10;//静态变脸，存放在全局去，全局区上的数据在程序结束后释放；
  return a;
}



【左值：表示的是等号的左边】

int &ref2 = test02();
cout<<ref<<endl;//打印 10

test02() = 1000;  设定‘引用’的函数可以作为左值，进行赋值；

cout<<ref<<endl;//打印1000，注意是ref跟着改变了，因为它是test02的别名；




【引用的本质】

1、内部的实现就是一个【指针的常量】

int * const ref=*a; 这个表示的是，指针的指向是固定的；但是你可以改值啊；


【案例】
int& ref=a;
ref = 20;//内部发现ref是引用，自动帮我们转换为 *ref =20;,这里的ref可以直接访问的；
//因为编译器帮你解引用了；

本质：就是一个指针常量；





【常量引用】

使用场景：定义在函数中，防止误操作；

int a=10
int &b =a;  ---合法；


但是：
int a=10;
int &b=10;不合法--因为你需要接受的是一个地址

怎么处理呢？
1、要么按照上面的那种方式
2、要么变成
int a=10;
const int &b=10;加上const后，编译器将代码修改为 int temp=10;const int &ref =temp;

[tips]不允许修改别名了



//使用场景，修饰形参防止误操作

void showValue(const int &val){

    // val = 1000;//这个必须是可修改的左值
    cout<<val<<endl;

}
int main(){

  int a=10;
  showValue(a);
  system("pause");
  return 0;
}  
















