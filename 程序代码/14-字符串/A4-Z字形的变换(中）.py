将一个给定字符串 s 根据给定的行数 numRows ，以从上往下、从左到右进行 Z 字形排列。

比如输入字符串为 "PAYPALISHIRING" 行数为 3 时，排列如下：

P   A   H   N
A P L S I I G
Y   I   R
之后，你的输出需要从左往右逐行读取，产生出一个新的字符串，比如："PAHNAPLSIIGYIR"。

请你实现这个将字符串进行指定行数变换的函数：



【总结】：
遇到需要往复变换索引的时候，可以考虑使用 往复指针
例如 flag = 1
if （某个条件）： flag = -flag
  i+=flag  去不断的修改指针角标




class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows<2:return s
        '''
        从上到下写入不同的字符，然后按照z字形进行排序，相当于加入在不同行后面
        '''
        res = ["" for _ in range(numRows)]#每行设置一个 空字符
        i,flag = 0,-1 #控制往复的
        for c in s:
            #从上往下需要自增，从下往上需要自减
            res[i]+=c
            if i==0 or i==numRows-1:flag=-flag
            #到达边界处需要反转
            i+=flag
        news = ''
        for j in res:
            news+=j
        return news
