1、记录一个库中的方法

![图片](https://user-images.githubusercontent.com/38878365/191928269-3fdb7dc3-d375-4917-9ce8-4cf2da5c85a5.png)




      from collections import Counter
      Counter ：统计词频的 Counter() 函数，有了这个函数就不用手动的使用 for 循环来手动统计词频啦！
      
        nums.sort(key=lambda x:(-len(x),x))
          
         ⏰ 表示的是
         这个数组先按照len(x) 进行排序， -len(x) 表示，当遇到相同的时候，按照从【大到】小的顺序排
         之后，再按照x的顺序进行排序
        
        
        
        
        
        
        【文中要求按照，出现的频率次数进行排序，如果出现的频率次数是一致的，系统就按照从大到小的方式进行排序】
        
        sort(key=lambda x:(cnt[x],-x)
        给定一个元组，（cnt[x],-x) 表示按照 value值为cnt[x]先进行正序排序， 之后按照-x进行【逆序排序】 -------负号代表逆序
          x表示的是 key  
        
    
    
    
        from collections import Counter
          class Solution:
              def frequencySort(self, nums: List[int]) -> List[int]:

                  #计数 
                  '''
                  1、暴力解法---去计算count
                  2、非暴力 ---使用哈希表
                  '''
                  cnt = Counter(nums)
                  nums.sort(key=lambda x: (cnt[x], -x))
                  return nums
