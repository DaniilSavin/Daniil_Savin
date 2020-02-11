#pragma once
class Vector2d
{
private: // закрытые данные, используютс€ только внутри класса
	double x, y;
public: 
	Vector2d(); //конструктор используетс€ дл€ создани€ экземпл€ров класса
	~Vector2d(); //деструктор вызываетс€ перед уничтожением объекта
	//перегрузка конструктора
	Vector2d(double x, double y); //создание вектора с заданными координатами
	Vector2d(double x1, double y1, double x2, double y2); //создание вектора по двум точкам Ц координаты конца и начала вектора
	Vector2d(const Vector2d& a);
		void setx(double x);
		double getx();
		void sety(double y);
		double gety();
		void print(void);
		//метод прибавлени€ вектора к исходному
		void sum(Vector2d &b); //метод вызываетс€ экземпл€ром класса
		void sub(Vector2d& b);
		void mult(double b);
		double length(void);
		double angleTan(Vector2d& b);
		double scalarMult(Vector2d& b);
		Vector2d operator+(const Vector2d& v) const;
		double operator*(const Vector2d& v) const;
		friend Vector2d operator*(double, Vector2d&);
		Vector2d operator*(const double& v) const;
		Vector2d& operator++();
		Vector2d operator++(int);
		Vector2d& operator--();
		Vector2d operator--(int);

		const Vector2d& operator += (const Vector2d& v);
		const Vector2d& operator -= (const Vector2d& v);
		const Vector2d& operator *= (const Vector2d& v);
		//operator string(void);
};

