//封装这个函数 
#include<iostream>
using namespace std;
#include<string>
//显示菜单界面
#define MAX 1000//定义一个宏常量  [需要定义一个宏常量]



void showMenu()//显示菜单 【定义不变的常规变量】
{
	cout << "*****************" << endl;
	cout << "**1、添加联系人**" << endl;
	cout << "**2、显示联系人**" << endl;
	cout << "**3、删除联系人**" << endl;
	cout << "**4、查找联系人**" << endl;
	cout << "**5、修改联系人**" << endl;
	cout << "**6、清空联系人**" << endl;
	cout << "**0、退出通讯录**" << endl;
	cout << "*****************" << endl;
}
//设计联系人结构体  【需要两个结构体，一个是人员信息，一个是最大存储数】
struct Person {
	string m_name;
	int m_sex;
	int m_age;
	string m_Phone;
	string m_addr;
};

//设计通讯录结构体
struct ADDressBooks
{
	//设置地址簿，其中需要存储人的结构体数组，以及最大的用户数； 因此数组的长度为宏常量
	struct Person personArray[MAX]; 
	int m_size;//通讯录中的人员个数
};

//添加联系人
【这一部分的需求，先判断是否满】
【考察】
1、需求，需要依据m_size进行判断是否添加
2、考察指针的引用  p->array[i].variances 

void addPerson(ADDressBooks * abs)//设定的是一个指针，在赋值的时候使用&abs进行传地址引用
{
	//传入一个地址，并使用指针接收
	if (abs->m_size == MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else {
		//添加具体联系人
		string name;
		cout << "请添加联系人姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_size].m_name = name;//往现在的最大值添加数据

		int sex;
		cout << "请添加联系人性别：" << endl;
		cin >> sex;
		abs->personArray[abs->m_size].m_sex = sex;

		int age=0;
		cout << "请添加联系人年龄：" << endl;
		cin >> age;
		abs->personArray[abs->m_size].m_age = age;


		string phone;
		cout << "请添加联系人电话：" << endl;
		cin >> phone;
		abs->personArray[abs->m_size].m_Phone = phone;//往现在的最大值添加数据

		string addr;
		cout << "请添加联系人地址：" << endl;
		cin >> addr;
		abs->personArray[abs->m_size].m_addr = addr;//往现在的最大值添加数据

		abs->m_size++;//让最大值更新
		cout << "添加成功" << endl;
	}
	system("pause");
	system("cls");
}

//显示联系人
1、考察循环遍历
2、指针的传参赋值
3、判断表达式  value ?"condition A":"condition B" ----
void showPerson(ADDressBooks* abs) {
	if (abs->m_size == 0)
	{
		cout << "通讯录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "姓名： " << abs->personArray[i].m_name << "\t";
			cout << "性别： " << (abs->personArray[i].m_sex == 1?"男":"女") << "\t";
			cout << "年龄： " << abs->personArray[i].m_age<< "\t";
			cout << "电话： " << abs->personArray[i].m_Phone << "\t";
			cout << "住址： " << abs->personArray[i].m_addr << "\t";
		}
	}
	system("pause");
	system("cls");
}

【考察】
1、循环遍历指针中的地址，指针如何自增  p->m_size++;

int isExit(ADDressBooks *abs,string name) {

	//存在，就删除；如果不存在则返回无此人员信息；[假设：姓名是唯一的]
	for (int i = 0; i < abs->m_size; i++)
	{
		if (abs->personArray[i].m_name == name)
		{
			return i;//只要查到就认为存在该值;返回数组的地址i
		}
	}
	return -1;
}
1、循环遍历指针中的地址，指针如何自减  p->m_size--;
void deletePerson(ADDressBooks* abs,int res)
{
	//通过传入一个地址i，直接对i进行删除即可;对数组中的数据进行改动的时候，需要进行前移
	for (int i = res; i < abs->m_size; i++)//内存空间怎么处理
	{
		abs->personArray[i] = abs->personArray[i + 1];
	}
	abs->m_size--;
	cout << "删除成功" << endl;
}

【清屏语句】
system("cls");
void searchPerson(ADDressBooks * abs)
{
	cout << "请输入需要查找的联系人姓名" << endl;
	string name;
	cin >> name;
	int value = isExit(abs, name);//abs是一个指针，指向一个地址，你现在需要把这个地址传给
	if ( value== -1)
	{
		cout << "查无此人" << endl;
	}
	else {
		cout << "\n" << endl;
		cout << "姓名： " << abs->personArray[value].m_name << "\t";
		cout << "性别： " << (abs->personArray[value].m_sex == 1 ? "男" : "女") << "\t";
		cout << "年龄： " << abs->personArray[value].m_age << "\t";
		cout << "电话： " << abs->personArray[value].m_Phone << "\t";
		cout << "住址： " << abs->personArray[value].m_addr << "\t" << endl;
		cout << "\n" << endl;
		cout << "查找成功" << endl;
	}
	system("pause");
	system("cls");
}
void  modifyPerson(ADDressBooks* abs)
{
	cout << "请输入需要查找的联系人姓名" << endl;
	string name;
	cin >> name;
	int value = isExit(abs, name);//abs是一个指针，指向一个地址，你现在需要把这个地址传给
	if (value == -1)
	{
		cout << "查无此人,不允许修改" << endl;
	}
	else {
		int select = 0;
		cout << "存在联系人" <<endl;
		cout << "" << "\n";
		cout << "请输入0或者非0的数字表示是否修改联系人姓名（0表示不修改，非0表示修改）" << endl;
		cin >> select;
		if (select != 0) {
			cout << "请输入联系人姓名" << endl;
			string mn;
			cin >> mn;
			abs->personArray[value].m_name = mn;
		}
		cout << "请输入0或者非0的数字表示是否修改联系人性别（0表示不修改，非0表示修改）" << endl;
		cin >> select;
		if (select != 0) {
			cout << "\n输入数据不为0，请输入联系人性别" << endl;
			int xb;
			cin >> xb;
			abs->personArray[value].m_sex = xb;
		}
		cout << "请输入0或者非0的数字表示是否修改联系人年龄（0表示不修改，非0表示修改）" << endl;
		cin >> select;
		if (select != 0) {
			cout << "\n输入数据不为0，请输入联系人年龄" << endl;
			int age;
			cin >> age;
			abs->personArray[value].m_age = age;
		}
		cout << "请输入0或者非0的数字表示是否修改联系人电话（0表示不修改，非0表示修改）" << endl;
		cin >> select;
		if (select != 0) {
			cout << "\n输入数据不为0，请输入联系人电话" << endl;
			string phone;
			cin >> phone;
			abs->personArray[value].m_Phone = phone;
		}
		cout << "请输入0或者非0的数字表示是否修改联系人住址（0表示不修改，非0表示修改）" << endl;
		cin >> select;
		if (select != 0) {
			cout << "\n输入数据不为0，请输入联系人住址" << endl;
			string addr;
			cin >> addr;
			abs->personArray[value].m_addr = addr;
		}
		cout << "修改完毕" << endl;
		system("pause");
		system("cls");
	}
}

【清除表数据】
	1、将结构体数组的长度直接置为0，因为在case 2的时候 有一个判断，如果指针指向的变量m_size为0，则指针指向的地址的值为空
void cleanPerson(ADDressBooks* abs) {
	abs->m_size = 0;
	cout << "联系人已清空" << endl;
	system("pause");
	system("cls");
}
int main(){

	//前面定义了通讯录和人员的结构体，这里需要开始创建结构体
	struct ADDressBooks abs; //创建结构体，并初始化当前的人员个数
	abs.m_size = 0;//初始化数据
	int select = 0;
	while (true) {
		showMenu();
		cout << "请重新输入0~6之间的数字" << endl;
		cin >>select;
		while (true)
		{
			if (select < 0 || select>6)
			{
				cout << "输入数据不属于0~6，请再次重新输入0~6之间的数字" << endl;
				cin >> select;
			}
			else {
				break;
			}
		}
		switch (select)
		{
		case 1://添加联系人
			addPerson(&abs);//一定要使用地址传递，你定义的add的形参是一个指针，因此赋值的时候需要使用&符号
			break;
		case 2://显示联系人
			showPerson(&abs);
			break;
		case 3://删除联系人
		{
			//当case中的语句过多的时候，需要添加{}来构成case块
			cout << "请输入一个删除人的姓名" << endl;
			string name;
			cin >> name;
			int value = isExit(&abs, name);
			if (value != -1) {
				//执行删除
				cout << "即将删除联系人" << "\n";
				deletePerson(&abs, value);
			}
			else
			{
				cout << "查无此人" << endl;
			}
			break;
		}
		case 4://查找联系人
		{
			cout<< "请输入一个查找人的姓名" << endl;
			string name;
			cin >> name;
			searchPerson(&abs);
			break;
		}
		case 5://修改联系人
		{
			cout << "请输入一个修改人的姓名" << endl;
			string name;
			cin >> name;
			modifyPerson(&abs);
			break;
		}
		case 6://清空联系人
			//把m_size直接置为0就可
			cleanPerson(&abs);
			break;
		case 0://exit
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
		}

	}

	system("pause");//请按任意键
	system("cls");//清屏
	return 0;
}
