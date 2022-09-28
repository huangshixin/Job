      for (int i=0;i<condition;i++){

      }




      #include<iostream>
      using namespace std;
      #include<math.h>
      int main() {

        for (int j = 0; j <= 10; j++) {
          cout << j << endl;
        }
        system("pause");
        return 0;
      }




￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥￥


#include<iostream>
using namespace std;
#include<math.h>
int main() {
	/*
	从1-100个数字中，如果个位是7or十位数是7，或者是7的倍数，则打印敲桌子
	否则，直接打印
	*/
	for (int j = 1; j <= 100; j++) {

		if (j < 10) {
			if (j == 7) {cout << "敲桌子=" << j << endl;}
			else {cout << "直接输出的数=" << j << endl;}
		}
		else {
			int a = (j / 10) % 10;
			int b = (j % 10);
			if (a != 7 && (b != 7)) {cout << "直接输出的数=" << j << endl;}
			else{ cout << "敲桌子=" << j << endl; }
		}
	}
	system("pause");
	return 0;
}


【条件分析】
1、如果这个数大于10，需要判断十位数 和 个位数 
  如果十位数或者个位数有一个为7就直接输出；
2、如果小于10，则判断是否等于7
