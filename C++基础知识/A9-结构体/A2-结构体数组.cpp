语法
struct 结构体名字 结构体数组名字[length]={
  {},
  {},
  ...
}

1、定义结构体【和正常定义的结构体是一致的】
        strcut student{
          string name;
          int age;
          int score;
        };

2、创建结构体数组【因为已经定义结构体了，因此在创建结构体数组的时候，按照其中的元素进行赋值即可】
struct student sarr[10]={
    {'name',19,45},//分别表示名字、年龄、成绩
    {'z',12,67},//按照索引地址进行查找，可以进行修改
    {'sda',34,95},
    ...
};

3、给结构体中的值赋予值
【结构体数组的访问方式，依旧按照数组的形式进行访问】
sarr[0].name = 'wu'；相当于通过索引的地址找到第一个数组元素所在的位置，然后对其中的’姓名‘字段进行修改；

4、遍历结构体数组

for循环即可
