Adaboost算法：
![图片](https://user-images.githubusercontent.com/38878365/182321535-9503ac71-b66c-4d2d-8c10-5eae9b36a9e9.png)


先从最初训练集训练出一个基学习器，再根据基学习器的表现对训练样本分布进行调整，使得先前基学习器做错的训练样本在后续受到更多的关注，

然后基于调整后的样本分布来训练下一个基学习器；如此重复，直至学习器数目到达事先制定的值T，最终将这个T 个基学习器进行加权结合。


具体的流程：

step 1： 首先初始化训练数据的权值分布。每个训练样本都赋予相同的初始化权值


![图片](https://user-images.githubusercontent.com/38878365/182319220-f4d76e2b-f084-4338-923c-87c9c188ef80.png)


step 2： 进行多轮迭代，用m=1，2，3----M表示迭代多少轮

    1、使用具有权值分布D的训练数据集学习，得到基本分类器（选取让误差率最低的阈值来设计基本的分类器）
    
   ![图片](https://user-images.githubusercontent.com/38878365/182323719-11cdd99f-cc09-4aa3-b59d-b360fcf8a093.png)

step 3: 计算Gm（x）的系数，alpha（m）表示Gm（x）在最终分类器中的重要程度

![图片](https://user-images.githubusercontent.com/38878365/182320933-f77fe00b-9c06-4f87-8d20-12442c3b0f09.png)

![图片](https://user-images.githubusercontent.com/38878365/182323838-030c8ce2-7884-40a1-b2bc-e8584eff798f.png)


![图片](https://user-images.githubusercontent.com/38878365/182321001-23754589-cb0c-40d9-babe-6e247fb4ddea.png)

![图片](https://user-images.githubusercontent.com/38878365/182321030-b6c7b7c9-68e7-4f75-b9a2-f57794b1d072.png)

