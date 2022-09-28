![图片](https://user-images.githubusercontent.com/38878365/192751216-68fd02d2-60a1-4547-96ae-79eefaccade0.png)
      #include<iostream>
      using namespace std;

      int main() {
        int i = 0;

        while (i <= 10) {
          cout << "输出i=" << i << endl;
          i++;
        }
        system("pause");
        return 0;
      }
                                     
                                     
                                     
案例练习：
                                     
      系统随机生成一个1到100的数字，玩家进行猜测，如果猜错，提示玩家数字过大或者过小，如果对了就退出游戏：
                                     
      【思考】
       1、需要while循环，需要从控制台输入数据，需要内置一个数据
       2、只有满足条件才能结束，不然继续循环；
                                     
![图片](https://user-images.githubusercontent.com/38878365/192753065-61065b04-dda6-40d9-887f-7c27dbbb84cf.png)

          #include<iostream>
          using namespace std;

          int main() {
            int i = 56;


            while (1) {
              int a = 0;
              cout << "请输入一个数字" << endl;
              cin >> a;
              if (a == i) {
                cout << "猜对了，游戏结束" << endl;
                break;
              }
              else if (a > i) {
                cout << "随机数比输入的数字小，请再次输入数字" << endl;
              }
              else {
                cout << "随机数比输入的数字大，请再次输入数字" << endl;
              }

            }
            system("pause");
            return 0;
          }                                     
