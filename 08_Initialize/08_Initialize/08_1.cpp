#include<iostream>
using namespace std;


class Shape {
protected:
	virtual void draw() = 0;
};

class Circle : public Shape{
public:
	void draw() {
		cout << "원\n";
	}
};


class Rect : public Shape {
public:
	void draw() {
		cout << "직사각형\n";
	}
};


class Tira : public Shape {
public:
	void draw() {
		cout << "삼각형\n";
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