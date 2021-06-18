//для массива int (код без шаблона)

//#include "Func.h"
//
//
//MyArray operator+(int n, const MyArray& obj)
//{
//	MyArray temp(obj.size + 1);
//	temp.array[0] = n;
//
//	for (size_t i = 0; i < obj.size; i++)
//	{
//		temp.array[i + 1] = obj.array[i];
//	}
//
//	return temp;
//}
//
//
//ostream& operator<<(ostream& out, const MyArray& obj)
//{
//	for (size_t i = 0; i < obj.size; i++)
//	{
//		out << obj.array[i] << " ";
//	}
//
//	out << endl;
//
//	return out;
//}
//
//istream& operator>>(istream& in, const MyArray& obj)
//{
//	cout << "Введите значения для нового массива количеством " << obj.size << " элементов: ";
//
//	for (size_t i = 0; i < obj.size; i++)
//	{
//		in >> obj.array[i];
//	}
//
//	return in;
//}