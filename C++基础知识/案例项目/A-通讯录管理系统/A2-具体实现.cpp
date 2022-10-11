//封装这个函数 
#include<iostream>
using namespace std;
#include<string>
//显示菜单界面
#define MAX 1000//定义一个宏常量
void showMenu()//显示菜单
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
//设计联系人结构体
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
	struct Person personArray[MAX];
	int m_size;//通讯录中的人员个数
};

//添加联系人
void addPerson(ADDressBooks * abs)
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
			cout << "年龄： " << abs->personArray[i].m_age<< endl;
			cout << "电话： " << abs->personArray[i].m_Phone << endl;
			cout << "住址： " << abs->personArray[i].m_addr << endl;
		}
	}
	system("pause");
	system("cls");
}

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
				cout << "请再次重新输入0~6之间的数字" << endl;
				cin >> select;
			}
			else {
				break;
			}
		}
		switch (select)
		{
		case 1://添加联系人
			addPerson(&abs);//一定要使用地址传递
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
			break;
		case 5://修改联系人
			break;
		case 6://清空联系人
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
