    Python3中的input()会将接受的数据返回为一个string类型，如果一行中有多个数据的话，则需要使用split()进行切割。split()切割后返回一个列表。
    
    
    # 输入为： 1 2 3 4 5
    a = input().split() # split()默认以空字符为分隔符，包括空格、换行(\n)、制表符(\t)等
    # a = ['1', '2', '3', '4', '5']

    # 输入为：1,2,3,4,5
    b = input().split(',') # 以逗号为分隔符
    # b = ['1', '2', '3', '4', '5']
    
    #转换类型
    g = list(map(int, input().split())) # 一步到位
    
    
    
    1.2 三种情况的输入数据
    情况1: 多行输入，同时未指定用例的个数，例子1

    while True:
        try:
            data = input()
            solve(data) # 核心函数
        except:
            break
            
            
            
            
            
    情况2: 多行输入， 指定用例个数， 例子2

    n = int(input()) 获取用例个数
    for _ in range(n):
        data = input()
        solve(data) # 核心函数
        
        
        
        
    情况3: 多行输入，指定某个条件退出，例子3

    while True:
        data = input()
        if judge(data): # 判断
            break
        solve(data)
        
        
       
       
       
    ####################################################################################   
    Python3的输出主要靠print()函数，就是把结果打印至终端。需要对print()函数的sep和end两个参数有一定的了解，可以查看菜鸟教程
    
    情况1: 输出单个数字

    # 输出 a (a = 1)
    print(a)
    情况2: 输出多个数字，同时要求以分隔符隔开

    # 输出 a=1, b=2, c=3
    print(a, b, c) # print默认以空格为分隔符
    # output：1 2 3
    print(a, b, c, sep=',') # 以逗号为分隔符
    # output：1,2,3    
    
    
   # 最终结果 res = [1, 2, 3]
    # 1. 直接输出列表
    print(res)
    # 2. 输出列表, 每个元素单独输出
    for i in range(len(res)):
        print(res[i])
    #output: 1
    #        2
    #        3

    # 3. 输出列表，每个元素单独输出，同时还需要在同一行输出, 以空格分隔
    for i in range(len(res)):
        print(res[i], end=' ')  # end的默认值是'\n'，即换行
        # output: 1 2 3 
    情况4: 将字符列表合成一个字符串，需要用到join()函数

    # res = ['a', 'b', 'c']
    # 输出是一个字符串
    print("".join(res))
    # output: abc

    # 输出是一个字符串，且用 * 号分隔
    print("*".join(res))
    # output: a*b*c
    # 如果用 print(res[i], end = '*') 的话，输出就是 a*b*c*了，在末尾还多了一个* 
