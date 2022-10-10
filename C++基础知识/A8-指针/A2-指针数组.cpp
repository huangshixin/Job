指针数组

1、比如 你先定义一个数组
int arr[5]  = {1,2,3,4,5}
int *p=&arr
cout<<p[0]<<endl;只是拿到第一个数的地址



2、指针的引用和指针的解引用；
实现一个冒号排序，使用【地址传递】-------从前往后排序
#include<iostream>
using namespace std;
#include<math.h>
void bubbleSort(int *arr, int b) {

        for (int i = 0; i <b-1; i++) {

           for (int j = 0; j<b-i-1; j++) { //j要小于i

               if (arr[j] > arr[j+1]) {
                   int temp = arr[j];
                   arr[j] = arr[j+1];
                   arr[j+1] = temp;
               }
           }
        }
}
int main() {
	//
    int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
    int value = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, value);
    for (int j = 0; j < value; j++) {
        cout << arr[j] << endl;
    }

	system("pause");
	return 0;
}















从后往前的思想：

i依旧设定为从前往后，从0~length-2； 因为只能循环n-1次
j从后往前开始判断，【依据冒号排序的思想】，每次都有一个元素被丢到最优位置，因此设定的j要大于i



#include<iostream>
using namespace std;
#include<math.h>
void bubbleSort(int* arr, int b) {

    for (int i = 0; i < b - 1; i++) {

        for (int j = b-1; j >i; j--) {//核心重点

                if (arr[j] > arr[j -1]) {
                    int temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;
                }
        }
    }
}
int main() {
	//
    int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
    int value = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, value);
    for (int j = 0; j < value; j++) {
        cout << arr[j] << endl;
    }

	system("pause");
	return 0;
}
