顺序结构

1、从头到尾的执行语句





选择结构

【单条if】
   根据条件的符合程度，选择是否执行
   //if条件后面，不要加上封号
   	if (a > 20) {
		cout << "ddddddddddd" << endl;
	}


【if-else】
	if (a > 35) {
		cout << "ddddddddddd" << endl;
	}
	else
	{
		cout << "bbbbb" << endl;
	}


【多条件语句】
	int a =30;
	int b=4;
	if (a > 35) {
		cout << "ddddddddddd" << endl;
	}
	else if (b<3)
	{
		cout << "bbbbb" << endl;
	}
	else {
		cout << "请输入整数型数据a:" << a % b << endl;
	}



【嵌套】
#include <iostream>
using namespace std;
#include <string>
#define Day  100;
int main() {
	//整型输入
	int a =30;
	int b=4;
	if (a <35) {
		if (a = 30) {//这就显示 嵌套
			cout << "ddddddddddd" << endl;
		}
	}
	if (b<3)
	{
		cout << "bbbbb" << endl;
	}
	else {
		cout << "请输入整数型数据a:" << a % b << endl;
	}
	

	system("pause");
	return 0;
}



循环结构



