#include<iostream>
using namespace std;


class Shape {
protected:
	virtual void draw() = 0;
};

class Circle : public Shape{
public:
	void draw() {
		cout << "��\n";
	}
};


class Rect : public Shape {
public:
	void draw() {
		cout << "���簢��\n";
	}
};


class Tira : public Shape {
public:
	void draw() {
		cout << "�ﰢ��\n";
	}
};


int main() {
	Circle c = Circle();
	Rect r = Rect();
	Tira t = Tira();
	c.draw();
	r.draw();
	t.draw();
}