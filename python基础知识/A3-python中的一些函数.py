1.id函数:
  
  id(c[0]):查看c[0]在内存中的地址；
    
    
2、python中字符串的find方法

    find()方法语法：

    str.find(str, beg=0, end=len(string)；

    参数

        str ： 指定检索的字符串
        beg ：开始索引，默认为0。
        end ：结束索引，默认为字符串的长度。
             
    【解释】
     1、查不到，返回 -1
     2、从beg位置开始查找；end可以不写
    str1 = "Runoob example....wow!!!"
    str2 = "exam";

    print (str1.find(str2))
    print (str1.find(str2, 5))#从下标5开始找，范围第一个元素的index
    print (str1.find(str2, 10))

    以上实例输出结果如下：

    7
    7
    -1
    
