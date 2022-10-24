在声明函数的时候，可以给形参设定默认值

int method(int a,int b=10,int c=10){

  return a+b+c;
} 

【注意的时候，如果要传形参的时候，假如b传了参数、c也需要传参数】---否则会报错

1、在调用函数的时候，如果没有给b和c赋值，那么会使用默认值；
2、如果又存入数据，则使用存入的数据
3、如果某个初始值位置有了默认参数，那么从这个定义位置开始，后续的值都必须初始化；


进行函数声明的时候；有一个规则
1、如果函数声明有默认参数，那么实现就不能有默认参数；[声明和实现，只能有一个有默认参数]
int func2(int a=10,int b=10):







2、函数的【占位参数】：

返回值类型  函数名 (数据类型){}

//占位参数
void function(int a ,int){//这个后一个int就叫做“占用参数”}

【tips】注意点
目前阶段的占用参数还用不到，后续课程能用到；







3、函数的重载

作用：函数名可以相同，提高函数的复用性

【满足条件】
1、同一个作用域下；
2、函数名称相同
3、函数参数类型不同、或者 个数不同、顺序不同


//可以让函数名相同，提高复用性
1|必须在同一个作用域下；
2、函数名称要相同
3、函数的参数类型不同、个数、顺序 要不同
void func(){
  cout<<"dadasd"<<endl;
}

void func(int a){//函数的重载

  cout<<"enddsd"<<endl;
}

void func(double a){//函数的重载

  cout<<"enddsd"<<endl;
}

void function(int a,double b){}//以下两个都算函数的重载
void function(double b,int a){}

【注意： 函数的返回类型是不可以改变的】









4、引用作为函数重载的条件

//函数重载的注意事项

1、引用作为重载的条件
void func(int &a){
  cout<<"dadasd"<<endl;
}

void func(const int &a){
  cout<<"const"<<endl;
}

调用
int a =10

func(a);   调用第一个
func(1) 调用第二个   引用必须int  &b=a;

2、函数重载碰到默认参数

















