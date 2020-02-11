// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Vector2d.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	Vector2d a = { 14, 20 };
	Vector2d b = { 35, 67 };
	cout << "Координаты вектора а "; a.print();
	cout << "Координаты вектора b ";  b.print();
	a.setx(11);
	a.sety(13);
	cout << "\nКоординаты вектора а после изменения ";  a.print();	
	a = a + b;
	cout << "a + b= ";
	a.print();
	cout << endl;
	cout << "Скалярное произведение: " << a.scalarMult(b) << endl;
	cout << "Тангенс: " << a.angleTan(b) << endl;
}

