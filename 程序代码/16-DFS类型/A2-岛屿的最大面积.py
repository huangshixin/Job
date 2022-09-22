'''
1、第一步还是【判断】是不是越界
2、第二步，开始查询是不是dfs的方式
3、循环查
'''


给定一个包含了一些 0 和 1 的非空二维数组 grid，一个岛屿是一组相邻的 1（代表陆地），这里的「相邻」要求两个 1 必须在水平或者竖直方向上相邻。你可以假设 grid 的四个边缘都被 0（代表海洋）包围着。

找到给定的二维数组中最大的岛屿面积。如果没有岛屿，则返回面积为 0 。











class Solution:
    def isPass(self,grid, r, c):
        '''
        判断是否角标越界
        '''
        m, n = len(grid), len(grid[0])
        value = 0 <= r and r <= m-1 and 0 <= c and c <= n-1
        return value

    def DFS(self,grid, r, c):

        if not self.isPass(grid, r, c):
            # 当越界的时候，就直接结束
            return 0
        if grid[r][c] != 1:
            # 不需要遍历
            return 0
        grid[r][c] = 2  # 每次遍历后，如果不是1 ，就说明不是海洋或者已经遍历过，则直接赋为2

        return 1+self.DFS(grid,r, c + 1)+self.DFS(grid,r,c-1)+ self.DFS(grid,r - 1, c)+ self.DFS(grid,r + 1, c)# 1表示此时这个值为1，之后从四周去寻找，如果没有就返回null

    def maxAreaOfIsland(self, grid) -> int:
        res = 0
        for r in range(len(grid)):
            for c in range(len(grid[0])):
                if grid[r][c] == 1:
                    res = max(res, self.DFS(grid,r, c))
        return res
