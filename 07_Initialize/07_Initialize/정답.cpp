#include<iostream>
using namespace std;

class Shape {

protected: // �ڽ�Ŭ�������� ��밡��
	int line_num;   
	int length;

public:
	
	Shape(int line_num, int length) { //��� 2������ �ʿ�
		this->line_num = line_num;
		this->length = length;
	}

	void printInfo(){
		cout << "���� ������: " << line_num << "\n";
		cout << "�غ��� ���̴�: " << length << "\n";
	}
};


class Rectangle :public Shape {
	int height;

public:
	/*��� 1
	Rectangle(int length, int height): Shape(){
		this->line_num = 4;
		this->length = length;
		this->height = height;
	}
	*/

	//���2
	Rectangle(int length, int height) : Shape(4,length) {
		this->height = height;
	}

	void area() {
		cout << "���̴�: " <<  height * length<<endl;
	}

};

class Triangle :public Shape {
	int height;//Retangle�� �ִ� �����ʹ� �ٸ���.

public:
	Triangle(int length, int height) :Shape(3, length) {
		this->height = height;
	}

	void area() {
		cout << "���̴�: " << (double)height * length/(double)2 << endl;
	}
};


int main() {
	Rectangle r = Rectangle(5,3);
	r.printInfo();
	r.area();

	Triangle t = Triangle(3, 3);
	t.printInfo();
	t.area();

}