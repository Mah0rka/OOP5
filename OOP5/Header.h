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
		Rational();//конструктор за замовченням
		Rational(int A);//конструктор з 1 параметром
		Rational(int a, int b);//конструктор з 2 параметрами
		Rational operator+(Rational rt2);//оператор додавання
		Rational operator-(Rational rt2);//оператор віднімання
		Rational operator*(Rational rt2);//оператор множення
		Rational operator/(Rational rt2);//оператор ділення
		void Init(int a, int b);//ініціалізація
		void read();//введення з клавіатури
		void display();//вивід
		string toString();//переведення у стрінг

		Rational add(Rational rt2);//додавання двох дробів
		Rational sub(Rational rt2);//віднімання двох дробів
		Rational mul(Rational rt2);// множення двох дробів
		Rational div(Rational rt2);// ділення двох дробів

		void reduce();// скорочення дробу
		void equal(Rational rt2);//перевірка на рівність
		void less(Rational rt2);//знаходження меньшого дробу
		void greate(Rational rt2);//знаходження більшого дробу
	};

}