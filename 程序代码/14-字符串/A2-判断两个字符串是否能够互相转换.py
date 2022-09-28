给定两个字符串 s1 和 s2，请编写一个程序，确定其中一个字符串的字符重新排列后，能否变成另一个字符串。

示例 1：

输入: s1 = "abc", s2 = "bca"
输出: true 

示例 2：

输入: s1 = "abc", s2 = "bad"
输出: false


【思路】
1、将两个字符串排列成二维矩阵的形式，如果匹配上，则让那一列不在【匹配】，如何让那一列不在匹配呢，直接把这一列加入【集合】中，
     a  b  c 
  b
  a
  c
2、在双重for循环结束后，直接计算集合的长度，如果恰好都匹配上 【长度等于字符串的长度】，那么直接true ，否则false

【具体思路】
1、计算两个字符串的长度，如果长度不一致 false
2、设置一个集合，用于存放即将入集合的列
双重for循环，这时候相当于两个指针，分别对两个字符串在扫描，如果相同的列匹配过，则直接跳过；
【如果没有匹配过且两个字符串中的某两个值匹配】，那么把这一列加入集合，并且该次循环结束；

时间复杂度o（n^2）
空间复杂度o（n）


class Solution:
    def CheckPermutation(self, s1: str, s2: str) -> bool:
        '''
        字符串匹配
        1、思考二维矩阵
        (1)暴力 使用字典 计数
        （2）使用dp的办法，使用空间换 时间
        '''
        res = set()
        m,n = len(s1),len(s2)
        if m!=n:return False
        for i in range(m):
            for j in range(n):
                if s1[i]==s2[j] and (j not in res):
                    #匹配到，直接把这一列直接忽略（假定按照列忽略）、因为行在变换
                    res.add(j)
                    break
        return True if len(res)==m else False
