#pragma once
#include"TemplateArray.h"

MyArray operator+(int n, const MyArray& obj);

ostream& operator << (ostream& out, const MyArray& obj);

istream& operator >> (istream& in, const MyArray& obj);