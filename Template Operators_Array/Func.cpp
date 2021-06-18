//#include "Func.h"
//
//
//template<class T>
//MyArray<T> operator+(T n, const MyArray<T>& obj)
//{
//	MyArray<T> temp(obj.size + 1);
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
//template<class T>
//ostream& operator<<(ostream& out, const MyArray<T>& obj)
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
//template<class T>
//istream& operator>>(istream& in, const MyArray<T>& obj)
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