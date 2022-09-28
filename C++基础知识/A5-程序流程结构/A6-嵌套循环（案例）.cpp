**********
**********
**********
**********
**********
**********
**********
**********
**********
**********

int main() {

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << "*" ; #endl 可以不加，因为加了后就自动换行了；
		}
		cout << "\n" << endl;

	}
	system("pause");
	return 0;
}




########################################################

【乘法口诀表】

#include<iostream>
using namespace std;
#include<math.h>
int main() {
	//打印乘法口诀表
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			cout << i*j<<"\t";
		}
		cout << "\n" << endl;

	}
	system("pause");
	return 0;
}



