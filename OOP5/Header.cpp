#include "Header.h"
#include <iostream>
#include <math.h>
#include <string>

namespace stlab {
	using namespace std;
	Rational::Rational()
	{
		a = 0;
		b = 2;

	}
	Rational::Rational(int A)
	{
		a = A;
		b = 1;
	}
	Rational::Rational(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	Rational Rational::operator+(Rational rt2)
	{
		Rational temp;
		temp.a = this->a * rt2.b + this->b * rt2.a;
		temp.b = this->b * rt2.b;
		temp.reduce();
		return temp;
	}
	Rational Rational::operator-(Rational rt2)
	{
		Rational temp;
		temp.a = this->a * rt2.b - this->b * rt2.a;
		temp.b = this->b * rt2.b;
		temp.reduce();
		return temp;
	}
	Rational Rational::operator*(Rational rt2)
	{
		Rational temp;
		temp.a = this->a * rt2.a;
		temp.b = this->b * rt2.b;
		temp.reduce();
		return temp;
	}
	Rational Rational::operator/(Rational rt2)
	{
		Rational temp;
		temp.a = this->a * rt2.b;
		temp.b = this->b * rt2.a;
		temp.reduce();
		return temp;
	}
	//�����������
	void Rational::Init(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	//�������� � ���������
	void Rational::read()
	{
		cout << "Enter a\n";
		cin >> a;
		cout << "Enter b\n";
		cin >> b;

	}
	//����
	void Rational::display()
	{
		cout << endl << a << "\n--\n" << b << endl;
	}
	//����������� � �����
	string Rational::toString()
	{
		string str_a, str_b, out_put;
		str_a = to_string(a);
		str_b = to_string(b);
		out_put = str_a + "\n--\n" + str_b + "\n";
		return out_put;
	}
	//��������� ���� �����
	Rational Rational::add(Rational rt2) {
		Rational temp;
		temp.a = this->a * rt2.b + this->b * rt2.a;
		temp.b = this->b * rt2.b;
		temp.reduce();
		return temp;
	}
	//�������� ���� �����
	Rational Rational::sub(Rational rt2) {
		Rational temp;
		temp.a = this->a * rt2.b - this->b * rt2.a;
		temp.b = this->b * rt2.b;
		temp.reduce();
		return temp;
	}
	// �������� ���� �����
	Rational Rational::mul(Rational rt2) {
		Rational temp;
		temp.a = this->a * rt2.a;
		temp.b = this->b * rt2.b;
		temp.reduce();
		return temp;
	}
	// ������ ���� �����
	Rational Rational::div(Rational rt2) {
		Rational temp;
		temp.a = this->a * rt2.b;
		temp.b = this->b * rt2.a;
		temp.reduce();
		return temp;
	}
	// ���������� �����
	void Rational::reduce() {
		int num1 = a, num2 = b;
		while (num2 != 0) {
			int temp = num2;
			num2 = num1 % num2;
			num1 = temp;
		}
		a = this->a / num1;
		b = this->b / num1;
	}
	//�������� �� ������
	void Rational::equal(Rational rt2)
	{
		if (a == rt2.a && b == rt2.b) {
			cout << "\nFirst fraction equal second fraction";
		}
		else {
			cout << "\n Fractions are not equal";
		}
	}
	//����������� �������� �����
	void Rational::less(Rational rt2)
	{
		float a1, b1;
		a1 = (float)a / (float)b;
		b1 = (float)rt2.a / (float)rt2.b;

		if (a1 < b1 && a1 != b1) {
			cout << "\nFirst fraction lesser than second";
		}
		else if (a1 > b1 && a1 != b1) {
			cout << "\nSecond fraction  lesser than first";
		}
	}
	//����������� ������� �����
	void Rational::greate(Rational rt2)
	{
		float a1, b1;
		a1 = (float)a / (float)b;
		b1 = (float)rt2.a / (float)rt2.b;

		if (a1 > b1 && a1 != b1) {
			cout << "\nFirst fraction greater than second";
		}
		else if (a1 < b1 && a1 != b1) {
			cout << "\nSecond fraction greater than first";
		}
	}
}

