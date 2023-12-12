#pragma once
#include <iostream>
#include <math.h>
#include <string>
namespace stlab {

	using namespace std;
	class Rational
	{
		int a;
		int b;
	public:
		Rational();//����������� �� �����������
		Rational(int A);//����������� � 1 ����������
		Rational(int a, int b);//����������� � 2 �����������
		Rational operator+(Rational rt2);//�������� ���������
		Rational operator-(Rational rt2);//�������� ��������
		Rational operator*(Rational rt2);//�������� ��������
		Rational operator/(Rational rt2);//�������� ������
		void Init(int a, int b);//�����������
		void read();//�������� � ���������
		void display();//����
		string toString();//����������� � �����

		Rational add(Rational rt2);//��������� ���� �����
		Rational sub(Rational rt2);//�������� ���� �����
		Rational mul(Rational rt2);// �������� ���� �����
		Rational div(Rational rt2);// ������ ���� �����

		void reduce();// ���������� �����
		void equal(Rational rt2);//�������� �� ������
		void less(Rational rt2);//����������� �������� �����
		void greate(Rational rt2);//����������� ������� �����
	};

}