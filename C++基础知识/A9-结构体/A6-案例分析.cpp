#include<iostream>
using namespace std;
#include<math.h>
#include<string>
//void bubbleSort(int* arr, int b) {
//
//    for (int i = 0; i < b - 1; i++) {
//
//        for (int j = b-1; j >i; j--) {
//
//                if (arr[j] > arr[j -1]) {
//                    int temp = arr[j];
//                    arr[j] = arr[j - 1];
//                    arr[j - 1] = temp;
//                }
//        }
//    }
//}
/*
设计一个英雄的结构体，包括姓名、年龄、性别；
创建结构体数组，并在数组中存放5名英雄；
通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果
*/
struct hero 
{
    string name;
    int age;
    string sex;
};

void bubblesort(hero p[], int len) {//这里需要申明成结构体数组
    //定义结构体指针
    for (int i = 0; i < len - 1; i++) {//执行n-1次
        for (int j = len-1; j >i; j--) {
            if (p[j].age < p[j - 1].age) {
                //从小到大排序,需要换的是整个结构体
                struct hero temp = p[j];
                p[j] = p[j - 1];
                p[j - 1] = temp;
            }
        }
    }
}
void printsort(struct hero h1[], int len) {
    
    for (int i = 0; i < len; i++) {
        //不能直接h1[0]这种打印
        cout <<"print name = :"<< h1[i].name << "\t"
             <<"print age="<<h1[i].age<<"\t"
             <<"print sex="<<h1[i].sex << "\t"
            << endl;
    }
}
int main() {
    
    struct hero h1[5] = {

        {"liubei",23,"男"},
        {"guanyu",17,"男"},
        {"zhaoyun",19,"男"},
        {"zhangfei",22,"男"},
        {"diaochang",20,"女"}
    };
    int len = sizeof(h1) / sizeof(h1[0]);
    bubblesort(h1, len);
    printsort(h1, len);
	system("pause");
	return 0;
}
