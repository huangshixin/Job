编写一种算法，若M × N矩阵中某个元素为0，则将其所在的行与列清零。

 

示例 1：

输入：
[
  [1,1,1],
  [1,0,1],
  [1,1,1]
]
输出：
[
  [1,0,1],
  [0,0,0],
  [1,0,1]
]
示例 2：

输入：
[
  [0,1,2,0],
  [3,4,5,2],
  [1,3,1,5]
]
输出：
[
  [0,0,0,0],
  [0,4,5,0],
  [0,3,1,0]
]




class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        '''
        1、一个二维矩阵中，在扫描结果的区域找到为0的值
        可以先将 行 和 列分别存入哈希表，最后再统一删除
        '''
        row ,col= set(),set() #目的是去重
        m,n = len(matrix),len(matrix[0])
        l=[0]*n
        for i in range(m):
            for j in range(n):
                if matrix[i][j]==0:
                    row.add(i)
                    col.add(j)
        for i in row:
            matrix[i]=l
        #将某一列清除
        for j in col:
            for c in range(m):
                matrix[c][j]=0

        return matrix
