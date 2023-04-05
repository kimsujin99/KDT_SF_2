#include<iostream>
#include <fstream>
#include <string>

using namespace std;


class Shape {
	int num;

	
public:


	void printlnfo() {
		cout << num;

	}

	virtual void area() = 0;

};

class Rectangle : public Shape {
	int count ,length;

public: 
	Rectangle(int count = 0, int length= 0) {
		this->count = count;
		this->length = length;
	}
	void area() {
		cout << "���� ����:4 \n";
		cout << "�غ��� ����: " << this->count << "\n";
		cout << "������ ����: " << this->length << "\n";
		double total_area;
		total_area = count * length;
		
		cout << "���簢���� ���̴�: " << total_area << "\n";

	}

};

class Triangle : public Shape {

	int count, length;
public:
	Triangle(int count, int length){
		this->count = count;
		this->length = length;
	}

	void area() {
		cout << "���� ����:3 \n";
		cout << "�غ��� ����: " << this->count << "\n";
		cout << "������ ����: " << this->length << "\n";
		double total_area2;
		total_area2 = (count * length)/2;
		cout << "�ﰢ���� ���̴�: " << total_area2 << "\n";

	}

};

int main() {
	
	Shape *point = new Rectangle(4, 3);
	point->area();
	cout <<endl;
	delete point;
	

	Shape* point2 = new Triangle(4,5);
	point2->area();
	cout << endl;
	delete point2;
}