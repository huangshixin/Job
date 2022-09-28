给定一个数组，包含从 1 到 N 所有的整数，但其中缺了两个数字。你能在 O(N) 时间内只用 O(1) 的空间找到它们吗？

以任意顺序返回这两个数字均可。

示例 1:

输入: [1]
输出: [2,3]

示例 2:

输入: [2,3]
输出: [1,4]



1、解题（1）
  给定一个数组，它的长度是本应该是N，但是现在缺了2位数字，arr = [1,2,3,...N] ,你需要找到其中的两个数字，时间复杂度是o（n） 空间复杂度是o（1）
  
  （1）既然数组的数据是1-N，那么利用数的求和公式 n*(n+1)/2 ---n*(n+1)>>1  右移相当于除以2 ；可以获得这个数组的求和的值
      拿（n*(n+1)>>1） - sum(nums) 获得 缺失的两数之和
    
    （2）两数是不相同的，因此取中位数  mid  ；mid》a  mid《b，a,b 为缺失的两个数
    
    计算 mid*(mid+1)>>1  也就是到中位数的求和，然后取arr中分别去剔除小于等于中位数的值；---【此时不可能为0，因为有一个值缺失了】
    从数组中继续进行求和遍历，找小于等于中位数之前的值，【目的是找到】 --
    
    
    找到了其中一个值，那么另一个值就是 mid- s;s代表找到的那个值



class Solution:
    def missingTwo(self, nums: List[int]) -> List[int]:
        m = len(nums)+2
        totalsum = m*(m+1)>>1#相当于除以2
        totalsum-=sum(nums)
        missingHalf  = totalsum>>1#中位数
        missingHalfSum = ((missingHalf + 1) * missingHalf) >> 1
        for i in nums:
            if i<=missingHalf:
                missingHalfSum-=i
        return [missingHalfSum,totalsum-missingHalfSum]
    
