#pragma once

#include<iostream>
#include <Windows.h>

using namespace std;

struct numpunct
	: std::numpunct<char>
{
	std::string do_truename() const { return "правда"; }
	std::string do_falsename() const { return "враньё"; }
};

class MyArray
{
public:
	
	//констурктор создания объекта с одним параметром
	explicit MyArray(int s);

	//конструктор копирования
	MyArray(const MyArray& obj);

	//оператор присваивания =
	MyArray &operator = (const MyArray& obj);

	//оператор Array + int добавляет значение в конец массива
	MyArray operator + (int n);

	//оператор Array + Array
	MyArray& operator + (const MyArray& obj);

	//оператор равенства ==
	bool operator == (const MyArray& obj);

	//оператор неравенства !=
	bool operator != (const MyArray& obj);

	//оператор больше > сравнение происходит по сумме элементов массивов
	bool operator > (const MyArray& obj);

	//оператор меньше < сравнение происходит по сумме элементов массивов
	bool operator < (const MyArray& obj);

	//оператор получение значения константного массива по индексу
	int operator [] (int index) const;

	//оператор изменения значения массива по индексу
	int& operator [] (int index);

	//оператор Array * Array создаем массив с общими уникальнми элементами двух массивов
	MyArray& operator * (const MyArray& obj);

	//оператор Array % Array создаем массив с уникальнми отличительными элементами двух массивов
	MyArray& operator % (const MyArray& obj);

	

	//геттеры
	int GetSize();

	//деструктор
	~MyArray();

	//вывод массива на экрна
	void print() const;

	//заполнение массива
	void FillArrayNoSrand();

	friend MyArray operator+(int n, const MyArray& obj);
	friend ostream& operator << (ostream& out, const MyArray& obj);
	friend istream& operator >> (istream& in, const MyArray& obj);
	
private:

	int* array = nullptr;
	int size = 0;

};

