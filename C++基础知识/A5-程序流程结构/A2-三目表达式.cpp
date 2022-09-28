表达式1？表达式2：表达式3

#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int b = 1;
	string c =( a > b ? "string(a)" : "string(b)");
	(a < b ? a : b) = 100;//通过不了因此，就不执行了
	cout << a << endl;
	cout << c << endl;
	system("pause");
	return 0;
}
