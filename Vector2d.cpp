#include "Vector2d.h"
#include <iostream>
#include <string>

Vector2d::Vector2d() 
{
	x = 0;
	y = 0;
}

Vector2d::~Vector2d()
{

}
Vector2d::Vector2d(double x, double y) // создание вектора с заданными координатами
{
	//обратиться к полям можно через указатель this, который явно передается в каждый метод
	this->x = x; //доступ к полю через указатель this происходит с помощью оператора ->
	(*this).y = y; //использование точки возможно, в случае разыменования указателя
}

Vector2d::Vector2d(double x1, double y1, double x2, double y2)
{
	this->x = x2 - x1;
	this->y = y2 - y1;
}

Vector2d::Vector2d(const Vector2d& a)
{
	this->x = a.x;
	this->y = a.y;
}

void Vector2d::setx(double x)
{
	this->x = x;
}

double Vector2d::getx()
{
	return this->x;
}

void Vector2d::sety(double y)
{
	this->y = y;
}

double Vector2d::gety()
{
	return this->y;
}

void Vector2d::print(void)
{
	std::cout << "(" << this->x << ", " << this->y << ")\n";
}

void Vector2d::sum(Vector2d &b)//метод прибавления вектора b к данному вектору
{
	x = x + b.x;
	y = y + b.y;
}

void Vector2d::sub(Vector2d& b)
{
	x = x - b.x;
	y = y - b.y;
}

void Vector2d::mult(double b)
{
	x = x * b;
	y = y * b;
}

double Vector2d::scalarMult(Vector2d& b)
{
	return (x * b.x + y * b.y);
}

double Vector2d::length(void)
{
	return sqrt(x * x + y * y);
}

double Vector2d::angleTan(Vector2d& b)
{
	double a_length = this->length();
	double b_length = b.length();
	double scalar_a_b = this->scalarMult(b);
	double cos = scalar_a_b / (a_length * b_length);
	double sin = sqrt(1 - cos * cos);
	return sin / cos;
}	
Vector2d Vector2d::operator+(const Vector2d& v) const
{
	return Vector2d(x + v.x, y + v.y);
}

Vector2d operator*(double r, Vector2d &v)
{
	return v * r;
}

double Vector2d::operator*(const Vector2d& v) const
{
	return x * v.x + y * v.y;
}
Vector2d Vector2d::operator*(const double& v) const
{
	return Vector2d(x * v, y * v);
}

Vector2d& Vector2d::operator++() 
{
	x++;
	y++;
	return *this;
}

Vector2d Vector2d::operator++(int)
{
	Vector2d temp(x, y);
	x++;
	y++;
	return temp;
}

Vector2d& Vector2d::operator--()
{
	x--;
	y--;
	return *this;
}

Vector2d Vector2d::operator--(int)
{
	Vector2d temp(x, y);
	x--;
	y--;
	return temp;
}

const Vector2d& Vector2d::operator+= (const Vector2d& v)
{
	x += v.x;
	y += v.y;
	return *this;
}

const Vector2d& Vector2d::operator-= (const Vector2d& v)
{
	x -= v.x;
	y -= v.y;
	return *this;
}

const Vector2d& Vector2d::operator*= (const Vector2d& v)
{
	x *= v.x;
	y *= v.y;
	return *this;
}

/*Vector2d::operator string()
{
    string s = "(" + to_string(x) + to_string(x) + ";" + to_string(y) + ")";
	return s;
}*/

