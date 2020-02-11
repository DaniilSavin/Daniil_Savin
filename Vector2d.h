#pragma once
class Vector2d
{
private: // �������� ������, ������������ ������ ������ ������
	double x, y;
public: 
	Vector2d(); //����������� ������������ ��� �������� ����������� ������
	~Vector2d(); //���������� ���������� ����� ������������ �������
	//���������� ������������
	Vector2d(double x, double y); //�������� ������� � ��������� ������������
	Vector2d(double x1, double y1, double x2, double y2); //�������� ������� �� ���� ������ � ���������� ����� � ������ �������
	Vector2d(const Vector2d& a);
		void setx(double x);
		double getx();
		void sety(double y);
		double gety();
		void print(void);
		//����� ����������� ������� � ���������
		void sum(Vector2d &b); //����� ���������� ����������� ������
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

