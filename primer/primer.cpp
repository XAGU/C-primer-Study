// ����decltype.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <stdio.h>
#include <windows.h>
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
		cout << "������2���ַ���" << endl;
		cin >> s1 >> s2;
		if (s1.size() > s2.size())
		{
			cout << "�ϳ����ַ�����:" << s1 << endl;
		}
		else
			cout << "�ϳ����ַ�����:" << s2 << endl;
	} while (cin);


	//5.23 5.24 5.25
	int i, j;
	while (cin >> i >> j)
	{
		try
		{
			if (j == 0)
				throw invalid_argument("��������Ϊ0");
			cout << i / j << endl;
		}
		catch (invalid_argument)
		{
			char c;
			cout << "\n������Ч��������Y��N" << endl;
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
	cout << (is_upper(s1)?"��":"û��") << endl;;
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
	cout << (is_upper(s1)?"��":"û��") << endl;;
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
//��ͨ���巵������������Ҹ��������10��string���Ͷ���
string (&fun1())[10];
//ʹ��typedef���巵������������Ҹ��������10��string���Ͷ���
typedef string arr1[10];
arr1& fun2();
//ʹ��decltype���巵������������Ҹ��������10��string���Ͷ���
string odd[10] = {"1"};
decltype(odd) &fun3();
////ʹ�ú��÷������Ͷ��巵������������Ҹ��������10��string���Ͷ���
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
		cout<< "������ַ:" << i << " ���ý��" << i(4,2) << endl;

	}
	return 0;
}

struct Sales_data
{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;//����
};
int main()
{
	Sales_data total;//�˲��ֺ͵�һ��21ҳ��������ͬ
	if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
			if (total.bookNo == trans.bookNo) {
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;//�������ʹ���޸�֮��
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
		MessageBoxA(0, "��ѡ����YES", "��ʾ", MB_OK);
	}
	else
	{
		MessageBoxA(0, "��ѡ����NO", "��ʾ", MB_OK);
	}
	return 0;
}

//7.23 7.24 7.27 ���캯��
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
	pos cursor = 0;//���λ��
	pos height = 0, width = 0;//��Ļ�ߺͿ�
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


//7.31 ������ 
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

//7.32 ��Ԫ���������������
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
	pos cursor = 0;//���λ��
	pos height = 0, width = 0;//��Ļ�ߺͿ�
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
	//������ÿ����Ļ�ı��
	using ScreenIndex = vector<Screen>::size_type;
	//���ձ�Ž�ָ����Screen����Ϊ�հ�
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

//7.34 ���ֲ��������������
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
//��Ա��ʼ����˳��
struct  X 
{
	X(int i, int j) :base(i), rem(base%j)//��ʼ���б��˳��һ��Ҫ�Ͷ��������˳��һ�����������ִ���
	{
		cout << base<<' '<<rem;
	}
	int  base, rem;//print��5��1
	int  rem��base;//print��5��0   error

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


//7.40  Date��
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
		cout << "ί�й��캯��������" << endl;
	};
	Sales_data() :Sales_data("",0,0) {
		cout << "�޲ι��캯��������" << endl;
	};
	Sales_data(string s) :Sales_data(s, 0, 0) {
		cout << "string s ���캯��������" << endl;
	};
	Sales_data(istream &is) :Sales_data() {
		cout << "istream is ���캯��������" << endl;
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
	//NoDefault nd; //error û��Ĭ�Ϲ��캯��noDefault
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

//�ڰ��� io��
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
	cout << "��ʼ������λ"<<endl;
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
	string s = "D:\\����\\cheat\\originע���\\origin.e";
	ifstream i(s);
	vector<string> s1;
	if (!i)
	{
		cout << "���ļ�ʧ��"<<endl;
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
	s = "D:\\����\\cheat\\originע���\\origin1.txt";
	ofstream o(s,ostream::app);
	if (!o)
	{
		cout << "���ļ�ʧ��" << endl;
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
	string s = "D:\\����\\cheat\\originע���\\origin.txt";
	ifstream i(s);
	vector<string> s1;
	if (!i)
	{
		cout << "���ļ�ʧ��"<<endl;
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
		cout << "vector<int>�д���" << endl;
	}
	else
	{
		cout << "vector<int>�в�����" << endl;
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
		cout << "vector<int>�д���" << endl;
	}
	else
	{
		cout << "vector<int>�в�����" << endl;
	}
	return 0;
}

//9.9
int main()
{
	vector<int> i{1,2,3};
	vector<int>::difference_type count=i.begin()-i.end();//difference_type��ʾ������֮��Ĳ��
	vector<int> v1;
	const vector<int> v2{3,1,2,2};//����push_back
	auto it1 = v1.begin();
	auto it2 = v2.begin();
	auto it3 = v1.cbegin();
	auto it4 = v2.cbegin();
	cout << "it1 " << typeid(it1).name() << endl;
	cout << "it2 " << typeid(it2).name() << endl;
	cout << "it3 " << typeid(it3).name() << endl;
	cout << "it4 " << typeid(it4).name() << endl;
// 		 ���
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
	vector<int> v1;//��
	vector<int> v2{ 1,2,3,4 };//1��2��3��4
	vector<int> v3(10, 1);//1��1��1��1��1��1��1��1��1��1
	vector<int> v4(10);//0��0��0��0��0��0��0��0��0��0
	vector<int> v5(v2);//1��2��3��4
	vector<int> v6(v2.begin(),v2.end());//1��2��3��4
	vector<int> v7 = v2;//1��2��3��4
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
	//vs.assign(lc);����
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
		cout << "���" << endl;
	}
	else
	{
		cout << "�����"<<endl;
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
				cout << "�����" << endl;
				break;
			}
			
		}
		cout << "���" << endl;
	}
	else
	{
		cout << "�����" << endl;
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
	cout << "����" << endl;
	for (auto i:di1)
	{
		cout << i << endl;
	}
	cout << "ż��"<<endl;
	for (auto i : di2)
	{
		cout << i << endl;
	}
	return 0;
}*/






