#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int b = 5;
	switch (a-b) {
	case 1:cout << "1" << endl; break;
	case 5:cout <<"5"<<"\t" << sizeof("5") << endl; break;
	default:break;
	}
	system("pause");
	return 0;
}



【switch 比if速度快：】

switch（条件语句）{
 case 结果： 执行语句;break;
 case 结果2：执行语句;break;
 ...
 default:break;  
}  



【根据实际的情况执行语句】
