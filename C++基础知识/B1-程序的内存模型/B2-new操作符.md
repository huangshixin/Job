c++中利用new操作符在堆区开辟数据

          堆区开辟的数据，由程序员手动开辟，手动释放 【栈区是由操作系统】

          释放 操作符 【delete】

          【语法】：new 数据类型 

![图片](https://user-images.githubusercontent.com/38878365/195488127-e0fd18de-15bb-466d-a604-6e18c8658d20.png)


【定义一个指针数组】

![图片](https://user-images.githubusercontent.com/38878365/195488639-7f7979b5-fc86-402a-8067-f46c43f65412.png)


            using namespace std;
            #include<iostream>
            #include<string>
            
            //定义一个函数 并使用int *arr = new int[10];在堆当中开辟了一个空间；
            //由于指针指向的是首地址，因此可以使用arr[i]的方式对数组中的每一数进行范文
            //指针的调用有两种方式
            /*
            1、解引用 *arr；可以把地址中的值找出来
            2、由于是数组的形式因此可以使用arr[i]的方式范文
            3、不能在第一个for中使用arr++；否则地址将发生改变；*/
            void test02()
            {
              //定义一个数组
              int* arr = new int[10];
              for (int i = 0; i < 10; i++)
              {
                arr[i] = i*2;
              }
              for (int i = 0; i < 10; i++)
              {
                cout << *arr<< endl;
                arr++;
              }
            }
            int main()
            {
              test02();
              system("pause");
              return 0;
            }
