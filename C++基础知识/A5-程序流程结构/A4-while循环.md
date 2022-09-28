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
                                     
                                     
####################################################################################################################################                                     
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

  ####################################################################################################################################       
      
      
      
  【do ... while(条件)循环】
      do{
      //先执行一次，直到满足while的条件，跳出循环
      }while(条件)
      
      当条件不满足的时候，循环结束；
      
      
  ####################################################################################################################################  
      
      案例练习：
      
      
      水仙花数是只一个3位数，它的每个位上的数字的3次幂之和等于它的本身；
      eg： 153 = 1^3 + 5^3 + 3^3
      
      计算三位数中所有的水仙花数：
      
      
      #include<iostream>
      using namespace std;
      #include<math.h>
      int main() {
            //需求 计算水仙花数
            int a = 0; int b = 0; int c = 0;/*用于承接,三个位置上的数*/
            int i = 999;
            do {
                  a = i % 10;//个位
                  b = (i / 10) % 10;
                  c = (i / 100) % 10;
                  int value = pow(a,3) + pow(b,3) +pow(c,3);
                  /*cout << pow(a, 3) << "\t" << pow(b, 3) << "\t" << pow(c, 3) << endl;
                  cout << value << endl;*/
                  if (value == i) {
                        cout << "水仙花数=" << i << endl;
                  }
                  --i;
                  /*cout << "sad=" << i << endl;*/
            } while (i>100);
            system("pause");
            return 0;
      }

      
          
  ####################################################################################################################################   
      
![图片](https://user-images.githubusercontent.com/38878365/192770852-c668d115-dc9f-484a-8e89-3bf4f7d659b9.png)
      
