1、无参无返

 viod function(){
    cout<<"asda"<<endl;
 }
 

2、有参无返

  viod function1(int num1){
        cout<<"num1="<<num1<<endl;
  }
  

3、无参有返
     viod function3(){
        return 'function3';
     }

4、有参有返

    int function(int a){
        return a;
    }
    



5、函数的声明；目的是为了告诉系统，存在这个函数；因为你在执行main的时候，如果你设定的函数在main之后，那么系统是找不到的；【因此需要函数的声明】

    int function(int a,,int b);#称之函数的声明

    int main(){
       function();
     
    }

    int function(int a,int b){
       #申明可以多次，但是执行只能有一次
    }




6、函数的分文编写的好处；

    因为你可以声明多个函数；
    然后再其它函数的内部进行使用；
    而且；你不需要在一个文件中创建多个，可以写在其它文件中；
    
    
    1、创建.h后缀名的头文件    【名字任意，先创建.h】
    2、创建.cpp后缀名的源文件   【在cpp中写函数的实现】
    3、在头文件中写函数的声明   【在.h中创建函数的声明】
    4、在源文件中写函数的定义
    
    
    #include "swap.h" 双引号表示自定义的文件
