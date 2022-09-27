1、单精度  float
2、双精度  double


float a = 3.14f  4字节
double b = 3.14  8字节


3、科学计数法
float d = 3e2f
float f = 3e-2f
  
  
#include <iostream>
using namespace std;

#define Day  100;
int main() {
	/*
	1、短整型
	short a = 10;   2字节
	2、整型;
	int b =10 ;   4字节
	3、长整型
	long c = 10;  
	4、长长整型
	long long d=10; 8字节
	*/
	short num = 100;

	float a = 3.14f;
	double b = 3.14;
	cout << sizeof(b) <<b<<endl;
	system("pause");
	return 0;
}
