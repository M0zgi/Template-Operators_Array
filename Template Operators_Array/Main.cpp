#include"TemplateArray.h"

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout.setf(std::ios_base::boolalpha);

	locale loc(cout.getloc(), new ::numpunct);
	cout.imbue(loc);

	MyArray a(10);
	a.FillArrayNoSrand();
	cout << "������ �: ";
	a.print();

	cout << "������ b: ";
	MyArray b(5);
	b.FillArrayNoSrand();
	b.print();

	cout << "������ c: ";
	MyArray c(10);
	c.FillArrayNoSrand();
	c.print();

	cout << "������ d: ";
	MyArray d(10);
	d.FillArrayNoSrand();
	d.print();

	cout << "������ q: ";
	MyArray q(3);
	q.FillArrayNoSrand();
	q.print();

	cout << "\n--------------------------------------\n";

	b = a;

	cout << "���������� ��������� ������������ b = a\n������ b: ";
	b.print();

	a = b = c;

	cout << "���������� ��������� ������������ a = b = c\n������ a: ";
	a.print();

	cout << "������ b: ";
	b.print();

	cout << "\n--------------------------------------\n";


	cout << "���������� ��������� �������� Array + int (���������� ����� � ����� �������) b + 3\n������ b: ";
	
	b = b + 3;
	
	b.print();
	cout << endl;
	cout << "���������� ��������� �������� Array q = int + Array b (���������� ����� � ������ �������) q = 15 + b \n������ q: ";

	q = 15 + b;

	q.print();
	cout << endl;
	cout << "���������� ��������� �������� Array a = Array b + int (���������� ����� � ����� �������) a = b + 55\n������ a: ";
	
	a = b + 55;
	
	a.print();
	cout << "������ b: ";
	b.print();

	cout << "\n--------------------------------------\n";


	cout << "�������� ������� Array e = Array a + Array c \n";
	cout << "������ �: ";
	a.print();

	cout << "������ c: ";
	c.print();

	MyArray e(a.GetSize() + c.GetSize());
	e = a + c;

	cout << "������ e: ";
	e.print();

	cout << "\n--------------------------------------\n";

	//���������� ��������� ��������� ==
	cout << "��������� �� ��������� ������� a � �������� b: ";
	
	bool result = a == b;
	cout << result << endl;

	cout << "��������� �� ��������� ������� d � �������� c: ";
	result = d == c;
	cout << result << endl;

	//���������� ��������� ������������
	cout << "���������� ��������� ������������ c = d\n������ c: ";

	c = d;
	c.print();

	cout << "������ d: ";
	d.print();
	//���������� ��������� ��������� ==
	cout << "��������� �� ��������� ������� d � �������� c: ";
	result = d == c;
	cout << result << endl;

	cout << "\n--------------------------------------\n";

	cout << "������ �: ";
	a.print();

	cout << "������ b: ";
	b.print();

	cout << "������ c: ";
	c.print();

	//���������� ��������� ����������� !=
	cout << "��������� �� ����������� ������� a � �������� b: ";
	result = a != b;
	cout << result << endl;

	cout << "��������� �� ����������� ������� b � �������� c: ";
	result = b != c;
	cout << result << endl;

	cout << "\n--------------------------------------\n";

	cout << "���������� ��������� []\n";

	cout << "��������� �������� ������� �� ������� a[9]\n";
	cout << a[9] << endl;

	cout << "��������� �������� ������� �� ��������������� ������� a[30]\n";
	cout << a[30] << endl;

	cout << "��������� �������� ������� �� ������������� ������� a[0] = 100\n";

	a[0] = 100;
	cout << "������ �: ";
	a.print();

	cout << "��������� �������� ������� �� ��������������� ������� a[30] = 100\n";
	a[30] = 100;
	
	cout << endl;
	cout << "������ �: ";
	a.print();

	cout << "\n--------------------------------------\n";

	cout << "���������� ���������� > � < \n";

	cout << "������ �: ";
	a.print();

	cout << "������ b: ";
	b.print();

	cout << "������ c: ";
	c.print();

	cout << "������ d: ";
	d.print();

	cout << "����� ��������� �������� a > b : ";
	result = a > b;
	cout << result << endl;

	cout << "����� ��������� �������� a < b : ";
	result = a < b;
	cout << result << endl;

	cout << "����� ��������� �������� c > d : ";
	result = c > d;
	cout << result << endl;

	cout << "����� ��������� �������� c < d : ";
	result = c < d;
	cout << result << endl;

	cout << "\n--------------------------------------\n";

	cout << "������� ������ � �������������� ����������� (����������������) ���������� ���� �������� \n";
	cout << "������ �: ";
	a.print();

	cout << "������ b: ";
	b.print();

	MyArray f(a.GetSize() + b.GetSize());
	f = a % b;

	cout << "������ f: ";
	f.print();

	cout << "\n--------------------------------------\n";

	cout << "������� ������ � ������ ����������� (����������������) ���������� ���� �������� \n";

	MyArray g(20);
	g.FillArrayNoSrand();

	cout << "������ �: ";
	a.print();

	cout << "������ g: ";
	g.print();

	MyArray h(a.GetSize() + g.GetSize());
	h = a * g;

	cout << "������ h: ";
	h.print();


	cout << "\n--------------------------------------\n";

	cout << "���������� ��������� << (cout << a << b << c << d << e << f) \n";

	cout << "a: " << a << "b: " << b << "c: " << c << "d: " << d << "e: "  << e << "f: " << f;

	cout << "\n--------------------------------------\n";

	cout << "���������� ��������� >> \n";

	MyArray x(3);

	cin >> x;

	cout << x;

	cout << endl;
	system("pause");
}