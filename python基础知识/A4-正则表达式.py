
1、RegEx 模块

      Python 提供名为 re 的内置包，可用于处理正则表达式。

      导入 re 模块：

      import re

2、正则表达式匹配


  txt = "China is a great country"
  x = re.search("^China.*country$", txt) 中间必须加上 【.* 表示可以出现多个任意字符，因为.表示,*表示前面的字符可以出现多次】
   
    ##############################################
    findall 	返回包含所有匹配项的列表
    search 	如果字符串中的任意位置存在匹配，则返回 Match 对象
    split 	返回在每次匹配时拆分字符串的列表
    sub 	用字符串替换一个或多个匹配项
    ##############################################
    
    
[] 	一组字符 	"[a-m]" 
\ 	示意特殊序列（也可用于转义特殊字符） 	"\d" 	
. 	任何字符（换行符除外） 	"he..o" 	
^ 	起始于 	"^hello" 	
$ 	结束于 	"world$" 	
* 	零次或多次出现 	"aix*" 	
+ 	一次或多次出现 	"aix+" 	
{} 	确切地指定的出现次数 	"al{2}" 	
| 	两者任一 	"falls|stays" 	
() 	捕获和分组 	    
      

  
 转义字符的匹配：

\A 	【如果】指定的字符位于字符串的开头，则返回匹配项 	"\AThe" 	试一试【判断是不是The为开头，是就返回匹配项】 <re.Match object; span=(0, 5), match='China'>
\b 	返回指定字符位于单词的开头或末尾的匹配项 	r"\bain"  r"ain\b" 	试一试 【\b在指定字符前 或者后都是可以的】
试一试
\B 	返回指定字符存在的匹配项，【但不在单词的开头（或结尾处）】 	r"\Bain" 【\b判断释放哎开头或结尾  ，而\B判断的正好相反】
r"ain\B" 	试一试
试一试
\d 	返回字符串包含数字的匹配项（数字 0-9） 	"\d" 	试一试  【只要存在0-9就返回】re.search("\d",txt2) ：实际上只返回查到的第一个元素的地址
\D 	返回字符串不包含数字的匹配项 	"\D" 	试一试
\s 	返回字符串包含空白字符的匹配项 	"\s" 	试一试
\S 	返回字符串不包含空白字符的匹配项 	"\S" 	试一试
\w 	返回一个匹配项，其中字符串包含任何单词字符
（从 a 到 Z 的字符，从 0 到 9 的数字和下划线 _ 字符） 	"\w" 	试一试
\W 	返回一个匹配项，其中字符串不包含任何单词字符 	"\W" 	试一试
\Z 	如果指定的字符位于字符串的末尾，则返回匹配项 	"Spain\Z" 	试一试
      

  
集合（Set）是一对方括号 [] 内的一组字符，具有特殊含义：
集合 	描述 	试一试
[arn] 	返回一个匹配项，其中存在指定字符（a，r 或 n）之一 	试一试
[a-n] 	返回字母顺序 a 和 n 之间的任意小写字符匹配项 	试一试
[^arn] 	返回除 a、r 和 n 之外的任意字符的匹配项 	试一试
[0123] 	返回存在任何指定数字（0、1、2 或 3）的匹配项 	试一试
[0-9] 	返回 0 与 9 之间任意数字的匹配 	试一试
[0-5][0-9] 	返回介于 0 到 9 之间的任何数字的匹配项 	试一试
[a-zA-Z] 	返回字母顺序 a 和 z 之间的任何字符的匹配，小写或大写 	试一试
[+] 	在集合中，+、*、.、|、()、$、{} 没有特殊含义，因此 [+] 表示：返回字符串中任何 + 字符的匹配项 	试一试  



#检测findall函数
a = re.findall("^C.*y$",txt) #返回的是一个列表['China is a great country']
print(a)
find_a = re.findall(".*a",txt) #^C ：如果匹配的第一个字符不是C，则直接返回空列表;  ['China is a grea']; .*表示任意多的字符，直到a；最远的那个a
print(find_a)


#search()函数
x = re.search("^China.*country$",txt)
y = re.search("\d",txt2) #
z = re.search('\s',txt)#查找字符串中的空白个数
print(x)
print(y)
print(z)
'''
<re.Match object; span=(0, 24), match='China is a great country'>
<re.Match object; span=(7, 8), match='4'>
<re.Match object; span=(5, 6), match=' '>
'''
  
  
  
  
#split()函数
str = "China is a great country"
x = re.split("\s", str) #就是\s是按照【空白字符】进行分割
y = re.split("\s",str,maxsplit=2)#可以指定最大的分割数
print(x)
print(y)
'''
['China', 'is', 'a', 'great', 'country']
['China', 'is', 'a great country']
'''



 

#替换函数sub

用数字 9 替换每个空白字符：

str = "China is a great country"
x = re.sub("\s", "9", str) #pattern  ，替换的值  ，字符串 【在sub函数中，封装了count，因此可以指定替换的次数】
print(x)

 
  
  
  
#在正则化中封装了匹配函数
Match 对象提供了用于取回有关搜索及结果信息的属性和方法：

    span() 返回的元组包含了匹配的开始和结束位置
    .string 返回传入函数的字符串
    group() 返回匹配的字符串部分
 
str = "China is a great country"
x = re.search(r"\bC\w+",txt) 在正则表达式中，为什么要加r，是为了避免 转义字符对模式的误解；
print(x.span()) 
x.string 返回传入函数的字符串
x.group() 它在查询的时候，会按照空格对其中的字符进行分组，然后查找到第一个组的字符串，并且返回

(0, 5)
China is a great country
China
      
