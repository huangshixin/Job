无论是结构体指针还是正常的指针，其引用方式都是一致的；

1、既然命名称之为结构体指针：那么指针的定义方式应该是 struct *p；

(1)先定义一个结构体
struct student{
    string name;
    int age;
    int score;
};

(2)定义一个结构体指针
struct student *p=&s1  //你需要指明是哪一个结构体的指针，这里struct可以省略

################################################################
(3)引用结构体指针【结构体指针的引用 是通过  ->】
################################################################
cout<<p[0]->name<<p[0]->age<<p[0]->score<<endl;

使用for循环来遍历
value =sizeof(s1)/sizeof(s1[0])
for (int i=0;i<=value-1;i++){
  
  cout<<p[i].name
      <<p[i].age
      <<p[i].score<<endl;
}  
