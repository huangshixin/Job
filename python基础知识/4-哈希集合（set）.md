    集合也叫‘哈希集合’：
    
    1、数据结构特点： 集合中不存在【重复】的元素；
    =============================================================================================================
    2、集合常用的几种方式：
    a = set()
    a.add():加入集合---没有顺序
    a.remove(element)---移除指定元素，---这里不是[index]
    a.pop() 丢出去第一个元素
    a.clear()清空集合
    
    A={1,2,3}
    B=[3,4,5]
    A.difference_update(B)删除集合A与序列B的重复元素
    A.intersection_update(B) 删除集合A与序列B的不重复元素
    
    =============================================================================================================
    
    例题：
    在一个数组中找到【只出现一次的两个值】，其余的元素均出现2次；并将其存入列表中输出
    '''解法
    先利用集合的特性，不断的存入到HashSet中；
    然后，当数据再一次出现时候，从Set中删除;
    return list（set（））
    '''
    def singleNumbers(self, nums: List[int]) -> List[int]:
        '''哈希集合'''
        lens  = len(nums)
        s = set()
        for i in range(lens):
            if nums[i] not in s:
                s.add(nums[i])
            else:
                s.remove(nums[i])
        return list(s)
