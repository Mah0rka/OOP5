#include <iostream>
#include <math.h>
#include <string>
#include "Header.h"

using namespace std;
using namespace stlab;

	int main() {
		Rational rt1, rt2, culcRt;
		rt2.Init(6, 18); //ініціалізація rt2
		rt1.read(); //ініціалізація  через клавіатуру rt1
		culcRt = rt1 + rt2;// rt1 + rt2 через оператор
		culcRt.display();//вивід
		culcRt = rt1 - rt2;// rt1 - rt2 через оператор
		culcRt.display();//вивід
		culcRt = rt1 * rt2;// rt1 * rt2 через оператор
		culcRt.display();//вивід
		culcRt = rt1 / rt2;// rt1 / rt2 через оператор
		culcRt.display();//вивід
		culcRt = rt1.add(rt2); // rt1 + rt2
		cout << culcRt.toString(); //переведення у стрінг
		culcRt = rt1.sub(rt2);// rt1 - rt2
		culcRt.display();//вивід
		culcRt = rt1.mul(rt2);// rt1 * rt2
		culcRt.display();//вивід
		culcRt = rt1.div(rt2);// rt1 / rt2
		culcRt.display();//вивід
		rt1.equal(rt2); //порівняння rt1 and rt2
		rt1.less(rt2);//порівняння rt1 and rt2
		rt1.greate(rt2);//порівняння rt1 and rt2
		return 0;
	}