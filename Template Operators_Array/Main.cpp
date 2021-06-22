#include"TemplateArray.h"

int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout.setf(std::ios_base::boolalpha);

	locale loc(cout.getloc(), new ::numpunct);
	cout.imbue(loc);

	MyArray<int> a(10);
	a.FillArrayNoSrand();
	cout << "Массив а: ";
	a.print();

	cout << "Массив b: ";
	MyArray<int> b(5);
	b.FillArrayNoSrand();
	b.print();

	cout << "Массив c: ";
	MyArray<int> c(10);
	c.FillArrayNoSrand();
	c.print();

	cout << "Массив d: ";
	MyArray<int> d(10);
	d.FillArrayNoSrand();
	d.print();

	cout << "Массив q: ";
	MyArray<int> q(3);
	q.FillArrayNoSrand();
	q.print();

	cout << "Массив o: ";
	MyArray<int> o(20);
	o.FillArrayNoSrand();
	o.print();

	cout << "Массив u: ";
	MyArray<double> u(10);
	u.FillArrayNoSrand();
	u.print();

	cout << "Массив u2: ";
	MyArray<double> u2(7);
	u2.FillArrayNoSrand();
	u2.print();

	cout << "Массив k: ";
	MyArray<char> k(10);
	k.FillArrayNoSrand();
	k.print();

	cout << "Массив q: ";
	MyArray<char> l(3);
	l.FillArrayNoSrand();
	l.print();

	cout << "\n--------------------------------------\n";

	b = a;

	cout << "Перегрузка оператора присваивания b = a\nМассив b: ";
	b.print();

	a = b = c;

	cout << "Перегрузка оператора присваивания a = b = c\nМассив a: ";
	a.print();

	cout << "Массив b: ";
	b.print();

	cout << "\n--------------------------------------\n";


	cout << "Перегрузка оператора сложения Array + int (добавление числа в конец массива) b + 3\nМассив b: ";
	
	b = b + 3;
	
	b.print();
	cout << endl;
	cout << "Перегрузка оператора сложения Array q = int + Array b (добавление числа в начало массива) q = 15 + b \nМассив q: ";

	q = 15 + b;

	q.print();
	cout << endl;
	cout << "Перегрузка оператора сложения Array a = Array b + int (добавление числа в конец массива) a = b + 55\nМассив a: ";
	
	a = b + 55;
	
	a.print();
	cout << "Массив b: ";
	b.print();
	cout << endl;
	cout << "Перегрузка оператора сложения CHAR Array l = Array k + char (добавление знака в конец массива) l = k + R\nМассив l: ";

	l = k + 'R';

	l.print();
	cout << "Массив k: ";
	k.print();

	cout << "Перегрузка оператора сложения CHAR Array l = char + Array k (добавление знака в конец массива) l = 'G' + k\nМассив l: ";

	l = 'G' + k;

	l.print();
	cout << "Массив k: ";
	k.print();

	cout << "\n--------------------------------------\n";

	cout << "Создание массива DOUBLE Array u3 = Array u + Array u2 \n";
	cout << "Массив u: ";
	u.print();

	cout << "Массив u2: ";
	u2.print();

	MyArray<double> u3(u.GetSize() + u2.GetSize());
	u3 = u + u2;

	cout << "Массив u3: ";
	u3.print();

	cout << "\n--------------------------------------\n";

	cout << "Создание массива CHAR Array kl = Array k + Array l \n";
	cout << "Массив k: ";
	k.print();

	cout << "Массив l: ";
	l.print();

	MyArray<char> kl(k.GetSize() + l.GetSize());
	kl = k + l;

	cout << "Массив kl: ";
	kl.print();

	cout << "\n--------------------------------------\n";


	cout << "Создание массива INT Array e = Array a + Array c \n";
	cout << "Массив а: ";
	a.print();

	cout << "Массив c: ";
	c.print();

	MyArray<int> e(a.GetSize() + c.GetSize());
	e = a + c;

	cout << "Массив e: ";
	e.print();

	cout << "\n--------------------------------------\n";


	cout << "Создание массива INT Array a += Array c (а содержит больше элементов массива с)\n";
	cout << "Массив а: ";
	a.print();

	cout << "Массив c: ";
	c.print();

	a += c;

	cout << "Массив a: ";
	cout << a;

	cout << "\n--------------------------------------\n";


	cout << "Создание массива INT Array c += Array a (c содержит меньше элементов массива a)\n";
	cout << "Массив а: ";
	a.print();

	cout << "Массив c: ";
	c.print();

    c += a;

	cout << "Массив c: ";
	cout << c;

	cout << "\n--------------------------------------\n";

	//перегрузка оператора равенства ==
	cout << "Сравнение на равенство массива a с массивом b: ";
	
	bool result = a == b;
	cout << result << endl;

	cout << "Сравнение на равенство массива d с массивом c: ";
	result = d == c;
	cout << result << endl;

	//перегрузка оператора присваивания
	cout << "Перегрузка оператора присваивания c = d\nМассив c: ";

	c = d;
	//d = c;

	//c = a;

	c.print();

	cout << "Массив d: ";
	d.print();
	//перегрузка оператора равенства ==
	cout << "Сравнение на равенство массива d с массивом c: ";
	result = d == c;
	cout << result << endl;

	cout << endl;

	cout << "k: " << k  << "l: " << l;

	cout << "Сравнение на равенство массива k с массивом l: ";

	
	result = k == l;
	cout << result << endl;

	cout << "Перегрузка оператора присваивания k = l\nМассив k: ";

	k = l;
	k.print();

	cout << "Массив l: ";
	l.print();

	cout << "Сравнение на равенство массива k с массивом l: ";

	result = k == l;
	cout << result << endl;

	cout << "\n--------------------------------------\n";

	cout << "Массив а: ";
	a.print();

	cout << "Массив b: ";
	b.print();

	cout << "Массив c: ";
	c.print();

	//перегрузка оператора неравенства !=
	cout << "Сравнение на неравенство массива a с массивом b: ";
	result = a != b;
	cout << result << endl;

	cout << "Сравнение на неравенство массива b с массивом c: ";
	result = b != c;
	cout << result << endl;

	cout << "\n--------------------------------------\n";

	cout << "Перегрузка оператора []\n";

	cout << "Получение значения массива по индексу a[9]\n";
	cout << a[9] << endl;

	cout << "Получение значения массива по несуществующему индексу a[30]\n";
	 a[30] ;
	 cout << endl;
	cout << "Изменение значения массива по существующему индексу a[0] = 100\n";

	a[0] = 100;
	cout << "Массив а: ";
	a.print();

	cout << "Изменение значения массива по несуществующему индексу a[30] = 100\n";
	a[30] = 100;
	
	cout << endl;
	cout << "Массив а: ";
	a.print();

	/*cout << "Изменение значения массива по существующему индексу k[1] = Z\n";

	k[1] = 'Z';
	cout << "Массив k: ";
	cout << k;*/

	cout << "\n--------------------------------------\n";

	cout << "Перегрузка операторов > и < \n";

	cout << "Массив а: ";
	a.print();

	cout << "Массив b: ";
	b.print();

	cout << "Массив c: ";
	c.print();

	cout << "Массив d: ";
	d.print();

	cout << "Сумма элементов массивов a > b : ";
	result = a > b;
	cout << result << endl;

	cout << "Сумма элементов массивов a < b : ";
	result = a < b;
	cout << result << endl;

	cout << "Сумма элементов массивов c > d : ";
	result = c > d;
	cout << result << endl;

	cout << "Сумма элементов массивов c < d : ";
	result = c < d;
	cout << result << endl;

	cout << "\n--------------------------------------\n";

	cout << "Создаем массив INT с отличительными уникальными (неповторяющимися) элементами двух массивов \n";
	cout << "Массив а: ";
	a.print();

	cout << "Массив b: ";
	b.print();

	MyArray<int> f(a.GetSize() + b.GetSize());
	f = a % b;

	cout << "Массив f: ";
	f.print();

	cout << "\n--------------------------------------\n";

	cout << "Создаем массив INT с общими уникальными (неповторяющимися) элементами двух массивов \n";

	MyArray<int> g(20);
	g.FillArrayNoSrand();

	cout << "Массив o: ";
	o.print();

	cout << "Массив g: ";
	g.print();

	MyArray<int> h(o.GetSize() + g.GetSize());
	h = o * g;

	cout << "Массив h: ";
	h.print();

	cout << "Создаем массив CHAR с общими уникальными (неповторяющимися) элементами двух массивов \n";

	MyArray<char> kl1(20);
	kl1.FillArrayNoSrand();

	cout << "Массив kl: ";
	kl1.print();

	cout << "Массив k: ";
	k.print();

	MyArray<char> kl3(kl1.GetSize() + k.GetSize());
	kl3 = kl1 * k;

	cout << "Массив kl3: ";
	kl3.print();


	cout << "\n--------------------------------------\n";

	cout << "Перегрузка оператора << (cout << a << b << c << d << e << f << l << u) \n";

	cout << "a: " << a << "b: " << b << "c: " << c << "d: " << d << "e: "  << e << "f: " << f << "l: " << l << "u: " << u;

	cout << "\n--------------------------------------\n";

	cout << "Перегрузка оператора CHAR >> \n";

	MyArray<char> x(3);

	cin >> x;

	cout << x;

	cout << endl;
	system("pause");
}