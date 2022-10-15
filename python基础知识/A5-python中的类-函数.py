【1、在一个类中嵌套一个类】
def adder(x):
    def wrapper(y):
        return x + y
    return wrapper
adder5 = adder(5)#这个部分相当于对adder()这个方法的形参进行了初始化，但是这个方法中还包含了一个方法，且return 了这个嵌套方法的【方法名】
#因此，想要调方法中的wrapper需要对adder5进行初始化 ,也就是 adder5(6);
print(adder5(adder5(6)))  

【结果是16】
1、先调用adder5(6) 然后相当于y=6，加上adder(5)的初始化，所以结果是11
2、在11的基础上，调用adder5(11)，因此等于 11+5 =16





【filter内置函数】
filter函数是一个python的内置函数，用于【过滤序列】，过滤掉不符合条件的元素，返回一个迭代器对象

filter(function, iterable)

    function -- 判断函数。
    iterable -- 可迭代对象。

a = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
 
def is_odd(n):
    if n % 2 != 0:
        return True
    return False
 
new_list = filter(is_odd, a)  #要求is_odd是一个返回bool类型的函数，a是过滤掉列表【filter返回的是一个迭代器】

（1）可以使用list()对其进行数据转换
（2）也使用for i in new_list;







