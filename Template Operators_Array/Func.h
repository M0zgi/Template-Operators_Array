#pragma once
#include"TemplateArray.h"

//дружественная функция перегрузка оператора + (int + Array) добавляет значение в начало массива
MyArray operator+(int n, const MyArray& obj);

//дружественная функция перегрузка cout
ostream& operator << (ostream& out, const MyArray& obj);

//дружественная функция перегрузка cin
istream& operator >> (istream& in, const MyArray& obj);