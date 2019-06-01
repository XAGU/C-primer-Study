// 关于decltype.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <algorithm>

using namespace std;
/*void change(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
int _tmain(int argc, _TCHAR* argv[])
{
	string word;
	while (getline(cin,word))
	if (!word.empty())
	cout << word << endl;
	else
	cout << "null" << endl;

	string word;
	while (getline(cin, word))
	if (word.size()>5)
	cout << word << endl;
	else
	cout << "null" << endl;

	string word_1("Hello");
	string word_2(" World");
	string word_3 = word_1 + word_2;
	for (auto c:word_3)
	cout << c << endl;
	cout << word_3+"xagu"+"dsdds" << endl;


	int c[3]{1, 2, 3};
	for (auto c : c)
	cout << c << endl;
	string s("Hello World?????????");
	decltype(s.size()) count = 0;
	for (auto c:s)
	if (ispunct(c))
	count++;
	cout << count << endl;

	string s("Hello World?????????");
	for (auto &c : s)
	c=toupper(c);
	cout << s << endl;

	string s("Hello World?????????");
	if (!s.empty())
	cout << s[3] << endl;

	string s("Hello World?????????");
	for (decltype(s.size()) i = 0; i != s.size()&&!isspace(s[i]); i++)
	s[i]=toupper(s[i]);
	cout << s << endl;

	const string hexdigits = "0123456789ABCDEF";
	string result;
	string::size_type n;
	while (cin >> n)
	if (n<hexdigits.size())
	result += hexdigits[n];
	cout << result << endl;

	string s;
	cout << s[0] << endl;

	vector<int> arr(100);
	int i=0;
	for (auto &a : arr)
	{
	a = i;
	i++;
	}
	for (auto a : arr)
	cout << a << endl;
	string word;
	vector<string> text;
	while (cin >> word)
	{
	text.push_back(word);
	}


	string s("Hello World?????????");
	for (auto it = s.begin(); it != s.end() && *it != ' '; it++)
	*it = toupper(*it);
	cout << s << endl;

	vector<string> text{"qwerty","wqwqwq","qq"};
	for (auto it = text.cbegin(); !it->empty() && it != text.cend(); ++it)
	cout << *it<<endl;

	vector<int> num{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	for (auto n = num.begin(); n != num.end(); n++)
	{
	*n *= 2;
	cout << *n << ',';
	}

	int arr[10],arr2[10];
	int val = 0;
	for (auto &i : arr)
	{
	i = val;
	++val;
	}
	for (auto i : arr)
	{
	arr2[i] = i;
	}
	for (auto i : arr2)
	{
	cout << i <<' ';
	}
	vector<int> arr;
	for (decltype (arr.size()) i = 0; i < 10; i++)
	{
	arr.push_back(i);
	}
	for (auto i : arr)
	{
	cout << i << ' ';
	}

	const  int sz = 5;
	int arr[sz] = { 1, 2, 3, 4, 5 };
	int* ip = arr;
	int* ip2 = ip + 4;


	const  int sz = 5;
	int arr[sz] = { 1, 2, 3, 4, 5 };
	int* p1 = &arr[1];
	int* p2 = &arr[1];
	p2 += p2 - p1;

	const  int sz = 5;
	int arr[sz] = { 1, 2, 3, 4, 5 };
	int* p1 = arr;
	int* p2 = (arr + sz);
	while (p1 < p2)
	{
	*p1 = 0;
	p1++;
	}
	for (auto i : arr)
	{
	cout << i << ' ';
	}

	const  int sz = 5;
	int arr[sz] = { 1, 2, 3, 4, 5 };
	vector<int> arr2(begin(arr),end(arr));
	int arr3[sz];
	for (int i = 0; i < sz; i++)
	{
	arr3[i] = arr2[i];
	}

	int ia[3][4] = { 0,1,2,3,4,5,6,7,8,9,10,11};
	for (auto &p : ia)
	{
	for (auto q : p)
	{
	cout << q << endl;
	}
	}

	int ia[3][4] = { 0,1,2,3,4,5,6,7,8,9,10,11};
	for (int i = 0; i < 3; i++)
	{
	for (int j=0; j < 4; j++)
	{
	cout << ia[i][j] << ' ';
	}
	}

	int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	for (auto p = begin(ia); p != end(ia); p++)
	{
	for (auto q = begin(*p); q != end(*p); q++)
	{
	cout << *q << ' ';
	}
	}

	double a = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
	int b = -30 * 3 + 21 / 5;

	//5.5
	int grade;
	string myrank;
	const vector<string> rank{ "F", "D", "C", "B", "A", "A++" };
	cout << "Input you grade:";
	cin >> grade;
	if (grade < 60)
	{
		myrank = rank[0];
	}
	else
	{
		myrank = rank[(grade-50) / 10];
		if (grade != 100)
		{
			if (grade % 10>7)
			{
				myrank += '+';
			}
			else if (grade % 10 < 3)
			{
				myrank += '-';
			}
		}

	}
	cout << myrank << endl;


	//5.6
	int grade;
	string myrank;
	const vector<string> rank{ "F", "D", "C", "B", "A", "A++" };
	cout << "Input you grade:";
	cin >> grade;
	myrank = (grade<60) ? myrank = rank[0] : (grade == 100) ? rank[(grade - 50) / 10] : (grade % 10>7) ? rank[(grade - 50) / 10] + '+' : (grade % 10 < 3) ? rank[(grade - 50) / 10] + '-' : rank[(grade - 50) / 10];
	cout << myrank << endl;

	//5.19
	string s1,s2;
	do
	{
		cout << "请输入2个字符串" << endl;
		cin >> s1 >> s2;
		if (s1.size() > s2.size())
		{
			cout << "较长的字符串是:" << s1 << endl;
		}
		else
			cout << "较长的字符串是:" << s2 << endl;
	} while (cin);


	//5.23 5.24 5.25
	int i, j;
	while (cin >> i >> j)
	{
		try
		{
			if (j == 0)
				throw invalid_argument("除数不能为0");
			cout << i / j << endl;
		}
		catch (invalid_argument)
		{
			char c;
			cout << "\n输入无效，请输入Y或N" << endl;
			cin >> c;
			if (!cin || c == 'n')
				break;
		}

	}

	string str;
	cin >> str;
	cout << str << endl;

	class C
	{
	public:
		C()
		{
			cout << ++c << endl;
		}
		static int Getc()
		{
			return c;
		}
		~C()
		{
			cout << c-- << endl;
		}

	private:
		static int c;
	};

	int C::c = 0;
	void main()
	{
		C c1, c2, c3, c4, c5;
		cout << C::Getc() << endl;
	}

	//6.10
	int a = 1;
	int b = 2;
	cout << a << "," << b << endl;
	change(&a,&b);
	cout << a << "," << b << endl;
	return 0;


}*/

//6.17
/*
int is_upper(string& s)
{
	for (auto c:s)
	{
		if (isupper(c))
			return 1;
	}
	return 0;
}
int to_lower(string& s)
{
	for (auto& c : s)
	{
		if (isupper(c))
			c = c + 32;
	}
	return 0;
}

6.18
int main()
{
	string s1;
	cin >> s1;
	cout << (is_upper(s1)?"有":"没有") << endl;;
	cout << (to_lower(s1),s1)<<endl;
	return 0;
}
int main(int argc, char *argv[])
{
	string str;
	for (int i = 1; i !=argc; ++i)
	{
		str += argv[i];
	}
	cout <<str<< endl;
	return 0;
}*/


//6.17
/*
int is_upper(string& s)
{
	for (auto c:s)
	{
		if (isupper(c))
			return 1;
	}
	return 0;
}
int to_lower(string& s)
{
	for (auto& c : s)
	{
		if (isupper(c))
			c = c + 32;
	}
	return 0;
}
6.25
int main()
{
	string s1;
	cin >> s1;
	cout << (is_upper(s1)?"有":"没有") << endl;;
	cout << (to_lower(s1),s1)<<endl;
	return 0;
}
int main(int argc, char *argv[])
{
	string str;
	for (int i = 1; i !=argc; ++i)
	{
		str += argv[i];
	}
	cout <<str<< endl;
	return 0;
}

//6.28
int initializer_list_test(initializer_list<int> lst)
{
	int sum = 0;
	for (const auto i : lst)
	{
		sum = sum + i;
	}
	return sum;
}

int main()
{
	cout << initializer_list_test({ 1,2,3,4,5 }) << endl;
	return 0;
}
//6.33
int print_vector(int);
int main()
{
	print_vector(0);
	return 0;
}

int print_vector(int i)
{
	vector<int> vi={1, 2, 3, 4, 5, 6, 7};
	cout <<vi[i]<< endl;
	if (i < vi.size()-1)
	{
		i++;
		print_vector(i);
	}
	else
	{
		return 0;
	}

}


//6.36  6.37
//普通定义返回数组的引用且该数组包含10个string类型对象
string (&fun1())[10];
//使用typedef定义返回数组的引用且该数组包含10个string类型对象
typedef string arr1[10];
arr1& fun2();
//使用decltype定义返回数组的引用且该数组包含10个string类型对象
string odd[10] = {"1"};
decltype(odd) &fun3();
////使用后置返回类型定义返回数组的引用且该数组包含10个string类型对象
auto fun4()->string(&)[10];

int main()
{
	return 0;
}


//6.38
int odd[] = { 1,3,5,7,9 };
int even[] = { 0,2,4,6,8 };
decltype(odd) &arrPtr(int i)
{
	return (i % 2) ? odd : even;
}

//6.54
int (*fun)(int i,int j);
vector<decltype(fun)> funArr;



//6.55 6.56
float add(int i, int j)
{
	return i + j;
}

float sub(int i, int j)
{
	return i - j;
}

float mult(int i, int j)
{
	return i * j;
}

float dive(int i, int j)
{
	return i / j;
}


int main()
{
	float (*fun)(int, int);
	vector<decltype(fun)> fv = { add,sub,mult,dive };
	for (auto &i : fv)
	{
		cout<< "函数地址:" << i << " 调用结果" << i(4,2) << endl;

	}
	return 0;
}

struct Sales_data
{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;//收入
};
int main()
{
	Sales_data total;//此部分和第一章21页的内容相同
	if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
			if (total.bookNo == trans.bookNo) {
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;//第三题的使用修改之处
			}
			else {
				cout << total.bookNo << " " << total.units_sold << " "
					<< total.revenue << endl;
				total = trans;
			}
		}
		cout << total.bookNo << " " << total.units_sold << " " << total.revenue
			<< endl;
	}
	else {
		std::cerr << "No data?!" << std::endl;
		return -1;
	}
	return 0;
}

//test
int main()
{
	if (MessageBoxA(0, "hello world", "test", MB_YESNO) == IDYES)
	{
		MessageBoxA(0, "你选择了YES", "提示", MB_OK);
	}
	else
	{
		MessageBoxA(0, "你选择了NO", "提示", MB_OK);
	}
	return 0;
}

//7.23 7.24 7.27 构造函数
class  Screen
{
public:
	typedef string::size_type pos;
	 Screen()=default;
	 Screen(pos ht, pos wh, char c) :height(ht), width(wh), contents(ht*wh, c)
	 {

	 }
	 Screen(pos ht, pos wh):height(ht),width(wh),contents(ht*wh,' ')
	 {

	 }
	 char get() const
	 {
		 return contents[cursor];
	 }
	 char get(pos ht, pos wh) const;
	 Screen &move(pos r, pos c);
	 Screen &set(char c);
	 Screen &set(pos ht, pos wh, char c);
	 Screen &display(ostream &os)
	 {
		 do_display(os);
		 return *this;
	 }
	 const Screen &display(ostream &os) const
	 {
		 do_display(os);
		 return *this;
	 }
	~ Screen();

private:
	pos cursor = 0;//光标位置
	pos height = 0, width = 0;//屏幕高和宽
	string contents;
	void do_display(ostream &os) const
	{
		os << contents;
	}
};

 char Screen::get(pos ht, pos wh) const
 {
	 pos row = ht * width;
	 return contents[row + wh];
 }

 Screen & Screen::move(pos r, pos c)
 {
	 pos row = r * width;
	 cursor = row + c;
	 return *this;
 }

 Screen & Screen::set(char c)
 {
	 contents[cursor] = c;
	 return *this;
 }

 Screen & Screen::set(pos r, pos col, char c)
 {
	 contents[r*width + col] = c;
	 return *this;
 }

 Screen::~ Screen()
{
}

 int main()
 {
	 Screen myScreen(5,5,'x');
	 myScreen.move(4, 0).set('#').display(cout);
	 cout << "\n";
	 myScreen.display(cout);
	 cout << "\n";
	 return 0;
 }


//7.31 类类型
class X;
class Y;

class X
{
public:
	X();
	~X();

private:
	Y *y1;
};
class Y
{
public:
	Y();
	~Y();
private:
	class X x1;
};
int main()
{
	return 0;
}

//7.32 友元函数，类的作用域
class  Screen
{
public:
	typedef string::size_type pos;
	Screen() = default;
	Screen(pos ht, pos wh, char c) :height(ht), width(wh), contents(ht*wh, c)
	{

	}
	Screen(pos ht, pos wh) :height(ht), width(wh), contents(ht*wh, ' ')
	{

	}
	char get() const
	{
		return contents[cursor];
	}
	char get(pos ht, pos wh) const;
	Screen &move(pos r, pos c);
	Screen &set(char c);
	Screen &set(pos ht, pos wh, char c);
	Screen &display(ostream &os)
	{
		do_display(os);
		return *this;
	}
	const Screen &display(ostream &os) const
	{
		do_display(os);
		return *this;
	}
	pos size() const;
	friend class Windows_mgr;
	~Screen();

private:
	pos cursor = 0;//光标位置
	pos height = 0, width = 0;//屏幕高和宽
	string contents;
	void do_display(ostream &os) const
	{
		os << contents;
	}
};

char Screen::get(pos ht, pos wh) const
{
	pos row = ht * width;
	return contents[row + wh];
}

Screen & Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	return *this;
}

Screen & Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

Screen & Screen::set(pos r, pos col, char c)
{
	contents[r*width + col] = c;
	return *this;
}

Screen::pos Screen::size() const
{
	return height*width;
}

Screen::~Screen()
{
}


class Windows_mgr
{
public:
	//窗口中每个屏幕的编号
	using ScreenIndex = vector<Screen>::size_type;
	//按照编号将指定的Screen重置为空白
	void clear(ScreenIndex);
	ScreenIndex addScreen(const Screen&);
	Windows_mgr();
	~Windows_mgr();

private:
	vector<Screen> screens = { Screen(24,80,' ') };

};

void Windows_mgr::clear(ScreenIndex i)
{
	Screen &s = screens[i];
	s.contents = string(s.height*s.width, ' ');
}

Windows_mgr::ScreenIndex Windows_mgr::addScreen(const Screen& s)
{
	screens.push_back(s);
	return screens.size() - 1;
}

Windows_mgr::Windows_mgr()
{
}

Windows_mgr::~Windows_mgr()
{
}

int main()
{
	Screen myScreen(5, 5, 'x');
	myScreen.move(4, 0).set('#').display(cout);
	cout << "\n";
	myScreen.display(cout);
	cout << "\n";
	return 0;
}

//7.34 名字查找与类的作用域
int height;
class Screen
{
public:
	typedef string::size_type pos;
	void dummy_fcn(pos height)
	{
		cursor = width * this->height;
		cursor = width * Screen::height;
	}
	Screen();
	~Screen();

private:
	pos cursor = 0;
	pos height = 0, width = 0;
};

Screen::Screen()
{
}

Screen::~Screen()
{
}


//7.35
typedef string Type;
Type initVal();
class Exercise
{
public:
	typedef double Type;
	Type setVal(Type);
	Type initVal();
	Exercise();
	~Exercise();

private:
	int val;
};

Exercise::Type Exercise::setVal(Type parm)
{
	val = parm + initVal();
	return val;
}

Exercise::Exercise()
{
}

Exercise::~Exercise()
{
}

int main()
{

	return 0;
}
//成员初始化的顺序
struct  X
{
	X(int i, int j) :base(i), rem(base%j)//初始化列表的顺序一定要和定义变量的顺序一样，否则会出现错误
	{
		cout << base<<' '<<rem;
	}
	int  base, rem;//print：5，1
	int  rem，base;//print：5，0   error

};
int main()
{
	X q(5,2);
	return 0;
}

//7.38
class Test
{
public:
	Test(istream& s = cin ):i(s){}
	~Test();

private:
	istream& i;
};

Test::~Test()
{
}


//7.40  Date类
class Date
{
public:
	Date();
	Date(int y);
	Date(int y,int m);
	Date(int y,int m,int d);
	~Date();

private:
	int year;
	int month;
	int day;
};

Date::Date():year(0),month(0),day(0)
{
}

Date::Date(int y):year(y),month(0),day(0)
{
}

Date::Date(int y, int m) : year(y), month(m), day(0)
{
}

Date::Date(int y, int m, int d):year(y), month(m), day(d)
{
}

Date::~Date()
{
}

class Sales_data
{
public:
	Sales_data(string s, unsigned cnt, double price) :bookNo(s), units_sold(cnt), revenue(price) {
		cout << "委托构造函数被调用" << endl;
	};
	Sales_data() :Sales_data("",0,0) {
		cout << "无参构造函数被调用" << endl;
	};
	Sales_data(string s) :Sales_data(s, 0, 0) {
		cout << "string s 构造函数被调用" << endl;
	};
	Sales_data(istream &is) :Sales_data() {
		cout << "istream is 构造函数被调用" << endl;
	};
	void syso() const
	{
		cout << "test"<<endl;
	}
	~Sales_data();

private:
	const string bookNo;
	unsigned units_sold;
	double revenue;

};

Sales_data::~Sales_data()
{
}


int main()
{
	Sales_data *qqs = new Sales_data("sasa");
	return 0;
}
//7.43
class NoDefault
{
public:
	NoDefault(int);
	~NoDefault();

private:

};

NoDefault::NoDefault(int)
{
}

NoDefault::~NoDefault()
{
}

class C
{
public:
	C();
	~C();

private:
	//NoDefault nd; //error 没有默认构造函数noDefault
};

C::C()
{
}

C::~C()
{
}

int main()
{
	vector<C> vec(1);
	return 0;
}


//7.52
struct Sales_data
{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
int main() {
	Sales_data item{ "21321321",25,15.59 };
	cout << item.bookNo << " " << item.revenue << endl;
	return 0;
}

//第八章 io类
//8.1
istream& io(istream &i)
{
	string  s;
	while (i >> s)
	{
		cout << unitbuf;
		cout << s<<endl;
	}
	cout << i.eof() << endl;
	cout << i.fail() << endl;
	cout << i.good() << endl;
	cout << "开始对流置位"<<endl;
	i.clear();
	cout << i.eof() << endl;
	cout << i.fail() << endl;
	cout << i.good() << endl;
	return i;
}

int main()
{
	io(cin);
	return 0;
}

//8.4 8.5 8.7
#include <fstream>
int main()
{
	string s = "D:\\桌面\\cheat\\origin注册机\\origin.e";
	ifstream i(s);
	vector<string> s1;
	if (!i)
	{
		cout << "打开文件失败"<<endl;
	}
	while (!i.eof())
	{
		i >> s;
		s1.push_back(s);
	}
	for (auto &s : s1)
	{
		cout << s<<endl;
	}
	if (i.is_open())
	{
		i.close();
	}
	s = "D:\\桌面\\cheat\\origin注册机\\origin1.txt";
	ofstream o(s,ostream::app);
	if (!o)
	{
		cout << "打开文件失败" << endl;
	}
	for (auto s:s1)
	{
		o << s;
	}
	return 0;
}


//8.9
#include <sstream>
istream& io(istream &i)
{
	string  s;
	while (i >> s)
	{
		cout << s << endl;
	}
	i.clear();
	return i;
}

int main()
{
	string s = "sadasdasdas";
	istringstream iss(s);
	io(iss);
	return 0;
}

//8.10
#include <sstream>
#include <fstream>
int main()
{
	string s = "D:\\桌面\\cheat\\origin注册机\\origin.txt";
	ifstream i(s);
	vector<string> s1;
	if (!i)
	{
		cout << "打开文件失败"<<endl;
	}
	while (!i.eof())
	{
		i >> s;
		s1.push_back(s);
	}
	istringstream is;
	ostringstream os;
	for (auto &s : s1)
	{
		is >> s;
		cout << s << endl;
	}
	if (i.is_open())
	{
		i.close();
	}
	return 0;
}

//8.11
#include <deque>
int main()
{
	deque<int> list;
	return 0;
}

//9.4
bool findVal(vector<int>::iterator& i,vector<int>::iterator& j,int val)
{
	for (;i!=j;i++)
	{
		if (*i==val)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	vector<int> vi{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	if (findVal(vi.begin(), vi.end(), 22))
	{
		cout << "vector<int>中存在" << endl;
	}
	else
	{
		cout << "vector<int>中不存在" << endl;
	}
	return 0;
}

//9.5
vector<int>::iterator& findVal(vector<int>::iterator& i, vector<int>::iterator& j, int val)
{
	for (; i != j; i++)
	{
		if (*i == val)
		{
			return i;
		}
	}
	return j;
}

int main()
{
	vector<int> vi{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	if (findVal(vi.begin(), vi.end(), 2) != vi.end())
	{
		cout << "vector<int>中存在" << endl;
	}
	else
	{
		cout << "vector<int>中不存在" << endl;
	}
	return 0;
}

//9.9
int main()
{
	vector<int> i{1,2,3};
	vector<int>::difference_type count=i.begin()-i.end();//difference_type表示迭代器之间的差距
	vector<int> v1;
	const vector<int> v2{3,1,2,2};//不能push_back
	auto it1 = v1.begin();
	auto it2 = v2.begin();
	auto it3 = v1.cbegin();
	auto it4 = v2.cbegin();
	cout << "it1 " << typeid(it1).name() << endl;
	cout << "it2 " << typeid(it2).name() << endl;
	cout << "it3 " << typeid(it3).name() << endl;
	cout << "it4 " << typeid(it4).name() << endl;
// 		 输出
// 	it1 class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<int> > >
// 	it2 class std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<int> > >
// 	it3 class std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<int> > >
// 	it4 class std::_Vector_const_iterator<class std::_Vector_val<struct std::_Simple_types<int> > >

	cout << count << endl;
	return 0;
}
//9.11
int main()
{
	vector<int> v1;//空
	vector<int> v2{ 1,2,3,4 };//1，2，3，4
	vector<int> v3(10, 1);//1，1，1，1，1，1，1，1，1，1
	vector<int> v4(10);//0，0，0，0，0，0，0，0，0，0
	vector<int> v5(v2);//1，2，3，4
	vector<int> v6(v2.begin(),v2.end());//1，2，3，4
	vector<int> v7 = v2;//1，2，3，4
	return 0;
}
#include <list>
int main()
{
	list<int> li{ 1,2,3,4,5,6,7 };
	vector<int> vi{1,2,3,4,5,6,7,8};
	vector<double> vd(vi.begin(),vi.end());
	vector<double> vd1(li.begin(),li.end());
	for (auto &d:vd)
	{
		cout << d << endl;
	}
	auto i = vd1.begin();
	for (;i != vd1.end();i++)
	{
		cout << *i << endl;
	}
	return 0;
}

//9.14
#include <list>
int main()
{
	list<char*> lc{"abc","def","ghj"};
	vector<string> vs;
	vs.assign(lc.begin(), lc.end());
	//vs.assign(lc);错误
	for (auto s:vs)
	{
		cout << s << endl;
	}
	return 0;
}


//9.15
int main()
{
	vector<int> vi1{ 1,2,3,4,5,6,7 };
	vector<int> vi2{ 1,2,3,4,5,6,7 };
	if (vi1==vi2)
	{
		cout << "相等" << endl;
	}
	else
	{
		cout << "不相等"<<endl;
	}
	return 0;
}

//9.16
#include <list>
int main()
{
	list<int> vi1{ 1,2,3,4,5,6,7,8 };
	vector<int> vi2{ 1,2,3,4,5,6,7 };
	if (vi1.size()==vi2.size())
	{
		auto it1 = vi1.begin();
		auto it2 = vi2.begin();
		for (;it1!=vi1.end()&&it2!=vi2.end();it1++,it2++)
		{
			if (*it1 != *it2)
			{
				cout << "不想等" << endl;
				break;
			}

		}
		cout << "相等" << endl;
	}
	else
	{
		cout << "不想等" << endl;
	}
	return 0;
}


//9.18
#include <deque>
int main()
{
	deque<string> ds;
	string s;
	while (cin >> s)
	{
		ds.push_back(s);
	}
	for (auto os:ds)
	{
		cout << os << endl;
	}
	return 0;
}

//9.19
#include <list>
int main()
{
	list<string> ds;
	string s;
	while (cin >> s)
	{
		ds.push_back(s);
	}
	for (auto os : ds)
	{
		cout << os << endl;
	}
	return 0;
}

//9.20
#include <list>
#include <deque>
int main()
{
	list<int> li{ 1,2,3,4,5,6,7,8,9,10 };
	deque<int> di1, di2;
	auto lt = li.begin();
	for (;lt!=li.end();lt++)
	{
		if (*lt%2)
		{
			di1.push_back(*lt);
		}
		else
		{
			di2.push_back(*lt);
		}
	}
	cout << "奇数" << endl;
	for (auto i:di1)
	{
		cout << i << endl;
	}
	cout << "偶数"<<endl;
	for (auto i : di2)
	{
		cout << i << endl;
	}
	return 0;
}

//9.22
int main()
{
	int val = 4;
	vector<int> vi{1,2,3,4,5,6,7,8,9,10,11,12};
	auto iter = vi.begin(), mid = vi.begin() + vi.size() / 2;
	while (iter!=mid)
	{
		if (*iter==val)
		{
			iter = vi.insert(iter, val * 2);
			mid = vi.begin()+1 + (vi.size()-1) / 2;
			iter += 2;
		}
		else
		{
			iter++;
		}
	}
	return 0;
}


//9.23
int main()
{
	vector<int> vi;
	try
	{
		vi.at(1);
	}
	catch (out_of_range)
	{
		cout << "下标越界" << endl;
	}
	//cout << vi[1] << endl;
	cout << vi.front() << endl;
	return 0;
}

//9.26
#include <list>
int main()
{
	int ia[] = { 0,1,1,2,3,5,8,13,21,55,89 };
	vector<int> vi;
	list<int> li;
	for (auto i:ia)
	{
		vi.push_back(i);
		li.push_back(i);
	}
	auto it1 = vi.begin();
	auto it2 = li.begin();
	for (;it1!=vi.end();)
	{
		if (*it1%2)//偶数
		{
			it1 = vi.erase(it1);
		}
		else
		{
			it1++;
		}
	}
	for (; it2 != li.end(); )
	{
		if (!(*it2 % 2))//奇数
		{
			it2 = li.erase(it2);
		}
		else
		{
			it2++;
		}
	}
	return 0;
}

//9.27
#include <forward_list>
int main()
{
	forward_list<int> fi{ 1,2,3,4,5,6,7,8,9 };
	auto curr = fi.begin();
	auto prev = fi.before_begin();
	while (curr!=fi.end())
	{
		if (*curr%2)//删除奇数
		{
			curr = fi.erase_after(prev);
		}
		else
		{
			++curr;
			++prev;
		}
	}
	for (auto &i:fi)
	{
		cout << i << endl;
	}
	return 0;
}

//9.28
#include <forward_list>
forward_list<string> insertString(forward_list<string> &ls, const string look, const string val)
{
	auto curr = ls.begin();
	auto prev = ls.before_begin();
	while (curr!=ls.end())
	{
		if (*curr==look)
		{
			curr = ls.emplace_after(curr, val);
			++curr;
			++prev;
		}
		else
		{
			++curr;
			++prev;
		}
	}
	auto prev1 = prev++;
	if (prev == ls.end())
	{
		ls.insert_after(prev1,val);
	}
	return ls;
}

int main()
{
	forward_list<string> fls{ "qwe","rty","uio","asd","fgh","uio" };
	for (auto str: insertString(fls, "uio", "awm"))
	{
		cout << str << endl;
	}
	return 0;
}

//9.33
int main()
{
	vector<int> vi{1,2,3,4,5,6,7};
	auto begin = vi.begin();
	while (begin!=vi.end())
	{
		++begin;
		begin = vi.insert(begin, 42);
		++begin;
	}
	for (auto i : vi)
	{
		cout << i << endl;
	}
	return 0;
}

//9.34
int main()
{
	vector<int> vi{ 1,2,3,4,5,6,7 };
	auto iter = vi.begin();
	while (iter != vi.end())
	{
		if (*iter % 2)
		{
			iter = vi.insert(iter, *iter);
			++iter;
		}
		++iter;
	}
	for (auto i : vi)
	{
		cout << i << endl;
	}
	return 0;
}


//9.38
int main()
{
	vector<int> li;
	cout << "capacity:" <<li.capacity() << endl;
	cout << "size:" << li.size() << endl;
	cout << endl;
	li = { 1,2,3,4,5,6 };
	cout << "capacity:" << li.capacity() << endl;
	cout << "size:" << li.size() << endl;
	cout << endl;
	li.push_back(7);
	cout << "capacity:" << li.capacity() << endl;
	cout << "size:" << li.size() << endl;
	cout << endl;
	li.shrink_to_fit();
	cout << "capacity:" << li.capacity() << endl;
	cout << "size:" << li.size() << endl;
	cout << endl;
	li.resize(li.size()/2);
	cout << "capacity:" << li.capacity() << endl;
	cout << "size:" << li.size() << endl;
	cout << endl;
	li.reserve(1000);
	cout << "capacity:" << li.capacity() << endl;
	cout << "size:" << li.size() << endl;
	cout << endl;
	return 0;
}

//9.41
int main()
{
	vector<char> vc{ 'q','w','e','r','t','y','u','i','o','p' };
	for (auto c : vc)
	{
		cout << c;
	}
	string s(vc.begin(),vc.end());
	cout << '\n' << s << endl;
	return 0;
}

//9.43
void change(string &s, string oldVal, string newVal)
{
	decltype(s.size()) sLength = oldVal.size();
	auto valBegin = s.begin();
	int nowIndex;
	for (; valBegin != s.end(); valBegin++)
	{
		nowIndex = distance(s.begin(), valBegin);
		auto beFindVal = s.substr(nowIndex, sLength);
		if (beFindVal == oldVal)
		{
			s.insert(nowIndex, newVal);
			s.erase(nowIndex+newVal.size(), sLength);
			valBegin = s.begin() + nowIndex + newVal.size()-1;
		}
	}
}


int main()
{
	string s = "this is tho tho";
	string oldVal = "tho";
	string newVal = "though";
	change(s, oldVal, newVal);
	cout << s << endl;
	return 0;
}

//9.44
void change(string &s, string oldVal, string newVal)
{
	decltype(s.size()) sLength = oldVal.size();
	auto valBegin = s.begin();
	int nowIndex;
	for (; valBegin != s.end(); valBegin++)
	{
		nowIndex = distance(s.begin(), valBegin);
		auto beFindVal = s.substr(nowIndex, sLength);
		if (beFindVal == oldVal)
		{
			s.replace(nowIndex, sLength, newVal);
			valBegin = s.begin() + nowIndex + newVal.size() - 1;
		}
	}
}


int main()
{
	string s = "this is tho tho";
	string oldVal = "tho";
	string newVal = "though";
	change(s, oldVal, newVal);
	cout << s << endl;
	return 0;
}



//6.45
string addStr(string name,string prefix,string suffix)
{
	name.insert(0,prefix);
	name.append(suffix);
	return name;
}
int main()
{
	string name = "chengqian";
	string prefix = "Mr";
	string suffix = "jr.";
	cout << addStr(name, prefix, suffix)<< endl;
	return 0;
}

//9.46
string addStr(string name, string prefix, string suffix)
{
	name.insert(0, prefix);
	name.insert(name.size(),suffix);
	return name;
}
int main()
{
	string name = "chengqian";
	string prefix = "Mr";
	string suffix = "jr.";
	cout << addStr(name, prefix, suffix) << endl;
	return 0;
}

//9.47(1)
int main()
{
	string s = "ab2c3d7r4e6";
	string numbers = "123456789";
	for (int pos = 0;pos<s.size();++pos)
	{
		pos = s.find_first_of(numbers,pos);
		cout << pos << endl;
	}
	return 0;
}

//9.47(2)
int main()
{
	string s = "ab2c3d7r4e6";
	string numbers = "123456789";
	for (int pos = 0; (pos = s.find_first_not_of(numbers, pos))!=string::npos; pos++)
	{
		cout << pos << endl;
	}
	return 0;
}

//9.49
#include <fstream>
int main()
{
	//YYaaaaYY
	string s = "acenmorsuvwxz";
	fstream words;
	int begin = 0 ,ends = 0, maxBegin = 0;
	int length = 0 , maxLength = 0;
	words.open("E:\\Users\\xagu\\source\\repos\\关于decltype\\Debug\\words.txt");
	if (!words)
	{
		cout << "打开文件失败" << endl;
	}
	istreambuf_iterator<char> beg(words), end;
	string str(beg, end);
	for (; (begin=str.find_first_of(s, begin))!=string::npos; begin++)
	{
		ends = str.find_first_not_of(s, begin);
		length = ends - begin;
		if (length > maxLength)
		{
			cout << "下标" << maxBegin << " 长度" << maxLength << str.substr(maxBegin, maxLength) << endl;
			maxBegin = begin;
			maxLength = length;
		}
		begin = ends;
	}
	cout << "下标" << maxBegin << " 长度" << maxLength << str.substr(maxBegin, maxLength) << endl;
	return 0;
}

//9.50
int main()
{
	vector<string> vs{ "111","222","3","1111","5454454" };
	vector<int> vi;
	double sum = 0;
	for (auto s : vs)
	{
		sum = sum + stoi(s);
	}
	cout << sum << endl;
	for (auto s : vs)
	{
		sum = sum + stod(s);
	}
	return 0;
}

//9.51
class date
{
public:
	date(string date);
	~date();

private:
	unsigned year;
	unsigned month;
	unsigned day;
};

date::date(string date)
{
	stoi("january");
}

date::~date()
{
}

//9.52未实现
#include <stack>
int main()
{
	stack<char> ss;
	int val;
	string s = { "((1 + 1) * 2)" };
	for (auto &c:s)
	{
		cout << c;
		if (c=='(')
		{
			ss.push(c);
		}
		else if (c==')')
		{
			while ((val=ss.top())!='(')
			{
				if (val='+')
				{
				}
				ss.pop();
			}
			ss.pop();

			ss.push()
		}
	}
	return 0;
}

//10.1
#include <algorithm>
int main()
{
	vector<int> vi{ 1,2,3,4,2,33,4,41,34,42,522,1,1,12,33,1 };
	cout << count(vi.begin(), vi.end(), 1) << endl;
	return 0;
}

//10.2
#include <algorithm>
int main()
{
	vector<string> vi{ "sajdasdiapdhasjdadkds","sdauhdasuiydgasyui","dsaidhsauidhasu","dsdad","a" ,"a"};
	cout << count(vi.begin(), vi.end(), "a") << endl;
	return 0;
}

//10.3
#include <numeric>
int main()
{
	vector<int> vi{ 1,2,3,4,5,6,7,8,9 };
	int sum = accumulate(vi.begin(), vi.end(), 0);
	cout << sum << endl;
	return 0;
}

//10.4
#include <numeric>
int main()
{
	vector<double> vd{11.1,22.2,33.3};
	cout << accumulate(vd.cbegin(), vd.cend(), 0.0) << endl;
	return 0;
}

//10.6
#include <algorithm>
int main()
{
	vector<int> vi(10);
	fill_n(vi.begin(), vi.size(), 0);
	for each (auto i in vi)
	{
		cout << i << endl;
	}
	return 0;
}

//10.7
#include <list>
#include <algorithm>
int main()
{
	vector<int> vec(10);
	list<int> lst;
	int i;
	while (cin>>i)
	{
		lst.push_back(i);
	}
	copy(lst.cbegin(), lst.cend(), vec.begin());
	for(auto i : vec)
	{
		cout << i << endl;
	}
	return 0;
}

#include <algorithm>
int main()
{
	vector<int> vec(10);
	vec.reserve(10);
	fill_n(vec.begin(), 10, 1);
	for (auto i : vec)
	{
		cout << i << endl;
	}
	return 0;
}


//10.9
#include <algorithm>
#include <string>

void elimDups(vector<string> &vs)
{
	sort(vs.begin(), vs.end());
	auto end_uniqe = unique(vs.begin(), vs.end());
	vs.erase(end_uniqe,vs.end());
}
int main()
{
	vector<string> vec;
	string s;
	while (cin >> s)
	{
		vec.push_back(s);
	}
	elimDups(vec);
	for (auto i : vec)
	{
		cout << i << endl;
	}
	return 0;
}

//10.11
#include <algorithm>
#include <string>

void elimDups(vector<string> &vs)
{
	sort(vs.begin(), vs.end());
	auto end_uniqe = unique(vs.begin(), vs.end());
	vs.erase(end_uniqe, vs.end());
}
bool isShorter(const string &s1, const string &s2)
{
	if (s1.length()<s2.length())
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	vector<string> vec;
	string s;
	while (cin >> s)
	{
		vec.push_back(s);
	}
	elimDups(vec);
	stable_sort(vec.begin(), vec.end(), isShorter);
	for (auto i : vec)
	{
		cout << i << endl;
	}
	return 0;
}

//10.13
#include <algorithm>
bool is_Longer_5(const string &s)
{
	return s.length() <= 5;
}

int main()
{
	vector<string> vec;
	string s;
	while (cin >> s)
	{
		vec.push_back(s);
	}
	auto longer_5 = partition(vec.begin(), vec.end(), is_Longer_5);
	for (;longer_5<vec.end();++longer_5)
	{
		cout << *longer_5 << endl;
	}
	return 0;
}

//10.14
int main()
{
	[](int a, int b)
	{
		return a + b;
	};
	return 0;
}

//10.15
int main()
{
	int sz = 0;
	[sz](int &b)
	{
		return sz + b;
	};
	return 0;
}

//10.16
#include <algorithm>
void elimDups(vector<string> &vs)
{
	sort(vs.begin(), vs.end());
	auto end_uniqe = unique(vs.begin(), vs.end());
	vs.erase(end_uniqe, vs.end());
}

bool isShorter(const string &s1, const string &s2)
{
	if (s1.length() < s2.length())
	{
		return true;
	}
	else
	{
		return false;
	}
}

void biggies(vector<string> &words,vector<string>::size_type sz)
{
	elimDups(words);
	stable_sort(words.begin(), words.end(), [](const string &a, const string &b)
	{return a.size() < b.size(); });
	auto wc = find_if(words.begin(), words.end(), [sz](const string &a)
	{return a.size() >= sz; });
	int count = words.end() - wc;
	cout << "一共有" << count << "个string，长度大于：" << sz << endl;
	cout << "分别为:" << endl;
	for_each(wc, words.end(), [](const string &s) {cout << s << " "; });
	cout << endl;
}

int main()
{
	vector<string> vec;
	string s;
	while (cin >> s)
	{
		vec.push_back(s);
	}
	biggies(vec, 4);
	return 0;
}

//10.18
#include <algorithm>
void elimDups(vector<string> &vs)
{
	sort(vs.begin(), vs.end());
	auto end_uniqe = unique(vs.begin(), vs.end());
	vs.erase(end_uniqe, vs.end());
}

bool isShorter(const string &s1, const string &s2)
{
	if (s1.length() < s2.length())
	{
		return true;
	}
	else
	{
		return false;
	}
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elimDups(words);
	stable_sort(words.begin(), words.end(), [](const string &a, const string &b)
	{return a.size() < b.size(); });
	auto wc = partition(words.begin(), words.end(), [sz](const string &a)
	{return a.size() <= sz; });
	int count = words.end() - wc;
	cout << "一共有" << count << "个string，长度大于：" << sz << endl;
	cout << "分别为:" << endl;
	for_each(wc, words.end(), [](const string &s) {cout << s << " "; });
	cout << endl;
}

int main()
{
	vector<string> vec;
	string s;
	while (cin >> s)
	{
		vec.push_back(s);
	}
	biggies(vec, 4);
	return 0;
}

//10.20
#include <algorithm>
int main()
{
	vector<string> words(10);
	for (auto &s : words)
	{
		cin >> s;
	}
	cout << count_if(words.begin(), words.end(), [](const string &s) {return s.length() >= 6; }) << endl;

	return 0;
}

//10.21
#include <algorithm>
int main()
{
	int i;
	cin >> i;
	auto f = [&i]() -> bool
	{
		if (i==0)
		{
			return true;
		}
		else
		{
			i--;
			return false;
		}
	};
	while (!f())
	{
		cout << i << endl;
	}
	return 0;
}

//10.22
#include <algorithm>

bool isLongger_than_6(string &s)
{
	return s.length() >= 6;
}

int main()
{
	vector<string> words(10);
	for (auto &s : words)
	{
		cin >> s;
	}

	cout << count_if(words.begin(), words.end(), isLongger_than_6) << endl;

	return 0;
}

//10.24
#include <algorithm>
#include <functional>
using namespace std::placeholders;
bool isLong_than_string(const string &s , int i )
{
	return  s.length() < i;
}

int main()
{
	vector<int> vi(10);
	int i;
	while (cin>>i)
	{
		vi.push_back(i);
	}
	cout <<*(find_if(vi.begin(), vi.end(), bind(isLong_than_string, "hello",_1)))<< endl;
	return 0;
}

//10.27
#include <algorithm>
#include <functional>
using namespace placeholders;
void elimDups(vector<string> &vs)
{
	sort(vs.begin(), vs.end());
	auto end_uniqe = unique(vs.begin(), vs.end());
	vs.erase(end_uniqe, vs.end());
}

bool isShorter(const string &s1, const string &s2)
{
	if (s1.length() < s2.length())
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool cheak_size(const string &s, string::size_type i)
{
	return s.length() <= i;
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
	elimDups(words);
	stable_sort(words.begin(), words.end(), [](const string &a, const string &b)
	{return a.size() < b.size(); });
	auto wc = partition(words.begin(), words.end(), bind(cheak_size,_1,sz));
	int count = words.end() - wc;
	cout << "一共有" << count << "个string，长度大于：" << sz << endl;
	cout << "分别为:" << endl;
	for_each(wc, words.end(), [](const string &s) {cout << s << " "; });
	cout << endl;
}

int main()
{
	vector<string> vec;
	string s;
	while (cin >> s)
	{
		vec.push_back(s);
	}
	biggies(vec, 4);
	return 0;
}

//10.28
#include <algorithm>
#include <list>
int main()
{
	vector<int> vi{ 1,2,3,4,5,6,7,8,9 };
	list<int> li;
	unique_copy(vi.begin(),vi.end(),back_inserter(li));
	for (auto i : li)
	{
		cout << i << endl;
	}
	return 0;
}

#include <algorithm>
#include <list>
#include <forward_list>
#include <deque>
#include <iterator>
int main()
{
	vector<int> vi{ 1,2,3,4,5,6,7,8,9 };
	list<int> li;
	forward_list<int> fi;
	deque<int> di;
	unique_copy(vi.begin(), vi.end(), back_inserter(li));//123456789
	unique_copy(vi.begin(), vi.end(), front_inserter(fi));//987654321
	unique_copy(vi.begin(), vi.end(),inserter(di,di.begin()));//123456789
	for (auto i : li)
	{
		cout << i << ' ';
	}
	cout << endl;
	for (auto i : fi)
	{
		cout << i << ' ';
	}
	cout << endl;
	for (auto i : di)
	{
		cout << i << ' ';
	}
	return 0;
}

//10.29
#include <algorithm>
#include <iterator>
#include <fstream>
int main()
{
	ifstream in("E:\\Users\\xagu\\source\\repos\\关于decltype\\Debug\\words.txt");
	istream_iterator<string> iis(in),eof;
	vector<string> vs(iis,eof);
	ostream_iterator<string> ois(cout," ");
	copy(vs.begin(), vs.end(), ois);
	cout << endl;
	return 0;
}

//10.30
#include <algorithm>
#include <iterator>
int main()
{
	istream_iterator<int> ii(cin),eof;
	vector<int> vi(ii,eof);
	sort(vi.begin(),vi.end());
	ostream_iterator<int> oi(cout, " ");
	copy(vi.begin(), vi.end(), oi);
	cout << endl;
	return 0;
}


//10.31
#include <algorithm>
#include <iterator>
int main()
{
	istream_iterator<int> ii(cin), eof;
	vector<int> vi(ii, eof);
	sort(vi.begin(), vi.end());
	ostream_iterator<int> oi(cout, " ");
	unique_copy(vi.begin(), vi.end(), oi);
	cout << endl;
	return 0;
}

//10.33
#include <iterator>
#include <algorithm>
#include <fstream>

void divide_odd_even(string intFile,string oddFile,string evenFile)
{
	fstream intF(intFile),odd(oddFile),even(evenFile);
	istream_iterator<int> iitEven(intF),eof;
	vector<int> vi(iitEven,eof);
	ostream_iterator<int> oitOdd(odd," "), oitEven(even," ");
	auto first_even = partition(vi.begin(), vi.end(), [](int i)
	{
		return i % 2;//true->odd  false->even
	});
	copy(vi.begin(), first_even, oitOdd);
	copy(first_even, vi.end(), oitEven);
	intF.close();
	odd.close();
	even.close();
}

int main()
{
	string intFile = "E:\\Users\\xagu\\source\\repos\\关于decltype\\primer\\Text1.txt";
	string oddFile = "E:\\Users\\xagu\\source\\repos\\关于decltype\\primer\\Text2.txt";
	string evenFile = "E:\\Users\\xagu\\source\\repos\\关于decltype\\primer\\Text3.txt";
	divide_odd_even(intFile, oddFile, evenFile);
	return 0;
}


//10.34
int main()
{
	vector<int> vi = { 1,2,3,4,5,6,7,8 };
	for (auto r_iter = vi.crbegin();r_iter != vi.crend(); ++r_iter)
	{
		cout << *r_iter << endl;
	}
	return 0;
}


//10.35
int main()
{
	vector<int> vi = {1,2,3,4,5,6,7,8};
	auto iter = vi.cend();
	for (; iter != vi.cbegin(); --iter)
	{
		cout << *(iter-1) << endl;
	}
	return 0;
}

//10.36
#include <list>
int main()
{
	list<int> li = { 1,2,3,4,0,5,6,7,8 };
	cout << &find(li.crbegin(), li.crend(), 0) << endl;
	return 0;
}

//10.37
#include <list>
#include <algorithm>
#include <iterator>
int main()
{
	vector<int> vi = { 1,2,3,4,5,6,7,8,9,10 };
	list<int> li;
	copy(vi.crbegin()+3, vi.crend()-2, back_inserter(li));
	ostream_iterator<int> oi(cout," ");
	copy(li.cbegin(), li.cend(), oi);
	cout << endl;
	return 0;
}



//10.42
#include <algorithm>
#include <string>
#include <list>

void elimDups(list<string> &vs)
{
	vs.sort();
	vs.unique();
}
int main()
{
	list<string> lis;
	string s;
	while (cin >> s)
	{
		lis.push_back(s);
	}
	elimDups(lis);
	for (auto i : lis)
	{
		cout << i << " ";
	}
	return 0;
}

//11.2
#include <map>
#include <set>
int main()
{
	map<string, size_t> word_count;
	set<string> ignore_words = {"The","But","And","Or","An","A","the","but","and","or","an","a"};
	string word;
	while (cin>>word)
	{
		if (ignore_words.find(word) == ignore_words.end())
		{
			++word_count[word];
		}
	}
	for (const auto w:word_count)
	{
		cout << w.first << "," << w.second << endl;
	}
	return 0;
}

//11.3  11.4
#include <map>
#include <set>
int main()
{
	map<string, size_t> word_count;
	set<string> ignore_words = { "The","But","And","Or","An","A","the","but","and","or","an","a" };
	string word;
	while (cin >> word)
	{
		if (*(word.end()-1)!=','&& *(word.end() - 1) != '.'&& *(word.end() - 1) != '.')
		{
			if (ignore_words.find(word) == ignore_words.end())
			{
				++word_count[word];
			}
		}
	}
	for (const auto w : word_count)
	{
		cout << w.first << "      " << w.second << endl;
	}
	return 0;
}

//11.7
#include <map>
int main()
{
	map<string, vector<string>> name;
	string firstName,lastName;
	cout << "请输入姓：";
	for (;cin>>lastName&&lastName!="end";cout<<"请输入姓：")
	{
		name[lastName];
		cout << "请输入孩子名：";
		for (;cin>>firstName&&firstName!="end";cout<<"请输入孩子名：")
		{
			name[lastName].push_back(firstName);
		}
	}
	for (const auto &ch:name)
	{
		cout << "lastname:" << ch.first << " " << "firstname:";
		for (const auto &ch : ch.second)
		{
			cout << ch << " ";
		}
		cout << endl;
	}
	return 0;
}

//11.9
#include <map>
#include <list>
int main()
{
	map<string, list<int>> words;
	return 0;
}

//11.11
#include <set>
typedef bool(*com)(const int,const int);
bool complareIsbn(const int a, const int b)
{
	return a < b;
}
int main()
{
	decltype(complareIsbn)* i;
	multiset<string, com> bookstore(com);
	return 0;
}

//11.12
#include <utility>
int main()
{
	vector<pair<string,int>> vp;
	string fir;
	int sec;
	while (cin>>fir&&cin>>sec)
	{
		vp.push_back(pair<string,int>(fir,sec));
	}
	for (auto p : vp)
	{
		cout << p.first << " " << p.second << endl;
	}
	return 0;
}

//11.13
#include <utility>
int main()
{
	vector<pair<string, int>> vp;
	string fir;
	int sec;
	while (cin >> fir && cin >> sec)
	{
		//vp.push_back(pair<string, int>(fir, sec));
		//vp.push_back(make_pair(fir, sec));
		vp.push_back({fir,sec});
	}
	for (auto p : vp)
	{
		cout << p.first << " " << p.second << endl;
	}
	return 0;
}

//11.14
#include <map>
#include <utility>
int main()
{
	map<string, vector<pair<string,string>>> name;
	string firstName, lastName, birthday;
	cout << "请输入姓：";
	for (; cin >> lastName && lastName != "end"; cout << "请输入姓：")
	{
		name[lastName];
		cout << "请输入孩子名：";
		for (; cin >> firstName && firstName != "end"; cout << "请输入孩子名：")
		{
			cout << "请输入孩子生日：";
			cin >> birthday;
			name[lastName].push_back({firstName,birthday});
		}
	}
	for (const auto &ch : name)
	{
		cout << "lastname:" << ch.first << " ";
		for (const auto &ch : ch.second)
		{
			cout << "firstname:" << ch.first << " 生日：" << ch.second<<" ";
		}
		cout << endl;
	}
	return 0;
}


//11.16
#include <map>
map<int, string> mis = { {1, "qq"} };
auto it = mis.begin();
it->second = " wew";



//11.18
#include <map>
map<string, size_t> word_count;
map<string,size_t>::const_iterator map_it = word_count.cbegin();


//11.19
#include <set>
typedef bool(*com)(const int, const int);
bool complareIsbn(const int a, const int b)
{
	return a < b;
}
int main()
{
	decltype(complareIsbn)* i;
	multiset<string, com> bookstore(complareIsbn) ;
	multiset<string, com>::iterator it = bookstore.begin();
	return 0;
}


//11.20
#include <map>
#include <set>
int main()
{
	map<string, size_t> word_count;
	set<string> ignore_words = { "The","But","And","Or","An","A","the","but","and","or","an","a" };
	string word;
	while (cin >> word)
	{
		if (*(word.end() - 1) != ','&& *(word.end() - 1) != '.'&& *(word.end() - 1) != '.')
		{
			if (ignore_words.find(word) == ignore_words.end())
			{
				auto ret = word_count.insert({ word,1 });
				if (!ret.second)
				{
					++ret.first->second;
				}
			}
		}
	}
	for (const auto w : word_count)
	{
		cout << w.first << "      " << w.second << endl;
	}
	return 0;
}

//11.23
#include <map>
int main()
{
	multimap<string, vector<string>> name;
	string firstName, lastName;
	cout << "请输入姓：";
	for (; cin >> lastName && lastName != "end"; cout << "请输入姓：")
	{
		cout << "请输入孩子名：";
		for (; cin >> firstName && firstName != "end"; cout << "请输入孩子名：")
		{
			name.insert({ lastName,{firstName} });
		}
	}
	for (const auto &ch : name)
	{
		cout << "lastname:" << ch.first << " " << "firstname:";
		for (const auto &ch : ch.second)
		{
			cout << ch << " ";
		}
		cout << endl;
	}
	return 0;
}


//11.28
#include <map>
int main()
{
	map<string, int> msi = { {"q",1},{"w",2},{"e",3} };
	auto ret = msi.find("w");
	cout << ret->first << " " << ret->second << endl;
	return 0;
}


//11.31
#include <map>
typedef string AUTHOR;
typedef string WORKS;
int main()
{
	multimap<AUTHOR, WORKS> mmaw = { {"qqq","www"} ,{"eee","rrr"},{"ttt","yyy"} };
	cout << "被删除前" << endl;
	for (auto i:mmaw)
	{
		cout << i.first << " " << i.second << endl;
	}
	auto del = mmaw.find("qqq");
	if (del == mmaw.end())
	{
		cout << "qqq不存在" << endl;
	}
	else
	{
		cout << del->first << "将要被删除" << endl;
		mmaw.erase(del);
	}
	cout << "被删除后" << endl;
	for (auto i : mmaw)
	{
		cout << i.first << " " << i.second << endl;
	}
	return 0;
}


//11.32
#include <map>
typedef string AUTHOR;
typedef string WORKS;
int main()
{
	multimap<AUTHOR, WORKS> mmaw = { {"qqq","1ww"} ,{"eee","rrr"},{"ttt","yyy"} ,{"qqq","2ww"} ,{"qqq","3ww"},{"eee","2rr"} };
	for (auto i : mmaw)
	{
		static AUTHOR prev;
		if (i.first!=prev)
		{
			cout << "\n作者：" << i.first << "作品：" << i.second << " ";
			prev = i.first;
		}
		else
		{
			cout << i.second << " ";
		}
	}
	return 0;
}

//11.3.6一个单词转换的程序
#include <map>
#include <fstream>
#include <sstream>
map<string,string> buildMap(ifstream &map_file)
{
	map<string, string> trans_map;
	string key;
	string value;
	while (map_file>>key&&getline(map_file,value))
	{
		if (value.size()>1)
		{
			trans_map[key] = value.substr(1);
		}
		else
		{
			throw runtime_error("no rule for" + key);
		}
	}
	return trans_map;
}

const string& transform(const string &s, const map<string, string> &m)
{
	auto map_it = m.find(s);
	if (map_it!= m.cend())
	{
		return map_it->second;
	}
	else
	{
		return s;
	}
}

void word_transform(ifstream &map_file, ifstream &input)
{
	auto trans_map = buildMap(map_file);
	string text;
	while (getline(input,text))
	{
		istringstream stream(text);
		string word;
		bool firstword = true;
		while (stream>>word)
		{
			if (firstword)
			{
				firstword = false;
			}
			else
			{
				cout << " ";
			}
			cout << transform(word, trans_map);
		}
		cout << endl;
	}
}
int main()
{
	ifstream  map_file("E:\\Users\\xagu\\source\\repos\\关于decltype\\primer\\map_file.txt");
	ifstream input("E:\\Users\\xagu\\source\\repos\\关于decltype\\primer\\input.txt");
	word_transform(map_file, input);
}


//12.2
#include <memory>
class StrBlob
{
public:
	typedef vector<string>::size_type size_type;
	StrBlob();
	~StrBlob();
	StrBlob(initializer_list<string> il);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	void push_back(const string &t) { data->push_back(t); }
	void pop_back();
	string& front();
	string& back();
	string& front() const;
	string& back() const;


private:
	shared_ptr<vector<string>> data;
	void check(size_type i, const string &msg) const;
};

StrBlob::StrBlob() :data(make_shared<vector<string>>())
{

}

StrBlob::~StrBlob()
{
}
StrBlob::StrBlob(initializer_list<string> il):data(make_shared<vector<string>>(il))
{
}
void StrBlob::pop_back()
{
	check(0, "pop_back on empty StrBlob");
	return data->pop_back();
}
string & StrBlob::front()
{
	check(0, "front on empty StrBlob");
	return data->front();
}
string & StrBlob::back()
{
	check(0, "back on empty StrBlob");
	return data->back();
}
string & StrBlob::front() const
{
	check(0, "front on empty StrBlob");
	return data->front();
}
string & StrBlob::back() const
{
	check(0, "back on empty StrBlob");
	return data->back();
}
void StrBlob::check(size_type i, const string & msg) const
{
	if (i >= data->size())
	{
		throw out_of_range(msg);
	}
}
int main()
{

	return 0;
}


//12.6
int *i(new int);
vector<int> cin_vector()
{
	vector<int> vi;
	while (cin>>*i)
	{
		vi.push_back(*i);
	}
	return vi;
}

void syso(vector<int> vi)
{
	delete i;
	for (int val:vi)
	{
		cout << val<<" ";
	}
}

int main()
{
	syso(cin_vector());
	return 0;
}


//12.7
#include <memory>
vector<int> cin_vector()
{
	shared_ptr<vector<int>> vi= make_shared<vector<int>>();
	int i;
	while (cin >> i)
	{
		vi->push_back(i);
	}
	cout << vi << endl;
	return *vi;
}

void syso(vector<int> vi)
{
	cout << &vi << endl;
	for (int val : vi)
	{
		cout << val << " ";
	}
}

int main()
{
	syso(cin_vector());
	return 0;
}

//12.14
void end_connection(connection &p) { disconnect(*p); }
void f(destination &d)
{
	shared_ptr<connection> p(&c, end_connection);
}

//12.15
void f(destination &d)
{m,i
	shared_ptr<connection> p(&c, [](connection &p) {disconnect(&p)});
}


//12.16
//错误代码！！！！
#include <memory>
int main()
{
	unique_ptr<int> i(new int(10));
	cout << *i << endl;
	unique_ptr<int> j(i);
	unique_ptr<int> k = i;
	return 0;
}


//12.19  12.20
#include <memory>
#include <fstream>
class StrBlobPtr;
class StrBlob
{
public:
	friend class StrBlobPtr;
	typedef vector<string>::size_type size_type;
	StrBlob();
	~StrBlob();
	StrBlob(initializer_list<string> il);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	void push_back(const string &t) { data->push_back(t); }
	void pop_back();
	string& front();
	string& back();
	string& front() const;
	string& back() const;
	StrBlobPtr begin();
	StrBlobPtr end();

private:
	shared_ptr<vector<string>> data;
	void check(size_type i, const string &msg) const;
};

StrBlob::StrBlob() :data(make_shared<vector<string>>())
{

}

StrBlob::~StrBlob()
{
}
StrBlob::StrBlob(initializer_list<string> il) :data(make_shared<vector<string>>(il))
{
}
void StrBlob::pop_back()
{
	check(0, "pop_back on empty StrBlob");
	return data->pop_back();
}
string & StrBlob::front()
{
	check(0, "front on empty StrBlob");
	return data->front();
}
string & StrBlob::back()
{
	check(0, "back on empty StrBlob");
	return data->back();
}
string & StrBlob::front() const
{
	check(0, "front on empty StrBlob");
	return data->front();
}
string & StrBlob::back() const
{
	check(0, "back on empty StrBlob");
	return data->back();
}
void StrBlob::check(size_type i, const string & msg) const
{
	if (i >= data->size())
	{
		throw out_of_range(msg);
	}
}

class StrBlobPtr
{
public:
	StrBlobPtr() :curr(0) {}
	StrBlobPtr(StrBlob &a, size_t sz = 0) :wptr(a.data), curr(sz) {}
	StrBlobPtr& operator++();
	StrBlobPtr& operator--();
	StrBlobPtr& operator++(int);
	StrBlobPtr& operator--(int);
	string& operator*() const;
	string* operator->() const;
	string& deref() const;
	StrBlobPtr& incr();
	~StrBlobPtr();

private:
	shared_ptr<vector<string>> check(size_t, string&) const;
	weak_ptr<vector<string>> wptr;
	size_t curr;//在数组中的当前位置
};

StrBlobPtr::~StrBlobPtr()
{
}

shared_ptr<vector<string>> StrBlobPtr::check(size_t i, string &msg) const
{
	auto ret = wptr.lock();
	if (!ret)
	{
		throw runtime_error("unbound StrBlobPtr");
	}
	if (i>=ret->size())
	{
		throw out_of_range(msg);
	}
	return ret;
}

string & StrBlobPtr::deref() const
{
	auto p = check(curr, (string)"dereferrence past end");
	return (*p)[curr];
}

StrBlobPtr & StrBlobPtr::incr()
{
	check(curr, (string)"increment past and of StrBlobPtr");
	++curr;
	return *this;
}

StrBlobPtr & StrBlobPtr::operator++()
{
	check(curr, (string)"increment past and of StrBlobPtr");
	++curr;
	return *this;
}

StrBlobPtr & StrBlobPtr::operator--()
{
	--curr;
	check(curr, (string)"decrement past begin of StrBlobPtr");
	return *this;
}

StrBlobPtr & StrBlobPtr::operator++(int)
{
	StrBlobPtr ret = *this;
	++*this;
	return ret;
}

StrBlobPtr & StrBlobPtr::operator--(int)
{
	StrBlobPtr ret = *this;
	--*this;
	return ret;
}

string & StrBlobPtr::operator*() const
{
	auto p = check(curr, (string)"dereference past end");
	return (*p)[curr];
}


string * StrBlobPtr::operator->() const
{
	return &this->operator*();
}

StrBlobPtr StrBlob::begin() { return StrBlobPtr(*this); }
StrBlobPtr StrBlob::end()
{
	auto ret = StrBlobPtr(*this, data->size());
	return ret;
}

int main()
{
	string src = "E:\\Users\\xagu\\source\\repos\\关于decltype\\Debug\\words.txt";
	ifstream text(src);
	string s;
	StrBlob str;
	while (getline(text, s))
	{
		str.push_back(s);
	}
	StrBlobPtr sbp(str, str.size());
	auto re = str.begin();
	int i = 0;
	while (i<str.size())
	{
		cout << re.deref() << endl;
		++re;
		i++;
	}
	return 0;
}

//12.22
class StrBlob;
class ConstStrBlobPtr
{
public:
	ConstStrBlobPtr() :curr(0) {}
	ConstStrBlobPtr(const StrBlob &a, size_t sz = 0) :wptr(a.data), curr(sz) {}
	string& deref() const;
	ConstStrBlobPtr& incr();
	~ConstStrBlobPtr();

private:
	shared_ptr<vector<string>> check(size_t, string&) const;
	weak_ptr<vector<string>> wptr;
	size_t curr;//在数组中的当前位置
};

ConstStrBlobPtr::~ConstStrBlobPtr()
{
}

shared_ptr<vector<string>> ConstStrBlobPtr::check(size_t i, string &msg) const
{
	auto ret = wptr.lock();
	if (!ret)
	{
		throw runtime_error("unbound StrBlobPtr");
	}
	if (i >= ret->size())
	{
		throw out_of_range(msg);
	}
	return ret;
}

string & ConstStrBlobPtr::deref() const
{
	auto p = check(curr, (string)"dereferrence past end");
	return (*p)[curr];
}

ConstStrBlobPtr & ConstStrBlobPtr::incr()
{
	check(curr, (string)"increment past and of StrBlobPtr");
	++curr;
	return *this;
}


//12.23
#include <cstring>
int main()
{
	char *i = "你好！";
	char *j = "C++!";
	string s1 = "你好！";
	string s2 = "C++!";
//	char *k = new char[strlen(i)+strlen(j)+1];
	string *k = new string(s1+s2);
// 	strcpy_s(k,strlen(i)+1,i);
// 	strcat_s(k, strlen(i) + strlen(j) + 1, j);
	cout << *k << endl;
	return 0;
}


//12.24
int main()
{
	char *ch = new char[100];
	char *str = new char[10];
	int i = 0;
	cin >> ch;
	str = ch;
	cout << str << endl;
	delete []str;
	return 0;
}

//12.26
#include <memory>
int main()
{
	size_t n = 10;
	allocator<string> alloc;
	auto p = alloc.allocate(n);
	string s;
	auto q = p;
	while (cin>>s&&q!=p+n)
	{
		alloc.construct(q++, s);
	}
	const size_t size = q - p;
	while (q!=p)
	{
		alloc.destroy(--q);
	}
	alloc.deallocate(p, n);
	return 0;
}
//12.27
#include <fstream>
#include <map>
#include <set>
#include <memory>
#include <sstream>
class QueryResult;
class TextQuery
{
public:
	using line_no = vector<string>::size_type;
	TextQuery(ifstream&);
	QueryResult query(const string&) const;

private:
	map<string, shared_ptr<set<line_no>>> wm;
	shared_ptr<vector<string>> file;
};

TextQuery::TextQuery(ifstream &is):file(new vector<string>)
{
	string text;
	while (getline(is,text))
	{
		file->push_back(text);
		size_t n = file->size();
		istringstream line(text);
		string word;
		while (line>>word)
		{
			auto &lines = wm[word];
			if (!lines)
			{
				lines.reset(new set<line_no>);
			}
			lines->insert(n);
		}
	}
}


class QueryResult
{
	friend ostream& print(ostream&,const QueryResult&);
public:
	QueryResult(string s, shared_ptr<set<TextQuery::line_no>> p, shared_ptr<vector<string>> f) :sought(s), lines(p), file(f)
	{
	}


private:
	string sought;
	shared_ptr<set<TextQuery::line_no>> lines;
	shared_ptr<vector<string>> file;
};

QueryResult TextQuery::query(const string &sought) const
{
	static shared_ptr<set<line_no>> nodata(new set<line_no>);
	auto loc = wm.find(sought);
	if (loc==wm.end())
	{
		return QueryResult(sought, nodata, file);
	}
	else
	{
		return QueryResult(sought, loc->second, file);
	}
}

string make_plural(size_t ctr, const string &word, const string &ending)
{
	return (ctr > 1) ? word + ending : word;
}

ostream &print(ostream &os, const QueryResult &qr)
{
	os << qr.sought << " occurs " << qr.lines->size() << " "
		<< make_plural(qr.lines->size(), "time", "s") << endl;
	for (auto num:*qr.lines)
	{
		os << "\t(line " << num + 1 << ") " << *(qr.file->begin() + num) << endl;
	}
	return os;
}
void runQueries(ifstream &infile)
{
	TextQuery tq(infile);
	while (true)
	{
		cout << "enter word to look for,or q to quit：";
		string s;
		if (!(cin>>s)||s == "q")
		{
			break;
		}
		print(cout, tq.query(s)) << endl;
	}
}

int main()
{
	ifstream file("E:\\Users\\xagu\\source\\repos\\关于decltype\\Debug\\words.txt");
	runQueries(file);
	return 0;
}



//13.5
class HasPtr
{
public:
	HasPtr(const string &s = string()) :ps(new string(s)), i(0) {}
	HasPtr(HasPtr& has)
	{
		this->ps = new string(*has.ps);
		this->i = has.i;
		cout << "拷贝构造函数"<<endl;
	}
private:
	string *ps;
	int i;
};
int main()
{
	HasPtr test("10");
	auto test2 = test;
	cout << &test << endl;
	cout << &test2 << endl;
	return 0;
}

//内存泄露测试
void test()
{
	string* t = new string("ABCD");
	cout << t << endl;
	delete t;
	t = nullptr;
	cout << t << endl;
}

int main()
{
	while (true)
	{
		test();
	}
	return 0;
}

#define _CRTDBG_MAP_ALLOC

#include <stdlib.h>

#include <crtdbg.h>



#include <iostream>

using namespace std;



void GetMemory(char *p, int num)

{

	p = (char*)malloc(sizeof(char) * num);

}



int main(int argc, char** argv)

{

	char *str = NULL;

	GetMemory(str, 100);

	cout << "Memory leak test!" << endl;

	_CrtDumpMemoryLeaks();

	return 0;

}



//13.8
class HasPtr
{
public:
	HasPtr(const string &s = string()) :ps(new string(s)), i(0) {}
	HasPtr(HasPtr& has):ps(new string(*has.ps)), i(has.i)
	{
		cout << "拷贝构造函数"<<endl;
	}
	HasPtr& operator=(const HasPtr&);
private:
	string *ps;
	int i;
};

HasPtr& HasPtr::operator=(const HasPtr &has)
{
	delete ps;
	this->ps = new string(*has.ps);
	this->i = has.i;
	return *this;
}

int main()
{
	HasPtr test("10");
	HasPtr test3;
	auto test2 = test;
	test3 = test;
	cout << &test << endl;
	cout << &test2 << endl;
	cout << &test3 << endl;
	return 0;
}



//13.11
class HasPtr
{
public:
	HasPtr(const string &s = string()) :ps(new string(s)), i(0) {}
	HasPtr(HasPtr& has) :ps(new string(*has.ps)), i(has.i)
	{
		cout << "拷贝构造函数" << endl;
	}
	HasPtr& operator=(const HasPtr&);
	~HasPtr();
private:
	string *ps;
	int i;
};

HasPtr::~HasPtr()
{
	delete ps;
}

HasPtr& HasPtr::operator=(const HasPtr &has)
{
	delete ps;
	this->ps = new string(*has.ps);
	this->i = has.i;
	return *this;
}

int main()
{
	HasPtr test("10");
	HasPtr test3;
	auto test2 = test;
	test3 = test;
	cout << &test << endl;
	cout << &test2 << endl;
	cout << &test3 << endl;
	return 0;
}


//13.13
struct X
{
	X() { cout << "X()" << endl; }
	X(const X&) { cout << "X(const X&)" << endl; }
	X& operator=(const X&) { cout << "operator=(const X &X)" << endl; return *this; }
	~X() { cout << "~X()" << endl; }
};
int main()
{
	X a;
	auto b = new X;
	X c;
	c = a;
	delete b;
	return 0;
}


//13.16
#include <stdlib.h>
class numbered
{
public:
	numbered()
	{
		srand(time(0));
		mysn = rand();
	}
	numbered& operator=(const numbered &num)
	{
		srand(time(0));
		mysn = rand();
		return *this;
	}
	static void f(numbered s) { cout << s.mysn << endl; }

private:
	int mysn;
};
int main()
{
	numbered a,b;
	b = a;
	auto c = b;
	numbered::f(a);
	numbered::f(b);
	numbered::f(c);
	return 0;
}



//13.18  13.19
class Employee
{
public:
	//Employee():name("NULL"),no(++NO) {}
	Employee(string na = "NULL") :name(na),no(++NO){}
	Employee(const Employee&) = delete;
	Employee& operator=(const Employee&) = delete;
	~Employee() = default;
	void syso()
	{
		cout << name << " " << no << endl;
	}
protected:

private:
	string name;
	int no;
	static int NO;
};

int Employee::NO = 10000000;

int main()
{
	Employee e,e4;
	Employee e2("CQ");
//	Employee e3 = e2;
//	e4 = e2;
	e.syso();
	e2.syso();
//	e3.syso();
	return 0;
}


//13.22
class HasPtr
{
public:
	HasPtr(string s = "") :ps(s), i(0) {}
	HasPtr(HasPtr& has) :ps(has.ps), i(has.i)
	{
		cout << "拷贝构造函数" << endl;
	}
	HasPtr& operator=(const HasPtr&);
	~HasPtr() = default;
private:
	string ps;
	int i;
};


HasPtr& HasPtr::operator=(const HasPtr &has)
{
	this->ps = has.ps;
	this->i = has.i;
	return *this;
}

int main()
{
	HasPtr test("10");
	HasPtr test3;
	auto test2 = test;
	test3 = test;
	cout << &test << endl;
	cout << &test2 << endl;
	cout << &test3 << endl;
	return 0;
}


//13.22
class HasPtr
{
public:
	HasPtr(const string &s = string()) :ps(new string(s)), i(0) {}
	HasPtr(HasPtr& has) :ps(new string(*has.ps)), i(has.i)
	{
		cout << "拷贝构造函数" << endl;
	}
	HasPtr& operator=(const HasPtr&);
	~HasPtr();
private:
	string *ps;
	int i;
};

HasPtr::~HasPtr()
{
	delete ps;
}

HasPtr& HasPtr::operator=(const HasPtr &has)//防范自赋值是非常重要的
{
	auto temp = new string(*has.ps);
	delete ps;
	this->ps = temp;
	this->i = has.i;
	return *this;
}

int main()
{
	HasPtr test("10");
	HasPtr test3;
	auto test2 = test;
	test3 = test;
	cout << &test << endl;
	cout << &test2 << endl;
	cout << &test3 << endl;
	return 0;
}

//13.26
#include <memory>
class StrBlob
{
public:
	typedef vector<string>::size_type size_type;
	StrBlob();
	StrBlob(StrBlob& stb) :data(make_shared<vector<string>>(stb.data)) {}
	StrBlob& operator=(StrBlob& htb);
	~StrBlob();
	StrBlob(initializer_list<string> il);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	void push_back(const string &t) { data->push_back(t); }
	void pop_back();
	string& front();
	string& back();
	string& front() const;
	string& back() const;


private:
	shared_ptr<vector<string>> data;
	void check(size_type i, const string &msg) const;
};

StrBlob::StrBlob() :data(make_shared<vector<string>>())
{

}

StrBlob & StrBlob::operator=(StrBlob & htb)
{
	//auto temp = make_shared<vector<string>>(htb.data);
	data = htb.data;

}

StrBlob::~StrBlob()
{
}
StrBlob::StrBlob(initializer_list<string> il) :data(make_shared<vector<string>>(il))
{
}
void StrBlob::pop_back()
{
	check(0, "pop_back on empty StrBlob");
	return data->pop_back();
}
string & StrBlob::front()
{
	check(0, "front on empty StrBlob");
	return data->front();
}
string & StrBlob::back()
{
	check(0, "back on empty StrBlob");
	return data->back();
}
string & StrBlob::front() const
{
	check(0, "front on empty StrBlob");
	return data->front();
}
string & StrBlob::back() const
{
	check(0, "back on empty StrBlob");
	return data->back();
}
void StrBlob::check(size_type i, const string & msg) const
{
	if (i >= data->size())
	{
		throw out_of_range(msg);
	}
}


//13.27
class HasPtr
{
public:
	HasPtr(const string &s = string()) :ps(new string(s)), i(0), use(new size_t(1)) {}
	HasPtr(HasPtr &has) :ps(has.ps), i(has.i), use(has.use) { ++*use; }
	HasPtr& operator=(HasPtr &has)
	{
		++*has.use;
		auto temp = new string(*has.ps);
		if (--*use == 0)
		{
			delete ps;
			delete use;
		}
		ps = has.ps;
		i = has.i;
		use = has.use;
		return *this;
	}
	~HasPtr()
	{
		if (--*use == 0)
		{
			delete ps;
			delete use;
		}
	}
	void syso()
	{
		cout << *ps << "  " << i << "  " << *use << endl;
	}
private:
	string *ps;
	int i;
	size_t *use;
};

int main()
{
	//HasPtr* h1 = new HasPtr("hello");
	//h1->syso();
	//HasPtr* h2 = new HasPtr(*h1);
	//h1->syso();
	//h2->syso();
	//delete h1;
	//h1->syso();
	//h2->syso();
	HasPtr h1("hello");
	h1.syso();
	HasPtr h2(h1);
	h1.syso();
	h2.syso();
	HasPtr h3("world");
	h3.syso();
	h3 = h1;
	h1.syso();
	h2.syso();
	h3.syso();
	return 0;
}


//13.28
class TreeNode
{
public:
	TreeNode();
	TreeNode(string & s, int & cou, TreeNode & l, TreeNode & r);
	TreeNode(TreeNode &trnd) = delete;
	TreeNode& operator= (TreeNode &trno) = delete;
	~TreeNode();

private:
	string value;
	int count;
	TreeNode *left;
	TreeNode *right;
};

TreeNode::TreeNode() :value("NULL"), count(0), left(new TreeNode()), right(new TreeNode())
{
}

TreeNode::TreeNode(string &s, int &cou, TreeNode &l, TreeNode &r) : value(s), count(cou), left(&l), right(&r)
{
}

TreeNode::~TreeNode()
{
}


//13.30
class HasPtr
{
public:
	HasPtr(const string &s = string()) :ps(new string(s)), i(0) {}
	HasPtr(HasPtr& has) :ps(new string(*has.ps)), i(has.i)
	{
		cout << "拷贝构造函数" << endl;
	}
	HasPtr& operator=(const HasPtr&);
	friend void swap(HasPtr &has1,HasPtr &has2);
	~HasPtr();
private:
	string *ps;
	int i;
};

HasPtr::~HasPtr()
{
	delete ps;
}

HasPtr& HasPtr::operator=(const HasPtr &has)//防范自赋值是非常重要的
{
	auto temp = new string(*has.ps);
	delete ps;
	this->ps = temp;
	this->i = has.i;
	return *this;
}

inline void swap(HasPtr &has1, HasPtr &has2)
{
	swap(has1.ps, has2.ps);
	swap(has1.i, has2.i);
}


int main()
{
	HasPtr test("10");
	HasPtr test3;
	auto test2 = test;
	test3 = test;
	cout << &test << endl;
	cout << &test2 << endl;
	cout << &test3 << endl;
	//using std::swap;
	swap(test2, test3);
	cout << &test << endl;
	cout << &test2 << endl;
	cout << &test3 << endl;
	return 0;
}


//13.31
#include <algorithm>
class HasPtr
{
public:
	HasPtr(const string &s = string()) :ps(new string(s)), i(0) {}
	HasPtr(HasPtr& has) :ps(new string(*has.ps)), i(has.i)
	{
		//cout << "拷贝构造函数" << endl;
	}
	HasPtr& operator=(const HasPtr&);
	friend void swap(HasPtr &has1, HasPtr &has2);
	bool operator<(const HasPtr &has) const;
	void syso()
	{
		cout << *ps << endl;
	}
	~HasPtr();
private:
	string *ps;
	int i;
};

HasPtr::~HasPtr()
{
	delete ps;
}

HasPtr& HasPtr::operator=(const HasPtr &has)//防范自赋值是非常重要的
{
	auto temp = new string(*has.ps);
	delete ps;
	this->ps = temp;
	this->i = has.i;
	return *this;
}

inline void swap(HasPtr &has1, HasPtr &has2)
{
	swap(has1.ps, has2.ps);
	swap(has1.i, has2.i);
	cout << "swap be called!" << endl;
}

bool HasPtr::operator<(const HasPtr &has) const
{
	cout << "< be called!" << endl;
	if (*ps < *has.ps)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	vector<HasPtr> vh;
	vh.push_back(HasPtr("d"));
	vh.push_back(HasPtr("c"));
	vh.push_back(HasPtr("e"));
	vh.push_back(HasPtr("a"));
	vh.push_back(HasPtr("b"));
	vh.push_back(HasPtr("f"));
	sort(vh.begin(),vh.end(),less<HasPtr>());
	for (auto &h:vh)
	{
		h.syso();
	}
	return 0;
}


//13.34
#include <set>
class Message
{
	friend class Folder;
public:
	explicit Message(const string &str = "") :contents(str) {}
	Message(const Message&);
	Message& operator=(const Message&);
	Message(Message&&);
	Message& operator=(Message&&);
	~Message();
	void move_Folders(Message *m);
	void save(Folder&);
	void remove(Folder&);
	friend void swap(Message &lhs, Message &rhs);

private:
	string contents;
	set<Folder*> folders;
	void add_to_Folder(const Message&);
	void remove_from_Folders();
};

Message::Message(const Message &m):contents(m.contents),folders(m.folders)
{
	add_to_Folder(m);
}

Message::Message(Message &&m) noexcept :contents(m.contents),folders(m.folders)
{
	move_Folders(&m);
}

Message::~Message()
{
	remove_from_Folders();
}

void Message::move_Folders(Message * m)
{
	folders = std::move(m->folders);
	for (auto f:folders)
	{
		f->remMsg(m);
		f->addMsg(this);
	}
	m->folders.clear();
}

void Message::save(Folder &f)
{
	folders.insert(&f);
	f.addMsg(this);
}

void Message::remove(Folder &f)
{
	folders.erase(&f);
	f.remMsg(this);
}

void Message::add_to_Folder(const Message &m)
{
	for (auto f:m.folders)
	{
		f->addMsg(this);
	}
}

void Message::remove_from_Folders()
{
	for (auto f : folders)
	{
		f->remMsg(this);
	}
}


Message & Message::operator=(const Message &rhs)
{
	remove_from_Folders();
	contents = rhs.contents;
	folders = rhs.folders;
	add_to_Folder(rhs);
	return *this;
}

Message & Message::operator=(Message &&rhs) noexcept
{
	if (this != &rhs)
	{
		remove_from_Folders();
		contents = std::move(rhs.contents);
		move_Folders(&rhs);
	}
	return *this;
}


void swap(Message &lhs,Message &rhs)
{
	using std::swap;
	for (auto f : lhs.folders)
	{
		f->remMsg(&lhs);
	}
	for (auto f : rhs.folders)
	{
		f->remMsg(&rhs);
	}
	swap(lhs.folders, rhs.folders);
	swap(lhs.contents, rhs.contents);
	for (auto f : lhs.folders)
	{
		f->addMsg(&lhs);
	}
	for (auto f : rhs.folders)
	{
		f->addMsg(&rhs);
	}
}


class Folder
{
public:
	Folder();
	void addMsg(Message*);
	void remMsg(Message*);
	~Folder();

private:
	set<Message*> sm;
};

void Folder::addMsg(Message *mess)
{
	sm.insert(mess);
}

void Folder::remMsg(Message *mess)
{
	sm.erase(mess);
}


//
#include <memory>
#include <algorithm>
class StrVec
{
public:
	StrVec() :elements(nullptr), first_free(nullptr), cap(nullptr) {}
	StrVec(const StrVec&);
	StrVec(initializer_list<string> ils);
	StrVec& operator=(const StrVec&);
	~StrVec();
	void push_back(const string&);
	size_t size() const { return first_free - elements; }
	size_t capacity() const { return cap - elements; }
	string* begin() const { return elements; }
	string* end() const { return first_free; }

private:
	static allocator<string> alloc;
	void chk_n_alloc()
	{
		if (size() ==capacity())
		{
			reallocate();
		}
	}
	pair<string*, string*> alloc_n_copy(const string*, const string*);
	void free();
	void reallocate();
	string *elements;
	string *first_free;
	string *cap;
};

StrVec::StrVec(const StrVec &str)
{
	auto newdata = alloc_n_copy(str.begin(), str.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
}

StrVec::~StrVec()
{
	free();
}
StrVec & StrVec::operator=(const StrVec &rhs)
{
	auto data = alloc_n_copy(rhs.begin(), rhs.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}


void StrVec::push_back(const string &s)
{
	chk_n_alloc();
	alloc.construct(first_free++, s);
}

pair<string*, string*> StrVec::alloc_n_copy(const string *b, const string *e)
{
	auto data = alloc.allocate(e - b);
	return {data,uninitialized_copy(b,e,data)};
}

void StrVec::free()
{
	if (elements)
	{
// 		for (auto p = first_free;p!=elements;)
// 		{
// 			alloc.destroy(--p);
// 		}
		for_each(elements, first_free, [this](string &rhs) {alloc.destroy(&rhs); });
		alloc.deallocate(elements, cap - elements);
	}
}


void StrVec::reallocate()
{
	auto newcapacity = size() ? 2 * size() : 1;
	auto newdata = alloc.allocate(newcapacity);
	auto dest = newdata;
	auto elem = elements;
	for (size_t i = 0;i!=size();++i)
	{
		alloc.construct(dest++, move(*elem++));
		elements = newdata;
		first_free = dest;
		cap = elements + newcapacity;
	}
}


StrVec::StrVec(initializer_list<string> ils)
{
	auto newdata = alloc_n_copy(ils.begin(), ils.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
}

int main()
{
	StrVec s1;
	for (auto &s:s1)
	{
		cout << s << endl;
	}
	return 0;
}


//13.44
class String
{
public:
	String() :elements(nullptr), first_free(nullptr), cap(nullptr) {}
	String(const String&);
	String &operator=(const String&);
	~String();

private:
	static allocator<char> alloc;
	string *elements;
	string *first_free;
	string *cap;
};

String::String()
{
}

String::~String()
{
}




//13.44  13.47 13.49.13.50
#include <string>
#include <algorithm>
#include <memory>
using namespace std;

class String
{
public:
	String();//默认构造函数

	String(const char*s)//接受c风格字符串参数的构造函数，s为指向字符串的指针(首位置)
	{
		auto s1 = const_cast<char*>(s);//转化为非常量的指针
		while (*s1)
		{
			++s1;//使其指向最后一个位置的尾部
		}
		alloc_n_copy(s, s1);//进行拷贝
	}
	String(const String&);//拷贝构造函数
	String& operator=(const String&);//拷贝赋值运算符
	String(String&&);
	String& operator=(String&&);
	~String()//析构函数
	{
		free();
	}
	void free()//释放内存
	{
		if (elements)
		{
			for_each(elements, end, [this](char &rhs) {alloc.destroy(&rhs); });
			alloc.deallocate(elements, end - elements);
		}
	}

private:
	allocator<char> alloc;//分配内存的方法
	char *elements;//首尾指针
	char *end;

	std::pair<char*, char*> alloc_n_copy(const char*a, const char*b)//拷贝赋值函数
	{
		auto s1 = alloc.allocate(b - a);//allocate参数为分配内存的大小
		auto s2 = uninitialized_copy(a, b, s1);//拷贝赋值，将a到b之间的元素拷贝至s1,返回的是最后一个构造元素之后的位置
		return make_pair(s1, s2);//返回首尾指针
	}

	void range_initializer(const char*c, const char*d)//初始化
	{
		auto p = alloc_n_copy(d, c);//拷贝并初始化新的string
		elements = p.first;
		end = p.second;//将新的string的首尾指针赋值
	}
};
String::String(const String &s)
{
	range_initializer(s.elements, s.end);
	cout << "拷贝构造函数被调用！"<< endl;
}

String & String::operator=(const String &s)
{
	this->free();
	range_initializer(s.elements, s.end);
	cout << "拷贝赋值运算符" << endl;
	return *this;
}


String::String(String &&s)
{
	//auto p = alloc_n_copy(s.elements, s.end);//拷贝并初始化新的string
	elements = s.elements;
	end = s.end;
	s.elements = s.end = nullptr;
	cout << "移动构造函数被调用！" << endl;
}

String & String::operator=(String &&rhs)
{
	if (this!=&rhs)
	{
		this->free();
		elements = rhs.elements;
		end = rhs.end;
		rhs.elements = rhs.end = nullptr;
	}
	cout << "移动赋值运算符" << endl;
	return *this;
}

String baz()
{
	String ret("world");
	return ret; // 返回值会避免拷贝
}
int main()
{
	vector<String> vec;

	String s5 = baz(); // 右值会避免拷贝

	String s1("hello");
	String s2 = std::move(s1);
	String s3(s2);
	s3 = s1;
	vec.push_back(s1);
	vec.push_back(s2);
	return 0;
}



//关于引用
int main()
{
	int i = 42;
	int &r = i;
	cout << i << endl;
	cout << r << endl;
	cout << &i << endl;
	cout << &r << endl;
	i = 100;
	cout << i << endl;
	cout << r << endl;
	cout << &i << endl;
	cout << &r << endl;
	int &&rr = i * 100;
	cout << i << endl;
	cout << r << endl;
	cout << &i << endl;
	cout << &r << endl;
	cout << rr << endl;
	cout << &rr << endl;
	rr = 1001;
	cout << rr << endl;
	cout << &rr << endl;
	return 0;
}



//13.53  13.54
HasPtr& HasPtr::operator=(const HasPtr &has)//防范自赋值是非常重要的
{
	auto temp = new string(*has.ps);
	delete ps;
	this->ps = temp;
	this->i = has.i;
	return *this;
}

HasPtr & HasPtr::operator=(HasPtr &&rhs) noexcept
{
	if (this!=&rhs)
	{
		ps = rhs.ps;
		i = rhs.i;
	}
	return *this;
}





//13.55
void push_back(const string &t) { data->push_back(t); }
void push_back(const string &&t) { data->push_back(move(t)); }


//13.56
#include <algorithm>
class Foo {
public:
	Foo sorted() && ;
	Foo sorted() const&;

private:
	vector<int> data;
};

Foo Foo::sorted() &&
{
	sort(data.begin(), data.end());
	std::cout << "&& be called" << std::endl; // debug
	return *this;
}

Foo Foo::sorted() const &
{
	//    Foo ret(*this);
	//    sort(ret.data.begin(), ret.data.end());
	//    return ret;

	std::cout << "const & be called" << std::endl; // debug

	//    Foo ret(*this);
	//    ret.sorted();     //13.56
	//    return ret;

	return Foo(*this).sorted(); //13.57
}

int main()
{
	Foo().sorted(); // call "&&"
	Foo f;
	f.sorted(); // call "const &"
}


//14.2
class Sales_data
{
public:
	Sales_data(string s, unsigned cnt, double price) :bookNo(s), units_sold(cnt), revenue(price) {};
	Sales_data() :Sales_data("", 0, 0) {};
	Sales_data(string s) :Sales_data(s, 0, 0) {};
	Sales_data(istream &is) :Sales_data() {};
	friend ostream& operator<< (ostream& , const Sales_data&);
	friend istream& operator>>(istream&, Sales_data&);
	Sales_data operator+(Sales_data&);
	Sales_data& operator+=(Sales_data&);
	void syso() const
	{
		cout << "test" << endl;
	}
	~Sales_data();

private:
	string bookNo;
	unsigned units_sold;
	double revenue;

};

Sales_data::~Sales_data()
{
}

ostream & operator<<(ostream &os, const Sales_data &s)
{
	os << "BookNo:" << s.bookNo << "   Sold:" << s.units_sold << "    Revenue:" << s.revenue;
	return os;
}

istream & operator>>(istream &is, Sales_data &s)
{
	double price;
	is >> s.bookNo >> s.units_sold >> price;
	if (is)
	{
		s.revenue = s.units_sold*price;
	}
	else
	{
		s = Sales_data();
	}
	return is;
}

Sales_data Sales_data::operator+(Sales_data &s)
{
	if (this->bookNo==s.bookNo)
	{
		Sales_data ret;
		ret.bookNo = this->bookNo;
		ret.units_sold = this->units_sold + s.units_sold;
		ret.revenue += this->revenue + s.revenue;
		return ret;
	}
	else
	{
		return *this;
	}
}

Sales_data& Sales_data::operator+=(Sales_data &s)
{
	if (this->bookNo == s.bookNo)
	{
		this->units_sold += s.units_sold;
		this->revenue += s.revenue;
	}
	return *this;
}

int main()
{
	Sales_data *qqs = new Sales_data("sasa");
	Sales_data sq("a",10,20);
	Sales_data sq1("a", 5, 10);
	auto mq = sq + sq1;
	sq += sq1;
	cout << mq << endl;
	cout << sq << endl;
	return 0;
}


//14.5  14.8  14.12   14.17  14.19
class Date
{
public:
	Date();
	Date(int y);
	Date(int y, int m);
	Date(int y, int m, int d);
	Date& operator=(Date&);
	friend int operator-(Date& lhd,Date& rhd);
	friend bool operator==(Date& lhd, Date& rhd);
	friend bool operator!=(Date& lhd, Date& rhd);
	friend ostream& operator<<(ostream& os,const Date& d);
	friend istream& operator>>(istream& is, Date& d);
	friend bool operator>(const Date &lhs, const Date& rhs);
	friend bool operator<(const Date &lhs, const Date& rhs);
	~Date();

private:
	int year;
	int month;
	int day;
};

ostream & operator<<(ostream & os,const Date & d)
{
	os << d.year<<"年" << d.month<< "月" << d.day<<"日";
	return os;
}

bool operator==(Date & lhd, Date & rhd)
{
	return lhd.year==rhd.year&&lhd.month ==rhd.month&&lhd.day == rhd.day;
}

bool operator!=(Date & lhd, Date & rhd)
{
	return !(lhd==rhd);
}

istream & operator>>(istream & is, Date & d)
{
	is >> d.year >> d.month >> d.day;
	if (!is)
	{
		d = Date(0,0,0);
	}
	return is;
}

Date & Date::operator=(Date &d)
{
	this->year = d.year;
	this->month = d.month;
	this->day = d.day;
	return *this;
}


int operator-(Date &lhd,Date &rhd)
{
	if (lhd.year >= rhd.year)
	{
		return (lhd.year * 365 + lhd.month * 30 + lhd.day) - (rhd.year * 365 + rhd.month * 30 + rhd.day);
	}
	else
	{
		return (rhd.year * 365 + rhd.month * 30 + rhd.day) - (lhd.year * 365 + lhd.month * 30 + lhd.day);
	}
}


bool operator>(const Date & lhd, const Date & rhd)
{

	return (lhd.year * 365 + lhd.month * 30 + lhd.day) - (rhd.year * 365 + rhd.month * 30 + rhd.day)>0?1:0;
}

bool operator<(const Date & lhd, const Date & rhd)
{
	return rhd>lhd;
}


Date::Date(int y, int m, int d) : year(y), month(m), day(d)
{
}

Date::~Date()
{
}


int main()
{
	Date d1(2009, 2, 1);
	Date d2(2010, 1, 1);
	Date d3 = d2;
	cout << d1 - d2 << endl;
	cout << d3 << endl;
// 	cin >> d3;
// 	cout << d3 << endl;
	cout << (d3 == d2) << endl;
	cout << (d3 == d1) << endl;
	cout << (d3 != d2) << endl;
	cout << (d3 != d1) << endl;
	cout << "<>" << endl;
	cout << (d1 > d2) << endl;
	cout << (d1 < d2) << endl;
	cout << (d2 > d1) << endl;
	cout << (d2 < d1) << endl;
	return 0;
}


//第十四章
class vector3
{
public:
	vector3();
	vector3(float X, float Y, float Z);
	vector3(vector3 &v);
	vector3(vector3 &&v);
	friend vector3 operator+(const vector3 &lhs, const vector3 &rhs);
	friend vector3 operator-(const vector3 &lhs, const vector3 &rhs);
	friend vector3 operator*(const vector3 &lhs, const vector3 &rhs);
	friend vector3 operator/(const vector3 &lhs, const vector3 &rhs);
	friend bool operator==(const vector3 &lhs, const vector3 &rhs);
	friend bool operator!=(const vector3 &lhs, const vector3 &rhs);
	friend ostream& operator<<(ostream&os,const vector3 &rhs);
	friend istream& operator>>(istream&os,vector3 &rhs);
	vector3& operator=(vector3 &&rhs);
	vector3& operator=(const vector3 &rhs);
	vector3& operator+=(const vector3 &rhs);
	vector3& operator-=(const vector3 &rhs);
	vector3& operator*=(const vector3 &rhs);
	vector3& operator/=(const vector3 &rhs);
	inline float distance(const vector3& v) const;

	~vector3();

private:
	float x;
	float y;
	float z;
};

vector3::vector3():x(0),y(0),z(0)
{
}

vector3::vector3(float X, float Y, float Z):x(X),y(Y),z(Z)
{
}

vector3::vector3(vector3 & v):x(v.x), y(v.y), z(v.z)
{
}

vector3::vector3(vector3 && v) : x(v.x), y(v.y), z(v.z)
{

}

vector3 & vector3::operator=(vector3 && rhs)
{
	this->x = rhs.x;
	this->y = rhs.y;
	this->z = rhs.z;
	return *this;
}

vector3 & vector3::operator=(const vector3 & rhs)
{
	this->x = rhs.x;
	this->y = rhs.y;
	this->z = rhs.z;
	return *this;
}

vector3 & vector3::operator+=(const vector3 & rhs)
{
	this->x += rhs.x;
	this->y += rhs.y;
	this->z += rhs.z;
	return *this;
}

vector3 & vector3::operator-=(const vector3 & rhs)
{
	this->x -= rhs.x;
	this->y -= rhs.y;
	this->z -= rhs.z;
	return *this;
}

vector3 & vector3::operator*=(const vector3 & rhs)
{
	this->x *= rhs.x;
	this->y *= rhs.y;
	this->z *= rhs.z;
	return *this;
}

vector3 & vector3::operator/=(const vector3 & rhs)
{
	this->x /= rhs.x;
	this->y /= rhs.y;
	this->z /= rhs.z;
	return *this;
}

inline float vector3::distance(const vector3 & v) const
{
	return sqrtf(pow((x-v.x),2)+ pow((y - v.y), 2)+ pow((z - v.z), 2));
}

vector3::~vector3()
{
}

vector3 operator+(const vector3 &lhs, const vector3 &rhs)
{
	return vector3(lhs.x+rhs.x,lhs.y+rhs.y,lhs.z+lhs.z);
}

vector3 operator-(const vector3 &lhs, const vector3 &rhs)
{
	return vector3(lhs.x - rhs.x, lhs.y - rhs.y, lhs.z - lhs.z);
}

vector3 operator*(const vector3 &lhs, const vector3 &rhs)
{
	return vector3(lhs.x * rhs.x, lhs.y * rhs.y, lhs.z * lhs.z);
}

vector3 operator/(const vector3 &lhs, const vector3 &rhs)
{
	return vector3(lhs.x / rhs.x, lhs.y / rhs.y, lhs.z / lhs.z);
}


bool operator==(const vector3 &lhs, const vector3 &rhs)
{
	return lhs.x == rhs.x&&lhs.y == rhs.y&& lhs.z == lhs.z;
}

bool operator!=(const vector3 &lhs, const vector3 &rhs)
{
	return !(lhs==rhs);
}

ostream & operator<<(ostream & os,const vector3 & rhs)
{
	os << rhs.x << " " << rhs.y << " " << rhs.z;
	return os;
}

istream & operator>>(istream & is,vector3 & rhs)
{
	is >> rhs.x >> rhs.y >> rhs.z;
	if (!is)
	{
		rhs = vector3();
	}
	return is;
}


int main()
{
	vector3 v1;
	vector3 v2(1, 2, 3);
	vector3 v3(2.0f, 3.0f, 4.0f);
	auto v4 = v3 + v2;
	vector3 v5{ 1,2,3 };
	vector3 v6 = { 2,3,4 };
	cout << (v2!=v5) << endl;
	cout << v6 << endl;
	cout << v4 << endl;
	cout << v3.distance(v2) << endl;
	cout << sqrt(3) << endl;
}

//14.26
class StrVec
{
public:
	StrVec();
	~StrVec();
	string& operator[](size_t n) { return element[n]; }
	const string& operator[](size_t n) const { return element[n]; }

private:
	string *element;
};

StrVec::StrVec()
{
}

StrVec::~StrVec()
{
}


//14.34
class IfThenElse
{
public:
	IfThenElse();
	~IfThenElse();
	string operator()(bool i,string t,string e);

private:

};

IfThenElse::IfThenElse()
{
}

IfThenElse::~IfThenElse()
{
}

string IfThenElse::operator()(bool i, string t, string e)
{
	if (i)
	{
		return t;
	}
	else
	{
		return e;
	}
}



//14.35   14.36
class PrintString
{
public:
	PrintString();
	~PrintString();
	string operator()(istream &is);

private:
};


PrintString::PrintString()
{
}

PrintString::~PrintString()
{
}

string PrintString::operator()(istream & is)
{
	string ret;
	if (is)
	{
		is >> ret;
	}
	else
	{
		ret = string();
	}
	return ret;
}

int main()
{
	PrintString ps;
	vector<string> vs;
	for (int i = 0;i<5;++i)
	{
		vs.push_back(ps(cin));
	}
	for (auto s:vs)
	{
		cout << s << " ";
	}
	return 0;
}



//13.37
#include <numeric>
class CheckVal
{
public:
	CheckVal(int s):val(s) {}
	bool operator()(int rhs)
	{
		return val == rhs;
	}

private:
	int val;
};


int main()
{
	vector<int> text{ 1,2,3,4,5,6 };
	int newval = 200;
	CheckVal cv(2);
	replace_if(text.begin(), text.end(), cv ,newval);
	for (auto i:text)
	{
		cout << i << " ";
	}
	return 0;
}


//14.38
#include <fstream>
#include <sstream>
class CheckLength
{
public:
	CheckLength(int length) :m_length(length){}
	bool operator()(int length)
	{
		return m_length == length;
	}

private:
	int m_length;
};

int main()
{
	vector<string> vs;
	ifstream file("E:\\Users\\xagu\\source\\repos\\关于decltype\\Debug\\words.txt");
	string text;
	while (getline(file,text))
	{
		istringstream iss(text);
		string word;
		while(iss >> word)
		{
			vs.push_back(word);
		}
	}
	int i = 10, length = 0;
	while (i--)
	{
		for (auto &s : vs)
		{
			CheckLength cl(s.length());
			//cout << cl(i);
			if (cl(i)==1)
			{
				++length;
			}
		}
		cout << "长度为" << i << "：" << length <<endl;
		length = 0;
	}

	return 0;
}



//14.39
#include <fstream>
#include <sstream>
#include <map>
class CheckLength
{
public:
	CheckLength(int length) :m_length(length) {}
	bool operator()(int length)
	{
		return m_length == length;
	}

private:
	int m_length;
};

int main()
{
	vector<string> vs;
	map<size_t, size_t> mss;
	ifstream file("E:\\Users\\xagu\\source\\repos\\关于decltype\\Debug\\words.txt");
	string text;
	while (getline(file, text))
	{
		istringstream iss(text);
		string word;
		while (iss >> word)
		{
			vs.push_back(word);
		}
	}
	int length = 0;
	for (auto &s : vs)
	{
		CheckLength cl(s.length());
		if (s.length() >= 10)
		{
			++length;
		}
		else
		{
			++mss[s.length()];
		}
	}
	for (auto s:mss)
	{
		cout << "长度为" << s.first << "：" << s.second << endl;
	}
	cout << "长度>" << 10 << "：" << length << endl;
	return 0;
}



//14.40
class Biggies
{
public:
	bool operator()(const string &a, const string &b)
	{
		return a.size() < b.size();
	}

private:

};



//14.42
#include <functional>
#include <random>
int main()
{
	vector<int> vi;
	int i = 20;
	srand(time(NULL));
	while (i--)
	{

		vi.push_back(rand());
	}
	for (auto i:vi)
	{
		cout << i << " " << endl;
	}
	cout<< "大于1024的有：" <<count_if(vi.begin(), vi.end(), bind2nd(greater_equal<int>(),11024))<<endl;
	return 0;
}


//14.42
#include <functional>
#include <random>
using namespace std::placeholders;
int main()
{
	vector<int> vi{4,4,4,4};
	int i = 20;
	srand(time(NULL));
	while (i--)
	{

		vi.push_back(rand());
	}
	for (auto i : vi)
	{
		cout << i << " " << endl;
	}
	cout << "大于1024的有：" << *find_if(vi.begin(), vi.end(), bind(not_equal_to<int>(),4,_1)) << endl;
	return 0;
}


//14.42
#include <functional>
#include <random>
using namespace std::placeholders;
int main()
{
	vector<int> vi;
	int i = 20;
	srand(time(NULL));
	while (i--)
	{

		vi.push_back(rand());
	}
	for (auto i : vi)
	{
		cout << i << " " << endl;
	}
	cout << "------------------------------" << endl;
	transform(vi.begin(), vi.end(),vi.begin(), bind(multiplies<int>(), 2, _1));
	for (auto i : vi)
	{
		cout << i << " " << endl;
	}
	return 0;
}


//14.43
#include <functional>
#include <random>
using namespace std::placeholders;
int main()
{
	vector<int> vi{10,20,20,30,40,220};
	int i = 20;
// 	srand(time(NULL));
// 	while (i--)
// 	{
//
// 		vi.push_back(rand());
// 	}
	for (auto i : vi)
	{
		cout << i << " " << endl;
	}
	cout << "------------------------------" << endl;
	cout << all_of(vi.begin(), vi.end(), bind(equal_to<int>(), bind(modulus<int>(), _1, 10), 0)) << " " << endl;
	return 0;
}


//14.44
#include <map>
#include <functional>
#include <algorithm>
int add(int i, int j)
{
	return i + j;
}
auto mod = [](int i, int j) {return i * j; };
int main()
{
	map<string,function<int(int,int)>> binops =
	{
		{"+",add},
		{"-",minus<int>()},
		{"*",[](int i,int j) {return i * j; }},
		{"/",mod}
	};
	string expr;
	cout << "输入二元运算：";
	cin >> expr;
	if (find(expr.begin(), expr.end(), '+')!=expr.end())
	{
		string i = expr.substr(0, distance(expr.begin(), find(expr.begin(), expr.end(), '+')));
		string j = expr.substr(i.length() + 1, distance(find(expr.begin(), expr.end(), '+') - 1, expr.end()));
		cout << expr << "=" << binops["+"](stoi(i), stoi(j)) << endl;
	}
	else if (find(expr.begin(), expr.end(), '-') != expr.end())
	{
		string i = expr.substr(0, distance(expr.begin(), find(expr.begin(), expr.end(), '-')));
		string j = expr.substr(i.length() + 1, distance(find(expr.begin(), expr.end(), '-') - 1, expr.end()));
		cout << expr << "=" << binops["-"](stoi(i), stoi(j)) << endl;
	}
	else if (find(expr.begin(), expr.end(), '*') != expr.end())
	{
		string i = expr.substr(0, distance(expr.begin(), find(expr.begin(), expr.end(), '*')));
		string j = expr.substr(i.length() + 1, distance(find(expr.begin(), expr.end(), '*') - 1, expr.end()));
		cout << expr << "=" << binops["*"](stoi(i), stoi(j)) << endl;
	}
	else if (find(expr.begin(), expr.end(), '/') != expr.end())
	{
		string i = expr.substr(0, distance(expr.begin(), find(expr.begin(), expr.end(), '/')));
		string j = expr.substr(i.length() + 1, distance(find(expr.begin(), expr.end(), '/') - 1, expr.end()));
		cout << expr << "=" << binops["/"](stoi(i), stoi(j)) << endl;
	}
	return 0;
}


//14.44优化算法
#include <map>
#include <functional>
#include <algorithm>
int add(int i, int j)
{
	return i + j;
}
auto mod = [](int i, int j) {return i * j; };
int main()
{
	map<char, function<int(int, int)>> binops =
	{
		{'+',add},
		{'-',minus<int>()},
		{'*',[](int i,int j) {return i * j; }},
		{'/',mod}
	};
	int a, b;
	string op;
	cin >> a >> op >> b;
	cout<< binOps[op](a, b) << endl;
	return 0;
}




//14.45
class Sales_data
{
public:
	Sales_data(string s, unsigned cnt, double price) :bookNo(s), units_sold(cnt), revenue(price) {};
	Sales_data() :Sales_data("", 0, 0) {};
	Sales_data(string s) :Sales_data(s, 0, 0) {};
	Sales_data(istream &is) :Sales_data() {};
	explicit operator string() const
	{
		return bookNo;
	}
	explicit operator double() const
	{
		return revenue;
	}
	void syso() const
	{
		cout << "test" << endl;
	}

private:
	string bookNo;
	unsigned units_sold;
	double revenue;

};


#include <map>
#include <functional>
#include <algorithm>
int add(int i, int j)
{
	return i + j;
}
auto mod = [](int i, int j) {return i * j; };
int main()
{
	map<char, function<int(int, int)>> binops =
	{
		{'+',add},
		{'-',minus<int>()},
		{'*',[](int i,int j) {return i * j; }},
		{'/',mod}
	};
	int a, b;
	char op;
	cin >> a >> op >> b;
	cout << binops[op](a, b) << endl;
	return 0;
}


//15章  OOP

//15.3   15.5   15.11
#include <memory>
class Quote
{
public:
	Quote() = default;
	virtual ~Quote() = default;
	Quote(string bookNo, double price) :m_bookNo(bookNo), m_price(price) {}
	string isbn() const
	{
		return m_bookNo;
	}
	virtual double net_price(size_t n) const
	{
		return n * m_price;
	}
	virtual void debug() const
	{
		cout << m_bookNo << " " << m_price << endl;
	}


private:
	string m_bookNo;
protected:
	double m_price;

};

double print_total(ostream &os, const Quote &item, size_t n)
{
	double ret = item.net_price(n);
	os << "ISBN:" << item.isbn() << "# sold:" << n << " total due:" << ret << endl;
	return ret;
}


//15.5
class Bulk_quote:public Quote
{
public:
	Bulk_quote()=default;
	Bulk_quote(const string&, double, size_t, double);
	double net_price(size_t) const override;
	void debug() const;

private:
	size_t m_min_qty = 0;
	double m_discount = 0.0;
};

Bulk_quote::Bulk_quote(const string &book, double p, size_t qty, double disc):Quote(book,p),m_min_qty(qty),m_discount(disc)
{
}

double Bulk_quote::net_price(size_t cnt) const
{
	if (cnt>=m_min_qty)
	{
		return cnt * (1 - m_discount)*m_price;
	}
	else
	{
		return cnt * m_price;
	}
}

void Bulk_quote::debug() const
{
	cout << m_min_qty << " " << m_discount << endl;
}


int main()
{
//	Bulk_quote* bulk = new Bulk_quote("C++PRIMER", 98, 10, 0.8);
	shared_ptr<Quote> bulk2 = make_shared<Quote>("C++PRIMER", 98);
	shared_ptr<Bulk_quote> bulk = make_shared<Bulk_quote>("C++PRIMER", 98, 10, 0.8);
	print_total(cout, *bulk, 15);
	print_total(cout, *bulk2, 15);
//	delete bulk.get();
// 	cout << bulk << endl;
// 	cout << bulk.get() << endl;
	bulk->debug();
	bulk2->debug();
	return 0;
}


//15.15
#include <memory>
class Quote
{
public:
	Quote() = default;
	virtual ~Quote() = default;
	Quote(string bookNo, double price) :m_bookNo(bookNo), m_price(price) {}
	string isbn() const
	{
		return m_bookNo;
	}
	virtual double net_price(size_t n) const
	{
		return n * m_price;
	}
	virtual void debug() const
	{
		cout << m_bookNo << " " << m_price << endl;
	}

private:
	string m_bookNo;
protected:
	double m_price;

};

double print_total(ostream &os, const Quote &item, size_t n)
{
	double ret = item.net_price(n);
	os << "ISBN:" << item.isbn() << "# sold:" << n << " total due:" << ret << endl;
	return ret;
}

class Disc_quote : public Quote
{
public:
	Disc_quote() = default;
	Disc_quote(const string& book, double price, size_t qty, double disc) :Quote(book, price), m_quantity(qty), m_discount(disc) {}
	double net_price(size_t n) const = 0;

private:
	size_t m_quantity = 0;
	double m_discount = 0.0;
};


class Bluk_quote:public Disc_quote
{
public:
	Bluk_quote() = default;
	Bluk_quote(const string& book, double price, size_t qty, double disc):Disc_quote(book,price,qty,disc) {}
	double net_price(size_t n) const override;
	double net_price(size_t) const override;
	
};

int main()
{
	//Disc_quote dq = new Disc_quote();  纯虚函数不能实例化
	return 0;
}


//15.18 15.19 15.20
class Base
{
public:
	void pub_mem();
	void memfcn(Base &b)
	{
		b = *this;
	}
protected:
	int pro_mem;
private:
	char priv_mem;

};

class Pub_Derv:public Base
{
	int f()
	{
		return pro_mem;
	}
	char g()
	{
		//return priv_mem;  error 无法访问，因为是私有的
	}
	void memfcn(Base &b)
	{
		b = *this;
	}
};

struct Priv_Derv:private Base
{
	int f1() const
	{
		return pro_mem;
	}
	void memfcn(Base &b)
	{
		b = *this;
	}
};

int main()
{
	Pub_Derv d1;
	Base *p = &d1;
	Priv_Derv d2;
	//p = &d2;  //error 无法访问，因为是私有的

	return 0;
}


//15.21
#define PI 3.14;
class Rect
{
public:
	Rect() = default;
	virtual ~Rect() = default;
	Rect(float length, float width) :m_length(length), m_width(width) {}
	virtual float GetArea() const = 0;
protected:
	float m_length;
	float m_width;
};


class Square:public Rect
{
public:
	Square(float width) :Rect(width, width) {}
	float GetArea() const
	{
		return m_length * m_width;
	}
private:
};

class Circle
{
public:
	Circle() = default;
	virtual ~Circle() = default;
	Circle(float r) :m_r(r) {}
	float GetArea() const 
	{
		return m_r*m_r*PI;
	}
protected:
	float m_r;
};


class Ball:public Circle
{
public:
	Ball() = default;
	virtual ~Ball() = 0;
	float GetArea() const
	{
		return 3/4*m_r*m_r * m_r*PI;
	}
private:

};



//15.26
#include <memory>
class Quote
{
public:
	Quote() = default;
	virtual ~Quote() = default;
	Quote(string bookNo, double price) :m_bookNo(bookNo), m_price(price)
	{
		cout << "quote构造函数" << endl;
	}
	Quote(const Quote &);
	Quote(const Quote &&);
	Quote& operator=(const Quote&) noexcept;
	Quote& operator=(const Quote&&) noexcept;

	

	string isbn() const
	{
		return m_bookNo;
	}
	virtual double net_price(size_t n) const
	{
		return n * m_price;
	}
	virtual void debug() const
	{
		cout << m_bookNo << " " << m_price << endl;
	}


private:
	string m_bookNo;
protected:
	double m_price;

};


Quote::Quote(const Quote &qu) :m_bookNo(qu.m_bookNo), m_price(qu.m_price)
{
	cout << "quote拷贝构造函数" << endl;
}

Quote::Quote(const Quote &&qu) : m_bookNo(move(qu.m_bookNo)), m_price(move(qu.m_price))
{
	cout << "quote移动构造函数" << endl;
}

Quote & Quote::operator=(const Quote &qu) noexcept
{
	if (&qu != this)
	{
		m_bookNo = qu.m_bookNo;
		m_price = qu.m_price;
	}
	cout << "quote拷贝赋值函数" << endl;
	return *this;
}

Quote & Quote::operator=(const Quote &&qu) noexcept
{
	if (&qu != this)
	{
		m_bookNo = move(qu.m_bookNo);
		m_price = move(qu.m_price);
	}
	cout << "quote移动赋值函数" << endl;
	return *this;
}

double print_total(ostream &os, const Quote &item, size_t n)
{
	double ret = item.net_price(n);
	os << "ISBN:" << item.isbn() << "# sold:" << n << " total due:" << ret << endl;
	return ret;
}


class Bulk_quote :public Quote
{
public:
	Bulk_quote() = default;
	Bulk_quote(const string&, double, size_t, double);
	double net_price(size_t) const override;
	void debug() const;
	Bulk_quote(Bulk_quote &);
	Bulk_quote(Bulk_quote &&);
	Bulk_quote& operator=(const Bulk_quote&) noexcept;
	Bulk_quote& operator=(const Bulk_quote&&) noexcept;

private:
	size_t m_min_qty = 0;
	double m_discount = 0.0;
};

Bulk_quote::Bulk_quote(const string &book, double p, size_t qty, double disc) :Quote(book, p), m_min_qty(qty), m_discount(disc)
{
	cout << "Bulk_quote构造函数" << endl;
}

Bulk_quote::Bulk_quote(Bulk_quote &bulk):Quote(bulk),m_min_qty(bulk.m_min_qty),m_discount(bulk.m_discount)
{
	cout << "Bulk_quote拷贝构造函数" << endl;
}

Bulk_quote::Bulk_quote(Bulk_quote &&bulk) : Quote(move(bulk)), m_min_qty(move(bulk.m_min_qty)), m_discount(move(bulk.m_discount))
{
	cout << "Bulk_quote移动构造函数" << endl;
}

Bulk_quote & Bulk_quote::operator=(const Bulk_quote &bulk) noexcept
{
	if (&bulk != this)
	{
		Quote:: operator = (bulk);
		m_min_qty = bulk.m_min_qty;
		m_discount = bulk.m_discount;
	}
	cout << "Bulk_quote拷贝赋值函数" << endl;
	return *this;
}

Bulk_quote & Bulk_quote::operator=(const Bulk_quote &&bulk) noexcept
{
	if (&bulk != this)
	{
		Quote::operator=(move(bulk));
		m_min_qty = move(bulk.m_min_qty);
		m_discount = move(bulk.m_discount);
	}
	cout << "Bulk_quote移动赋值函数" << endl;
	return *this;
}


double Bulk_quote::net_price(size_t cnt) const
{
	if (cnt >= m_min_qty)
	{
		return cnt * (1 - m_discount)*m_price;
	}
	else
	{
		return cnt * m_price;
	}
}

void Bulk_quote::debug() const
{
	cout << m_min_qty << " " << m_discount << endl;
}

int main()
{
	cout << "----------------------------------" << endl;
	Quote q("C++ PRIMER", 100),q1, q4;
	cout << "----------------------------------" << endl;
	q1 = q;
	cout << "----------------------------------" << endl;
	Quote q2(q);
	cout << "----------------------------------" << endl;
	Quote q3(move(q));
	cout << "----------------------------------" << endl;
	q4 = move(q);
	cout << "----------------------------------" << endl;

	cout << "----------------------------------" << endl;
	Bulk_quote qq("C++ PRIMER", 100,10,0.8),qq1,qq4;
	cout << "----------------------------------" << endl;
	qq1 = qq;
	cout << "----------------------------------" << endl;
	Bulk_quote qq2(qq);
	cout << "----------------------------------" << endl;
	Bulk_quote qq3(move(qq));
	cout << "----------------------------------" << endl;
	qq4 = move(qq);
	cout << "----------------------------------" << endl;
	return 0;
}


//15.27   15.28
#include <memory>
class Quote
{
public:
	Quote() = default;
	virtual ~Quote() = default;
	Quote(string bookNo, double price) :m_bookNo(bookNo), m_price(price) {}
	string isbn() const
	{
		return m_bookNo;
	}
	virtual double net_price(size_t n) const
	{
		return n * m_price;
	}
	virtual void debug() const
	{
		cout << m_bookNo << " " << m_price;
	}


private:
	string m_bookNo;
protected:
	double m_price;

};

double print_total(ostream &os, const Quote &item, size_t n)
{
	double ret = item.net_price(n);
	os << "ISBN:" << item.isbn() << "# sold:" << n << " total due:" << ret << endl;
	return ret;
}

class Bulk_quote :public Quote
{
public:
	Bulk_quote() = default;
	Bulk_quote(const string&, double, size_t, double);
	double net_price(size_t) const override;
	void debug() const;
	using Quote::Quote;

private:
	size_t m_min_qty = 0;
	double m_discount = 0.0;
};

Bulk_quote::Bulk_quote(const string &book, double p, size_t qty, double disc) :Quote(book, p), m_min_qty(qty), m_discount(disc)
{
}

double Bulk_quote::net_price(size_t cnt) const
{
	if (cnt >= m_min_qty)
	{
		return cnt * (1 - m_discount)*m_price;
	}
	else
	{
		return cnt * m_price;
	}
}

void Bulk_quote::debug() const
{
	Quote::debug();
	cout<<" "<< m_min_qty << " " << m_discount;
}

int main()
{
	Bulk_quote b1("C++ PRIMER", 90);
	vector<shared_ptr<Quote>> vq;
//	vq.push_back(make_shared<Bulk_quote>("C++ primer", 99,20,0.8));
//	vq.push_back(make_shared<Bulk_quote>("C langrage", 100, 20, 0.8));
	vq.push_back(make_shared<Bulk_quote>("C langrage", 100));
	vq.push_back(make_shared<Bulk_quote>("C++ primer", 99));
	double sum = 0;
	for (auto i:vq)
	{
		//i->debug();
		//cout << endl;
		sum += i->net_price(1);
	}
	cout << sum << endl;
	return 0;
}


//15.30
#include <memory>
class Quote
{
public:
	Quote() = default;
	virtual ~Quote() = default;
	Quote(string bookNo, double price) :m_bookNo(bookNo), m_price(price) {}
	string isbn() const
	{
		return m_bookNo;
	}
	virtual double net_price(size_t n) const
	{
		return n * m_price;
	}
	virtual void debug() const
	{
		cout << m_bookNo << " " << m_price << endl;
	}

	virtual Quote* clone() const &
	{
		return new Quote(*this);
	}
	virtual Quote* clone() const &&
	{
		return new Quote(move(*this));
	}


private:
	string m_bookNo;
protected:
	double m_price;

};

double print_total(ostream &os, const Quote &item, size_t n)
{
	double ret = item.net_price(n);
	os << "ISBN:" << item.isbn() << "# sold:" << n << " total due:" << ret << endl;
	return ret;
}


#include <set>
class Bulk_quote :public Quote
{
public:
	Bulk_quote() = default;
	Bulk_quote(const string&, double, size_t, double);
	double net_price(size_t) const override;
	void debug() const;
	virtual Bulk_quote* clone() const &
	{
		return new Bulk_quote(*this);
	}
	virtual Bulk_quote* clone() const &&
	{
		return new Bulk_quote(move(*this));
	}

private:
	size_t m_min_qty = 0;
	double m_discount = 0.0;
};

Bulk_quote::Bulk_quote(const string &book, double p, size_t qty, double disc) :Quote(book, p), m_min_qty(qty), m_discount(disc)
{
}

double Bulk_quote::net_price(size_t cnt) const
{
	if (cnt >= m_min_qty)
	{
		return cnt * (1 - m_discount)*m_price;
	}
	else
	{
		return cnt * m_price;
	}
}

void Bulk_quote::debug() const
{
	cout << m_min_qty << " " << m_discount << endl;
}


class Basket
{
public:
	void add_item(const shared_ptr<Quote> &sale)
	{
		items.insert(sale);
	}
	void add_item(const Quote& sale);
	void add_item(Quote&& sale);
	double total_receipt(ostream&) const;
	~Basket()
	{
		for (auto &iter : items)
		{
			delete &iter;
		}
	}


private:
	static bool compare(const shared_ptr<Quote> &lhs, const shared_ptr<Quote> &rhs)
	{
		return lhs->isbn() < rhs->isbn();
	}
	multiset<shared_ptr<Quote>, decltype(compare)*> items{compare};
};

void Basket::add_item(const Quote & sale)
{
	items.insert(shared_ptr<Quote>(sale.clone()));
}

void Basket::add_item(Quote && sale)
{
	items.insert(shared_ptr<Quote>(move(sale.clone())));
}

double Basket::total_receipt(ostream &os) const
{
	double sum = 0.0;
	for (auto iter = items.cbegin();iter != items.cend();iter = items.upper_bound(*iter))
	{
		sum += print_total(os, **iter, items.count(*iter));
	}
	os << "Total Sale:" << sum << endl;
	return sum;
}




//
#include <fstream>
#include <map>
#include <set>
#include <memory>
#include <sstream>
class QueryResult;
class TextQuery
{
public:
	using line_no = vector<string>::size_type;
	TextQuery(ifstream&);
	QueryResult query(const string&) const;

private:
	map<string, shared_ptr<set<line_no>>> wm;
	shared_ptr<vector<string>> file;
};

TextQuery::TextQuery(ifstream &is) :file(new vector<string>)
{
	string text;
	while (getline(is, text))
	{
		file->push_back(text);
		size_t n = file->size();
		istringstream line(text);
		string word;
		while (line >> word)
		{
			auto &lines = wm[word];
			if (!lines)
			{
				lines.reset(new set<line_no>);
			}
			lines->insert(n);
		}
	}
}


class QueryResult
{
	friend ostream& print(ostream&, const QueryResult&);
public:
	QueryResult(string s, shared_ptr<set<TextQuery::line_no>> p, shared_ptr<vector<string>> f) :sought(s), lines(p), file(f)
	{
	}


private:
	string sought;
	shared_ptr<set<TextQuery::line_no>> lines;
	shared_ptr<vector<string>> file;
};

QueryResult TextQuery::query(const string &sought) const
{
	static shared_ptr<set<line_no>> nodata(new set<line_no>);
	auto loc = wm.find(sought);
	if (loc == wm.end())
	{
		return QueryResult(sought, nodata, file);
	}
	else
	{
		return QueryResult(sought, loc->second, file);
	}
}

string make_plural(size_t ctr, const string &word, const string &ending)
{
	return (ctr > 1) ? word + ending : word;
}

ostream &print(ostream &os, const QueryResult &qr)
{
	os << qr.sought << " occurs " << qr.lines->size() << " "
		<< make_plural(qr.lines->size(), "time", "s") << endl;
	for (auto num : *qr.lines)
	{
		os << "\t(line " << num + 1 << ") " << *(qr.file->begin() + num) << endl;
	}
	return os;
}
void runQueries(ifstream &infile)
{
	TextQuery tq(infile);
	while (true)
	{
		cout << "enter word to look for,or q to quit：";
		string s;
		if (!(cin >> s) || s == "q")
		{
			break;
		}
		print(cout, tq.query(s)) << endl;
	}
}


class Query_base
{
	friend class Query;
private:
	virtual QueryResult eval(const TextQuery&) const = 0;
	virtual string rep() const = 0;
protected:
	using line_to = TextQuery::line_no;
	virtual ~Query_base() = default;
};


class Query
{
	friend Query operator~(const Query&);
	friend Query operator|(const Query&, const Query&);
	friend Query operator&(const Query&, const Query&);
public:
	Query(const string&);
	QueryResult eval(const TextQuery &t) const
	{
		return q->eval(t);
	}
	string rep() const
	{
		return q->rep();
	}
private:
	Query(shared_ptr<Query_base> query) :q(query) {}
	shared_ptr<Query_base> q;
};

inline Query::Query(const string &s) :q(new WordQuery(s)) {}

ostream & operator<<(ostream &os, const Query &query)
{
	return os << query.rep();
}

class WordQuery:public Query_base
{
	friend class Query;
public:
	WordQuery(const string &s) :query_word(s) {}
	QueryResult eval(const TextQuery &t) const
	{
		return t.query(query_word);
	}
	string rep() const { return query_word; }
	string query_word;
};

class NotQuery:public Query_base
{
	friend Query operator~(const Query&);
	NotQuery(const Query &q) :query(q) {}
	string rep() const
	{
		return "~(" + query.rep() + ")";
	}
	QueryResult eval(const TextQuery&) const;
	Query query;

};

inline Query operator~(const Query &operand)
{
	return shared_ptr<Query_base>(new NotQuery(operand));
}

class BinaryQuery:public Query_base
{
protected:
	BinaryQuery(const Query &l, const Query &r, string s) :lhs(l), rhs(r), opSym(s) {}
	string rep() const
	{
		return "(" + lhs.rep() + " " + opSym + " " + rhs.rep() + ")";
	}
	Query lhs, rhs;
	string opSym;

};

class AndQuery:public BinaryQuery
{
	friend Query operator&(const Query&, const Query&);
	AndQuery(const Query &left, const Query &right) :BinaryQuery(left, right, "&") {}
	QueryResult eval(const TextQuery&) const;
};

inline Query operator&(const Query &lhs, const Query &rhs)
{
	return shared_ptr<Query_base>(new AndQuery(lhs, rhs));
}

class OrQuery:public BinaryQuery
{
	friend Query operator|(const Query&, const Query&);
	OrQuery(const Query &left, const Query &right) :BinaryQuery(left, right, "|") {}
	QueryResult eval(const TextQuery&) const;
};

inline Query operator|(const Query &lhs, const Query &rhs)
{
	return shared_ptr<Query_base>(new OrQuery(lhs, rhs));
}

QueryResult OrQuery::eval(const TextQuery &text) const
{
	auto right = rhs.eval(text), left = lhs.eval(text);
	auto ret_lines = make_shared<set<line_to>>(left.begin(),left.end())
	return QueryResult();
}


//16.2
template<typename T>
bool compare(const T &lhs,const T &rhs)
{
	return lhs > rhs;
}
struct Sales_data
{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;//收入
};

int main()
{
	cout<<compare('c', 'b');
	cout << compare(12, 1);
	Sales_data s1{ "dsadsad", 12, 11.1 };
	Sales_data s2{ "dsadsadd", 121, 111.11 };
//	cout << compare(s1, s2);
//	error C2676 : 二进制“ > ”:“const T”不定义该运算符或到预定义运算符可接收的类型的转换
//	参见对正在编译的函数 模板 实例化“bool compare<Sales_data>(const T &, const T &)”的引用
	return 0;
}


//16.4
template<typename T1,typename T2>
T1 MyFind(T1 begin,T1 end, const T2 &val)
{
	for (;begin!=end;++begin)
	{
		if (*begin ==val)
		{
			return begin;
		}
	}
	return end;
}

int main()
{
	vector<int> vi{ 2,11,45,2332,32,3,4,5,6,7,8,9 };
	auto findVal = MyFind(vi.cbegin(), vi.cend(), 4);
	cout << findVal-vi.begin() << endl;
	return 0;
}


//16.5
template<typename T,unsigned N>
void print(const T (&arr)[N])
{
	for (auto elem: arr)
	{
		cout << elem << endl;
	}
}

int main()
{
//	int arr[10] = { 1, 2, 3, 4, 5 };
//	print<int>({1, 2, 3, 4, 5});
	print<char>({ 'a','b' ,'c' ,'d' ,'e' });
	return 0;
}


//16.6
template<typename T,unsigned N>
T MyBegin(const T (&arr)[N])
{
	return *arr;
}

template<typename T, unsigned N>
T MyEnd(const T (&arr)[N])
{
	return *(arr+N-1);
}

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5 };
	cout << MyBegin({ 4, 2, 3, 4, 5 }) << endl;;
	cout << MyEnd({ 4, 2, 3, 4, 5 });
}


//16.7
template<typename T,unsigned N> constexpr
decltype(N) MyLength(const T(&arr)[N])
{
	return N;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	cout<<MyLength(arr);
}


//16.12
template<typename T> class Blob
{
public:
	typedef T value_type;
	typedef typename vector<T>::size_type size_type;
	Blob();
	Blob(initializer_list<T> il);
	template<typename It>
	Blob(It b, It e)
	{
		data(make_shared<vector<T>>(b, e));
	}
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	void push_back(const T &t)
	{
		data->push_back(t);
	}
	void push_back(const T &&t)
	{
		data->push_back(move(t));
	}
	void pop_back();
	T& back();
	T& operator[](size_type i);
private:
	shared_ptr<vector<T>> data;
	void check(size_type i, const string &msg) const;
};

template <typename T>
void Blob<T>::check(size_type i, const string &msg) const
{
	if (i>=data->size())
	{
		throw out_of_range(msg);
	}
}

template<typename T>
T & Blob<T>::back()
{
	check(0, "back on empty Blob");
	return data->back();
}


template<typename T>
T & Blob<T>::operator[](size_type i)
{
	check(i, "subscript out if range");
	return (*data)[i];
}


template<typename T>
void Blob<T>::pop_back()
{
	check(0, "pop_back on empty Blob");
	return data->pop_back();
}

template<typename T>
Blob<T>::Blob():data(make_shared<vector<T>>())
{
}

template<typename T>
Blob<T>::Blob(initializer_list<T> il):data(make_shared<vector<T>>(il))
{
}


int main()
{
	Blob<string> articles = { "a","an","the" };
	Blob<int> squares = { 0,1,2,3,4,5,6,7,8,9 };
	for (size_t i = 0; i != squares.size() ; i++)
	{
		squares[i] = i * i;
	}
	return 0;
}

//16.14  16.15
template<typename T,unsigned M,unsigned N>
class Screen
{
public:
	Screen();
	Screen(T x, T y);
private:
	T width = M;
	T height = N;
};

template<typename T, unsigned M, unsigned N>
Screen<T, M, N>::Screen(T x, T y)
{
	cout << "called" << endl;
}



//16.19
template<typename T>
void MyPrint(T& t)
{
	for (size_t i = 0; i < t.size(); i++)
	{
		cout << t[i];
	}
}

int main()
{
	vector<int> vi{1,2,3,4,5,6};
	MyPrint(vi);
}



//16.20
template<typename T>
void MyPrint(T& t)
{
	for (auto iter = t.begin(); iter != t.end(); iter++)
	{
		cout << *iter << " ";
	}
}

int main()
{
	vector<int> vi{ 1,2,3,4,5,6 };
	MyPrint(vi);
}


//16.21
class DebugDelete
{
public:
	DebugDelete(ostream &s = cerr) :m_os(s) {}
	template<typename T> void operator()(T *p) const
	{
		m_os << "delete unique_ptr" << endl;
		delete p;
	}

private:
	ostream &m_os;

};


int main()
{
	double *p = new double(1.1);
	DebugDelete del;
	cout << p << endl;
	del(p);
	p = nullptr;
	cout << p << endl;
	return 0;
}


//16.28
template<typename T>
class My_share_ptr
{
public:
	My_share_ptr() = default;
	My_share_ptr(const T &t = T()) :pt(new T(t)), i(0), use(new size_t(1)) {}
	My_share_ptr(const My_share_ptr &mpt) :pt(mpt.pt), i(mpt.i), use(mpt.use)
	{
		++*use;
	}
	My_share_ptr& operator=(const My_share_ptr &rhs)
	{
		++*rhs.use;
		if (--*use == 0)
		{
			delete pt;
			delete use;
		}
		pt = rhs.pt;
		i = rhs.i;
		use = rhs.use;
		return *this;
	}

	~My_share_ptr()
	{
		if (--*use == 0)
		{
			delete pt;
			delete use;
		}
	}
private:
	T *pt;
	int i;
	size_t *use;
};


int main()
{
	My_share_ptr<string> ps("dasda");
	cout << &ps;
}


//16.39
template<typename T>
bool compare(const T &lhs, const T &rhs)
{
	return lhs > rhs;
}

int main()
{
	compare<string>("adsadas", "bdsad");
//	compare("adsadas", "bdsad");       error char[7]   char[5]
}



//16.41
#include <type_traits>
template<typename T>
auto sum(const T &lhs, const T &rhs) ->decltype(lhs+rhs)
{
	return lhs + rhs;
}

int main()
{
	cout << sum(10.1, 11.1);
}

//16.47
template<typename F, typename T1, typename T2>
void filp(F f, T1 &&t1, T2 &&t2)
{
	f(forward<T2>(t2), forward<T1>(t1));
}
void f(int& a, int &&b)
{
	cout << a << " " << ++b << endl;
}

int main()
{
	int i = 5;
	filp(f, 22, i);
}


//16.48
template<typename T>
string debug_rep(const T &t)
{
	ostringstream ret;
	ret << t;
	return ret.str();
}

template <typename T>
string debug_rep(T *p)
{
	ostringstream ret;
	ret << "pointer:" << p;
	if (p)
	{
		ret << " " << debug_rep(*p);
	}
	else
	{
		ret << "null pointer";
	}
	return ret.str();
	
}


//16.50
template <typename T>
void f(T)
{
	cout << "f(T)" << endl;
}
template <typename T>
void f(const T*)
{
	cout << "f(const T*)" << endl;
}
template <typename T>
void g(T)
{
	cout << "g(T)" << endl;
}
template <typename T>
void g(T*)
{
	cout << "g(T*)" << endl;
}

int main()
{
	int i = 42, *p = &i;
	const int ci = 0, *p2 = ci;
	g(42);
	g(p);
	g(ci);
	g(p2);
	f(42);
	f(p);
	f(ci);
	f(p2);
	return 0;
}


//16.51  16.52
template<typename T,typename... Args>
void foo(const T &t, const Args & ... rest)
{
	cout << sizeof...(Args) << endl;
	cout << sizeof...(rest) << endl;
}
int main()
{
	foo(1, 2, 3, 4, 5, 6, 7);
	return 0;
}


//16.53
template<typename T>
ostream &print(ostream &os, const T &t)
{
	return os << t;
}
template<typename T,typename... Args>
ostream &print(ostream &os, const T &t,const Args&... rest)
{
	os << t << ",";
	return print(os,rest...);
}

int main()
{
	print(cout, 1);
	print(cout, 1,2,3,4,5);
	print(cout, 'a', 2);
	return 0;
}



//16.56
template<typename T>
ostream &print(ostream &os, const T &t)
{
	return os << t;
}
template<typename T, typename... Args>
ostream &print(ostream &os, const T &t, const Args&... rest)
{
	os << t << ",";
	return print(os, rest...);
}

template<typename T>
string debug_rep(const T &t)
{
	ostringstream ret;
	ret << t;
	return ret.str();
}

template <typename T>
string debug_rep(T *p)
{
	ostringstream ret;
	ret << "pointer:" << p;
	if (p)
	{
		ret << " " << debug_rep(*p);
	}
	else
	{
		ret << "null pointer";
	}
	return ret.str();

}

template<typename... Args>
ostream &errorMsg(ostream &os, const Args&... rest)
{
	
	return print(os, debug_rep(rest)...);

}

int main()
{
	string str = "C++";
	//debug_rep<string>("hello");
	//errorMsg(cerr, str, "primer", 4, 8.6, '5');
}



//16.58
template<class... Args>
inline void emplace_back(Args&&... args)
{
	chk_n_alloc();
	alloc.consruct(first_free++, forward<Args>(args)...);
}


//16.62
#include<unordered_set>
class Sales_data
{
	std::string bookNo;
	unsigned units_sold;
	double revenue;
	double avg_price()const { return units_sold ? revenue / units_sold : 0; }
public:
	Sales_data(const std::string &s = std::string(), unsigned n = 0, double p = 0) :bookNo(s), units_sold(n), revenue(p) {}
	Sales_data(std::istream &is);
	std::string isbn()const { return bookNo; }
	Sales_data &operator+=(const Sales_data &s);
	friend std::hash<Sales_data>;
	friend std::ostream &operator<<(std::ostream &os, const Sales_data &s);
	friend std::istream &operator>>(std::istream &is, Sales_data &s);
	friend bool operator==(const Sales_data &ls, const Sales_data &rs);
	friend Sales_data operator+(const Sales_data &ls, const Sales_data &rs);
	friend std::ostream &print(std::ostream &os, const Sales_data &s);
	friend std::istream &read(std::istream &is, Sales_data &s);
};
bool operator!=(const Sales_data &ls, const Sales_data &rs);
Sales_data add(const Sales_data &ls, const Sales_data &rs);

Sales_data::Sales_data(std::istream &is)
{
	is >> *this;
}

Sales_data &Sales_data::operator+=(const Sales_data &s)
{
	units_sold += s.units_sold;
	revenue += s.revenue;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Sales_data &s)
{
	os << s.isbn() << " " << s.units_sold << " " << s.revenue << " " << s.avg_price();
	return os;
}

std::istream &operator>>(std::istream &is, Sales_data &s)
{
	double price;
	is >> s.bookNo >> s.units_sold >> price;
	if (is)
		s.revenue = s.units_sold*price;
	else
		s = Sales_data();
	return is;
}

bool operator==(const Sales_data &ls, const Sales_data &rs)
{
	return ls.bookNo == rs.bookNo&&ls.units_sold == rs.units_sold&&ls.revenue == rs.revenue;
}
bool operator!=(const Sales_data &ls, const Sales_data &rs)
{
	return !(ls == rs);
}

Sales_data operator+(const Sales_data &ls, const Sales_data &rs)
{
	Sales_data temp = ls;
	temp += rs;
	return temp;
}

Sales_data add(const Sales_data &ls, const Sales_data &rs)
{
	Sales_data temp = ls;
	temp += rs;
	return temp;
}

std::ostream &print(std::ostream &os, const Sales_data &s)
{
	os << s.isbn() << " " << s.units_sold << " " << s.revenue << " " << s.avg_price();
	return os;
}

std::istream &read(std::istream &is, Sales_data &s)
{
	double price;
	is >> s.bookNo >> s.units_sold >> price;
	s.revenue = s.units_sold*price;
	return is;
}

namespace std {
	template<>
	struct hash<Sales_data>
	{
		typedef size_t result_type;
		typedef Sales_data argument_type;
		size_t operator() (const Sales_data& s) const;
	};

	size_t hash<Sales_data>::operator()(const Sales_data& s) const
	{
		return hash<string>()(s.bookNo) ^ hash<unsigned>()(s.units_sold) ^ hash<double>()(s.revenue);
	}
}


int main()
{
	unordered_multiset<Sales_data> ums;
	Sales_data s1 = { "12341",100,118.8 };
	Sales_data s2 = { "12345",1000,91.8 };
	Sales_data s3 = { "12346",10,98.1 };
	Sales_data s4 = { "12347",10000,18.8 };
	Sales_data s5 = { "12349",20,91.1 };
 	ums.emplace(s1);
	ums.emplace("C++ Primer", 5, 9.99);
 	ums.insert(s2);
 	ums.insert(s3);
 	ums.insert(s4);
 	ums.insert(s5);
	for (const auto &item : ums)
		std::cout << "the hash code of " << item.isbn()
		<< ":\n0x" << std::hex << std::hash<Sales_data>()(item)
		<< "\n";
	return 0;
}



//16.63   16.64
template<typename T,typename U>
size_t GetTimes(T &t,U &&val)
{
	size_t ret = 0;
	for (auto i:t)
	{
		if (i==val)
		{
			++ret;
		}
	}
	return ret;
}

template<>
size_t GetTimes(const char* &pc,char &&c)
{
	size_t ret = 0;
	for (int i = 0 ;i < strlen(pc);i++)
	{
		cout << pc[i] << endl;
		if (pc[i] == c)
		{
			++ret;
		}
	}
	return ret;
}

int main()
{
	vector<int> vi = { 1,2,3,4,5 ,3,3 };
	cout << GetTimes(vi, 3) << "  times" << endl;
	vector<double> vd = { 1.1,1.2,1.3,1.4,1.5 ,1.3,1.3 };
	cout << GetTimes(vd,1.3) << "  times" << endl;
	const char* vc = "dadsadasdas";
	cout << GetTimes(vc, 'd') << "  times" << endl;
	return 0;
}


//16.65
template<typename T>
string debug_rep(const T &t)
{
	ostringstream ret;
	ret << t;
	return ret.str();
}

template <typename T>
string debug_rep(T *p)
{
	ostringstream ret;
	ret << "pointer:" << p;
	if (p)
	{
		ret << " " << debug_rep(*p);
	}
	else
	{
		ret << "null pointer";
	}
	return ret.str();

}
template<>
string debug_rep(char *p)
{
	return debug_rep(string(p));
}

template<>
string debug_rep(const char *p)
{
	return debug_rep(string(p));
}


//17.1
#include <tuple>
int main()
{
	tuple<int, int, int> t{ 10,20,30 };
	cout << get<0>(t) << endl;
	cout << get<1>(t) << endl;
	cout << get<2>(t) << endl;
	return 0;
}


//17.2
#include <tuple>
int main()
{
	tuple<string, vector<string>, pair<string, int>> t{ "hello",{"world","C++"},{"cq",2} };
	cout << get<0>(t) << endl;
//	cout << get<1>(t)<< endl;
	cout << get<2>(t).first << endl;
	return 0;
}


//17.4
#include <tuple>

struct Sales_data
{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;//收入
};

bool compareIsbn(Sales_data &s1, Sales_data &s2)
{
	return s1.bookNo == s2.bookNo;
}

typedef tuple<vector<Sales_data>::size_type, vector<Sales_data>::const_iterator, vector<Sales_data>::const_iterator> matches;
vector<matches> findBook(const vector<vector<Sales_data>> &files,const string &book)
{
	vector<matches> ret;
	for (auto it = files.cbegin(); it != files.cend(); ++it)
	{
		auto found = equal_range(it->cbegin(), it->cend(), book, compareIsbn);
		if (found.first != found.second)
		{
			ret.push_back(make_tuple(it - files.cbegin(), found.first, found.second));
		}
	}
	return ret;
}


//17.9
#include <bitset>
int main()
{
	bitset<16> b;
	b[0] = 2;
	cout << b << endl;

	unsigned long long a = 2;
	bitset<32> b1(a);
	cout << b1 << endl;

	bitset<13> bitvec1(0xbeef);
	cout << bitvec1 << endl;
	return 0;
}


//17.10
#include <bitset>
int main()
{
	int v[] = { 1,2,3,5,8,13,31 };
	bitset<32> bit;
	for (auto i:v)
	{
		bit.set(i);
	}
	cout << bit << endl;
	return 0;
}


//17.11
#include <bitset>
int main()
{
	bool status;
	unsigned long quizA = 0;
	quizA |= 1UL << 27;
	status = quizA & (1UL << 27);
	quizA &= ~(1UL << 27);

	bitset<30> quizB;
	quizB.set(27);
	status = quizB[27];
	quizB.reset(27);
	quizB.set(2);
	cout << quizB << endl;
	return 0;
}


//17.14
#include <regex>
int main()
{
	string pattern("[^c]ei");
	pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
	regex r(pattern);
	smatch results;
	string test_str = "i am your freind";
	if (regex_search(test_str,results,r))
	{
		cout << results.str() << endl;
	}
}


//17.15
#include <regex>
int main()
{
	string s;
	while(1)
	{
		cin >> s;
		string pattern("[^c]ei");
		pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
		regex r(pattern);
		smatch results;
		if (regex_search(s, results, r))
		{
			cout << "\n" << results.str()<<"NO" << endl;
		}
		else
		{
			cout <<"\n"<< results.str() << "OK" << endl;
		}
	}
	return 0;
}



//17.17   17.18
#include <regex>
int main()
{
	string file("i am your freind,freiad");
	string pattern("[^c]ei");
	pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
	regex r(pattern, regex::icase);
	for (sregex_iterator it(file.cbegin(),file.cend(),r),end_it;it != end_it;++it)
	{
		cout << it->str() << endl;
	}
	for (sregex_iterator it(file.begin(),file.end(),r),end_it;it!=end_it;++it)
	{
		auto pos = it->prefix().length();
		pos = pos > 40 ? pos - 40 : 0;
		cout << it->prefix().str().substr(pos)
			<< "\n\t\t>>> " << it->str() << " <<<\n"
			<< it->suffix().str().substr(0, 40)
			<< endl;
	}
	return 0;
}


//17.19  17.20
#include <regex>

bool valid(const smatch& m)
{
	if (m[1].matched)
	{
		return m[3].matched && (m[4].matched == 0 || m[4].str() == "");
	}
	else
	{
		return !m[3].matched&&m[4].str() == m[6].str();
	}

}

int main()
{
	string phone = "(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ])?(\\d{4})";
	regex r(phone);
	smatch m;
	string s;
	while (getline(cin,s))
	{
		for (sregex_iterator it(s.begin(),s.end(),r),end_it;it!=end_it;++it)
		{
			if (valid(*it))
			{
				cout << "Valid: " << it->str() << endl;
			}
			else
			{
				cout << "Not Valid: " << it->str() << endl;
			}
		}
	}
	return 0;
}



//17.24
#include <regex>
int main()
{
	string phone = "(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ])?(\\d{4})";
	regex r(phone);
	smatch m;
	string s;
	string fmt = "$2.$5.$7";
	while (getline(cin,s))
	{
		cout << regex_replace(s, r, fmt) << endl;
	}
	return 0;
}




//17.28
#include<random>

vector<unsigned> GetRand()
{
	static uniform_int_distribution<unsigned> u(0, 9);
	static default_random_engine e;
	vector<unsigned> ret;
	e.seed(time(0));
	for (int i = 0;i<20;++i)
	{
		ret.push_back(u(e));
	}
	return ret;
}

int main()
{

	for (auto i:GetRand())
	{
		cout << i << " ";
	}

	
	return 0;
}



//17.29
#include<random>

vector<unsigned> GetRand(int seed)
{
	static uniform_int_distribution<unsigned> u(0, 9);
	static default_random_engine e;
	vector<unsigned> ret;
	e.seed(seed);
	for (int i = 0; i < 20; ++i)
	{
		ret.push_back(u(e));
	}
	return ret;
}

int main()
{

	for (auto i : GetRand(100))
	{
		cout << i << " ";
	}


	return 0;
}


//17.30
#include<random>

vector<unsigned> GetRand(int seed,int min,int max)
{
	static uniform_int_distribution<unsigned> u(min, max);
	static default_random_engine e;
	vector<unsigned> ret;
	e.seed(seed);
	for (int i = 0; i < 20; ++i)
	{
		ret.push_back(u(e));
	}
	return ret;
}

int main()
{

	for (auto i : GetRand(1100,1,100))
	{
		cout << i << " ";
	}


	return 0;
}


//17.33
#include<random>
int main()
{
	default_random_engine e;
	uniform_real_distribution<double> u(0, 1);
	for (size_t i = 0; i < 10; i++)
	{
		cout<<u(e)<<" ";
	}
	return 0;
}


//17.33
#include<random>
int main()
{
	default_random_engine e;
	normal_distribution<> n(4, 1.5);
	vector<unsigned> vals(9);
	for (size_t i = 0; i != 200; i++)
	{
		unsigned v = lround(n(e));
		if (v<vals.size())
		{
			++vals[v];
		}
	}
	for (size_t j = 0; j != vals.size(); ++j)
	{
		cout << j << ": " << string(vals[j], '*') << endl;
	}
	return 0;
}


//17.34
#include <iomanip>
int main()
{
	//true false
	cout << boolalpha << true << noboolalpha << false << endl;
	//进制
	cout << "default:"<< 20 << " " << 1024 << endl;
	cout << "octal:" <<oct << 20 << " " << 1024 << endl;
	cout << "hex:"<<hex << 20 << " " << 1024 << endl;
	cout << "decimal:"<<dec << 20 << " " << 1024 << endl;
	//显示进制标志
	cout << showbase << endl;
	cout << "default:" << 20 << " " << 1024 << endl;
	cout << "octal:" << oct << 20 << " " << 1024 << endl;
	cout << "hex:" << hex << 20 << " " << 1024 << endl;
	cout << "decimal:" << dec << 20 << " " << 1024 << endl;
	cout << noshowbase;
	//十六进制0x  0X
	cout << showbase << uppercase << endl;
	cout << "default:" << 20 << " " << 1024 << endl;
	cout << "octal:" << oct << 20 << " " << 1024 << endl;
	cout << "hex:" << hex << 20 << " " << 1024 << endl;
	cout << "decimal:" << dec << 20 << " " << 1024 << endl;
	cout << noshowbase<<nouppercase;

	//浮点数格式
	cout << "precision: " << cout.precision()
		<< ", Value: " << sqrt(2.0) << endl;
	cout.precision(12);
	cout << "precision: " << cout.precision()
		<< ", Value: " << sqrt(2.0) << endl;
	cout << endl;

	//指定浮点数计数法
	cout << "default format: " << 100 * sqrt(2.0) << '\n'
		<< "scientific: " << scientific << 100 * sqrt(2.0) << '\n'
		<< "fixed decimal: " << fixed << 100 * sqrt(2.0) << '\n'
		<< "hexadecimal: " << hexfloat << 100 * sqrt(2.0) << '\n'
		<< "use defaults: " << defaultfloat << 100 * sqrt(2.0) << "\n\n";
	
	//打印小数点
	cout << endl;
	cout << 10.0 << endl;
	cout << showpoint << 10.0 << noshowpoint << endl;

	//输出补白
	cout << endl;
	int i = -16;
	double d = 3.14159;
	cout << "i: " << setw(12) << i << "next col" << '\n'
		 << "d: " << setw(12) << d << "next col" << '\n';
	cout<<left
		<< "i: " << setw(12) << i << "next col" << '\n'
		<< "d: " << setw(12) << d << "next col" << '\n'
		<< right;
	cout << right
		<< "i: " << setw(12) << i << "next col" << '\n'
		<< "d: " << setw(12) << d << "next col" << '\n';
	cout<<internal
		<< "i: " << setw(12) << i << "next col" << '\n'
		<< "d: " << setw(12) << d << "next col" << '\n';
	cout<<setfill('#')
		<< "i: " << setw(12) << i << "next col" << '\n'
		<< "d: " << setw(12) << d << "next col" << '\n'
		<< setfill(' ');

	//控制格式输入
// 	char ch;
// 	while (cin>>ch)
// 	{
// 		cout << ch;
// 	}
	char ch;
	cin >> noskipws;
	while (cin >> ch)
	{
		cout << ch;
	}
	cin >> skipws;
	return 0;
}


//17.37
int main()
{
	char ch;
	while (cin.get(ch))
	{
		cout.put(ch);
	}
	return 0;
}


//17.38
#include <fstream>
int main()
{
	char str[128];
	ifstream file("E:\\Users\\xagu\\source\\repos\\关于decltype\\Debug\\words.txt");
	while (file)
	{
		file.getline(str, 100);
		cout <<str<< ' ';
	}
	file.close();
	return 0;
}


//17.39
#include <fstream>
int main()
{
	char str[128];
	ifstream file("E:\\Users\\xagu\\source\\repos\\关于decltype\\Debug\\words.txt");
	while (file)
	{
		file.getline(str, 100,' ');
		cout << str << ' ';
	}
	file.close();
	return 0;
}


//17.39
#include <fstream>
int main()
{
	fstream inOut("E:\\Users\\xagu\\source\\repos\\关于decltype\\Debug\\words.txt", fstream::ate | fstream::in | fstream::out);
	if (!inOut)
	{
		cerr << "unable to open file!" << endl;
		return EXIT_FAILURE;
	}
	auto end_mark = inOut.tellg();
	inOut.seekg(0, fstream::beg);
	size_t cnt = 0;
	string line;
	while (inOut&&inOut.tellg()!=end_mark&&getline(inOut,line))
	{
		cnt += line.size() + 1;
		auto mark = inOut.tellg();
		inOut.seekp(0, fstream::end);
		inOut << cnt;
		if (mark!=end_mark)
		{
			inOut << " ";
		}
		inOut.seekg(mark);
	}
	inOut.seekp(0, fstream::end);
	inOut << "\n";
	return 0;
}


//
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		for (auto iteri = nums.begin(); iteri != nums.end(); iteri++)
		{
			for (auto iterj = iteri + 1; iterj != nums.end(); iterj++)
			{
				if (*iteri+*iterj == target)
				{
					return vector<int>{iteri - nums.begin(), iterj - nums.begin()};
				}
			}
		}
	}
};

int main()
{
	vector<int> vi{1,18,3,4,5,2,7,11,22 };
	Solution s;
	auto ret = s.twoSum(vi, 9);
	for (auto i:ret)
	{
		cout << i << endl;
	}
}


class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		for (int i = 0; i < nums.size(); i++)
		{
			for (int j = i+1;j<nums.size();++j)
			{
				if (nums[i]+nums[j]==target) 
				{
					return { i,j };
				}
			}
		}
		return {};
	}
};

int main()
{
	vector<int> vi{ 1,18,3,4,5,2,7,11,22 };
	Solution s;
	auto ret = s.twoSum(vi, 9);
	for (auto i : ret)
	{
		cout << i << endl;
	}
}



//18.3
#include <fstream>
void exercise(int *b, int *e)
{
	vector<int> v(b, e);
	int *p = new int[v.size()];
	try
	{
		ifstream in("ints");
	}
	catch (const std::exception&)
	{
		delete p;
		throw;
	}

}


//18.4
int main()
{

	try
	{

	}
	catch (const std::exception& range_error)
	{
		cout << "error";
		abort();
	}
	catch (const std::exception& runtime_error)
	{
		cout << "error";
		abort();
	}
	catch (const std::exception& exception)
	{
		cout << "error";
		abort();
	}
}


//18.7
template <typename T>
Blob<T>::Blob(initializer_list<T> il)try :data < make_shared(vector<T >> (il))
{

}catch (const std::bad_alloc &e)
{
	handle_out_of_memory(e);
}



//10.9
class out_of_stock:runtime_error
{
public:
	explicit out_of_stock(const string &s) :runtime_error(s) {}

private:

};
class isbn_mismatch:public logic_error
{
public:
	explicit isbn_mismatch(string &s) :logic_error(s) {}
	isbn_mismatch(string &s, const string &lhs, const string &rhs) :
		logic_error(s), left(lhs), right(rhs) {}
	const string left, right;
};

struct Sales_data
{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;//收入
	Sales_data& operator+=(const Sales_data &lhs);
	const string isbn()
	{
		return bookNo;
	}
};

Sales_data& Sales_data::operator+=(const Sales_data& rhs)
{
	if (isbn()!=rhs.bookNo)
	{
		throw isbn_mismatch((string)"wrong isbns",bookNo, rhs.bookNo);
	}
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

Sales_data item1, item2, sum;
while (cin >> item1 >> item2)
{
	try
	{
		sum = item1 + item2;
	}
	catch (const isbn_mismatch &e)
	{
		cerr << e.what() << ":left isbn(" << e.left
			<< ") right isbn(" << e.right << ")" << endl;
	}
}


//18.12
namespace std {
	template <> struct hash<int>;
}
template <> struct hash<int>
{
	size_t operator()(const int &s) const
	{
		return hash<int>()(s);
	}
};


namespace cplusplus_primer {
	namespace QueryLib {
		class Query
		{
		public:
		private:
		};
		Query operator&(const Query&, const Query&) {}

	}
	namespace Bookstore {
		class Quote {};
		class Disc_quote :public Quote {};
		
	}

}


//18.16   18.17
namespace Exercise {
	int ivar = 0;
	double dvar = 0;
	const int limit = 1000;
}
int var = 0;
using Exercise::limit;//error
using Exercise::ivar;
using Exercise::dvar;
void manip()
{
	double dvar = 3.1416;
	int iobj = limit + 1;
	++ivar;
	++::ivar;
}


//18.23
class B1
{
public:
	B1()
	{
		cout << "B1 constructor" << endl;
	}
	virtual void print()
	{
		cout << "B1" << endl;
	}
	virtual ~B1()
	{
		cout << "B1 destructor" << endl;
	}
};
class D1 :public B1
{
public:
	D1()
	{
		cout << "D1 constructor" << endl;
	}
	void print()
	{
		cout << "D1" << endl;
	}
	~D1()
	{
		cout << "D1 destructor" << endl;
	}
};
class B2
{
public:
	B2()
	{
		cout << "B2 constructor" << endl;
	}
	virtual void print()
	{
		cout << "B2" << endl;
	}
	virtual ~B2()
	{
		cout << "B2 destructor" << endl;
	}
};
class D2 :public B2
{
public:
	D2()
	{
		cout << "D2 constructor" << endl;
	}
	void print()
	{
		cout << "D2" << endl;
	}
	~D2()
	{
		cout << "D2 destructor" << endl;
	}
};
class MI :public D1, public D2
{
public:
	MI()
	{
		cout << "MI constructor" << endl;
	}
	void print()
	{
		cout << "MI" << endl;
	}
	~MI()
	{
		cout << "MI destructor" << endl;
	}
};
int main(int argc, char** argv)
{
	B1 *b1 = new MI;//构造函数的调用是从基类开始到派生类
	cout << "----------------------------------------" << endl;
	B2 *b2 = new MI;
	cout << "----------------------------------------" << endl;
	D1 *d1 = new MI;
	cout << "----------------------------------------" << endl;
	D2 *d2 = new MI;
	cout << "------------------TEST----------------------" << endl;
	b1->print();
	cout << "----------------------------------------" << endl;
	b2->print();
	cout << "----------------------------------------" << endl;
	d1->print();
	cout << "----------------------------------------" << endl;
	d2->print();
	cout << "-------------------DELETE---------------------" << endl;

	delete b1;//删除指向派生类的基类指针需要注意其过程
	cout << "----------------------------------------" << endl;
	delete b2;
	cout << "----------------------------------------" << endl;
	delete d1;
	cout << "----------------------------------------" << endl;
	delete d2;

	cin.get();
	return 0;
}



//18.30
class Class {};
class Base :public Class
{
public:
	Base() = default;
	Base(Base &b) :Class(b), ival(b.ival) {}
	Base(int i):Class(),ival(i){}
private:
	int ival;
};
class D1 :virtual public Base 
{
	D1() = default;
	D1(D1 &d) :Base(d) {}
};
class D2 :virtual public Base {};
class MI :public D1, public D2 {};
class Final :public MI, public Class {};
 


//19.1
void *operator new(size_t size)
{
	if (void *mem = malloc(size))
	{
		return mem;
	}
	else
	{
		throw bad_alloc();
	}
}

void operator delete(void *mem) noexcept
{
	free(mem);
}




//19.2
void *operator new(size_t size)
{
	if (void *mem = malloc(size))
	{
		return mem;
	}
	else
	{
		throw bad_alloc();
	}
}

void operator delete(void *mem) noexcept
{
	free(mem);
}

int main()
{
	string *s = new string("das");
	cout << s << " " << *s << endl;
	delete s;
	return 0;
}



//19.3   19.4
class A
{
public:
	A()
	{
		cout << "A()" << endl;
	}
	virtual ~A()
	{
		cout << "~A()" << endl;
	}
};

class B :public A
{
public:
	B()
	{
		cout << "B()" << endl;
	}
	virtual ~B()
	{
		cout << "~B()" << endl;
	}
};
class C :public B
{
public:
	C()
	{
		cout << "C()" << endl;
	}
	virtual ~C()
	{
		cout << "~C()" << endl;
	}
};
class D :public B, public A
{
public:
	D()
	{
		cout << "D()" << endl;
	}
	virtual ~D()
	{
		cout << "~D()" << endl;
	}
};
int main(int argc, char** argv)
{
	A *pa = new C;
	if (B *pb = dynamic_cast<B*>(pa))
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}//因为指针类型的转换失败返回为0可以使用条件中赋值判断

	try
	{
		C &cp = dynamic_cast<C&>(*pa);//正确，*pa的类型是C  
		cout << "cp" << endl;
	}
	catch (std::bad_cast e)
	{
		cout << e.what() << endl;
	}//引用类型失败返回的是bad_cast  

	B *pbb = new B;
	if (C *pc = dynamic_cast<C*>(pbb))
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}

	A *paa = new D;
	if (B *pc = dynamic_cast<B*>(paa))
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}

	cin.get();
	return 0;
}


//19.6
class A
{

};
class B :public A
{

};

class C :public A
{

};



int main()
{
	//A* a = new B;
	//A* a1 = new C;
	B* b = new B;
	C* c = new C;
	if (A* pb1 = dynamic_cast<A*>(b))
	{
		cout << "success" << endl;
	}
	else
	{
		cout << "fail" << endl;
	}
	if (A* pc1 = dynamic_cast<A*>(c))
	{
		cout << "success" << endl;
	}
	else
	{
		cout << "fail" << endl;
	}
	if (typeid(*b)==typeid(*c))
	{
		cout << "True";
	}
	else
	{
		cout << "FALSE";
	}
	if (typeid(*b) == typeid(C))
	{
		cout << "True";
	}
	else
	{
		cout << "FALSE";
	}
	return 0;
}



//19.9
int main()
{
	int arr[10];
	vector<int> vi;
	string s;
	cout << typeid(42).name() << " "
		<< typeid(arr).name() << " "
		<< typeid(s).name() << " "
		<< typeid(1.1).name() << endl;
	return 0;
}


//19.10
class A
{

};
class B :public A
{

};

class C :public B
{

};

int main()
{
	A *pa = new C;
	cout << typeid(pa).name() << endl;
	C cobj;
	A& ra = cobj;
	cout << typeid(&ra).name() << endl;
	B *px = new B;
	A& rb = *px;
	cout << typeid(rb).name() << endl;
	return 0;
}


//枚举类型
enum MyEnum : unsigned
{
	red = 100,
    bule,
	yellow
};
int main()
{
	cout << red << endl;
	cout << bule << endl;
}


//19.12
class Screen
{
public:
	typedef string::size_type pos;
	char get_cursor() const
	{
		return contents[cursor];
	}
	char get() const;
	char get(pos ht, pos wd) const;
	string contents;
	static const string Screen::*data()
	{
		return &Screen::contents;
	}
private:
	
	pos cursor;
	pos height, width;
};
int main()
{
	const string Screen::*pdata;
	pdata = &Screen::contents;
	auto pdata1 = &Screen::contents;
	Screen myScreen, *pScreen = &myScreen;
	auto s = myScreen.*pdata1;
	s = pScreen->*pdata;
	return 0;
}



// 19.14
class Screen
{
public:
	typedef string::size_type pos;
	char get_cursor() const
	{
		return contents[cursor];
	}
	char get() const;
	char get(pos ht, pos wd) const;
	string contents;
	static const string Screen::*data()
	{
		return &Screen::contents;
	}
private:

	pos cursor;
	pos height, width;
};

int main()
{
	typedef string::size_type pos;
	auto pget = &Screen::get_cursor;
	using pgc = char(Screen::*)() const;
	using pg = char(Screen::*)(pos, pos);
	pgc g = &Screen::get_cursor;
	Screen s;
}


//19.18
#include <functional>
#include <numeric>
int main()
{
	using std::placeholders::_1;
	vector<string> vi{ "","2","3","4","","","7","" };
	function<bool (const string)> fp = &string::empty;
	cout<<count_if(vi.begin(), vi.end(), mem_fn(&string::empty))<<endl;
	cout << count_if(vi.begin(), vi.end(), fp)<<endl;
	cout << count_if(vi.begin(), vi.end(), bind(&string::empty,_1)) << endl;
	return 0;
}



//19.19
#include <functional>
int main()
{
	vector<int> vi{ 1,2,3,4,5,6,7 };
	cout<<*find_if(vi.begin(), vi.end(), [](int i) {return i > 5; });
	return 0;
}


//19.20
class a
{

//嵌套类
	class b
	{


	};
};



//
union Token
{
	char cval;
	int ival;
	double dval;
};
int main()
{
	Token t = { 'a' };
	cout << t.dval << endl;
	return 0;
}



//19.21
class Token
{
public:
	Token():tok(INT), ival(0) {}
	Token(const Token &t) :tok(t.tok)
	{
		copyUnion(t);
	}
	Token& operator=(const Token&);
	~Token() 
	{
		if (tok==STR)
		{
			sval.~string();
		}
	}
	Token& operator=(const string&);
	Token& operator=(char);
	Token& operator=(int);
	Token& operator=(double);

private:
	enum{INT,CHAR,DBL,STR} tok;
	union
	{
		char cval;
		int ival;
		double dval;
		string sval;
	};
	void copyUnion(const Token&);
};

Token::Token()
{
}

Token::~Token()
{
}

Token & Token::operator=(const Token &t)
{
	if (tok==STR&&t.tok!=STR)
	{
		sval.~string();
	}
	if (tok == STR && t.tok == STR)
	{
		sval = t.sval;
	}
	else
	{
		copyUnion(t);
	}
	tok = t.tok;
	return *this;
}

Token & Token::operator=(const string &s)
{
	if (tok==STR)
	{
		sval = s;
	}
	else
	{
		new(&sval) string(s);
	}
	tok = STR;
	return *this;
}

Token & Token::operator=(int i)
{
	if (tok==STR)
	{
		sval.~string();
	}
	ival = i;
	tok = INT;
	return *this;
}

void Token::copyUnion(const Token &t)
{
	switch (t.tok)
	{
	case Token::INT:
		ival = t.ival;
		break;
	case Token::CHAR:
		cval = t.cval;
		break;
	case Token::DBL:
		dval = t.dval;
		break;
	case Token::STR:
		sval = t.sval;
		break;
	}
}*/
