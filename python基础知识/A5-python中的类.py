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
