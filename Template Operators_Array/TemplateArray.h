#pragma once

#include<iostream>
#include <Windows.h>

using namespace std;

struct numpunct
	: std::numpunct<char>
{
	std::string do_truename() const { return "������"; }
	std::string do_falsename() const { return "������"; }
};

class MyArray
{
public:
	
	//����������� �������� ������� � ����� ����������
	explicit MyArray(int s);

	//����������� �����������
	MyArray(const MyArray& obj);

	//�������� ������������ =
	MyArray &operator = (const MyArray& obj);

	//�������� Array + int ��������� �������� � ����� �������
	MyArray operator + (int n);

	//�������� Array + Array
	MyArray& operator + (const MyArray& obj);

	//�������� ��������� ==
	bool operator == (const MyArray& obj);

	//�������� ����������� !=
	bool operator != (const MyArray& obj);

	//�������� ������ > ��������� ���������� �� ����� ��������� ��������
	bool operator > (const MyArray& obj);

	//�������� ������ < ��������� ���������� �� ����� ��������� ��������
	bool operator < (const MyArray& obj);

	//�������� ��������� �������� ������������ ������� �� �������
	int operator [] (int index) const;

	//�������� ��������� �������� ������� �� �������
	int& operator [] (int index);

	//�������� Array * Array ������� ������ � ������ ���������� ���������� ���� ��������
	MyArray& operator * (const MyArray& obj);

	//�������� Array % Array ������� ������ � ���������� �������������� ���������� ���� ��������
	MyArray& operator % (const MyArray& obj);

	

	//�������
	int GetSize();

	//����������
	~MyArray();

	//����� ������� �� �����
	void print() const;

	//���������� �������
	void FillArrayNoSrand();

	friend MyArray operator+(int n, const MyArray& obj);
	friend ostream& operator << (ostream& out, const MyArray& obj);
	friend istream& operator >> (istream& in, const MyArray& obj);
	
private:

	int* array = nullptr;
	int size = 0;

};

