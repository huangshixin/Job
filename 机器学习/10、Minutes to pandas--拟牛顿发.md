https://pandas.pydata.org/pandas-docs/stable/user_guide/dsintro.html

什么是牛顿法？

由于连续可微的函数不一定都有根（就是说f（x） ！= 0） ，如果f（x）在此处n阶可导，那么为了找到它的近似根，牛顿法采用了该函数在x=x0处的泰勒展开式；
此后选择其展开式的【线性部分】

此后，我们找到x与x0的关系表达式子，但是由于对 [公式] 的近似只是一阶展开，因此 [公式] 并非 [公式] 的解，只能说 [公式] 比 [公式] 更接近0。于是，考虑迭代求解：

![图片](https://user-images.githubusercontent.com/38878365/180673947-69d7e082-d386-40f5-88b5-58d12fa98938.png)

![图片](https://user-images.githubusercontent.com/38878365/180674311-b9f6c343-589c-490c-9745-652bb4c187b7.png)

牛顿法的缺点： 每次计算需要一直求解海塞矩阵；增加了运算的复杂度



拟牛顿法？
优点：
  牛顿法虽然收敛速度快，但是需要【计算海塞矩阵的逆矩阵】 ，而且有时目标函数的【海塞矩阵无法保持正定】，从而使得牛顿法失效。【它不需要二阶导数的信息】
  1、需要求海塞矩阵的逆 2、海塞矩阵不一定能正定
  
  ![图片](https://user-images.githubusercontent.com/38878365/180674625-366879ec-67ef-46d8-9bbc-c462b880e136.png)


![图片](https://user-images.githubusercontent.com/38878365/180674677-edb54a2b-d4a0-4062-bcd0-4421c812d0c4.png)
