#include <iostream>
#include<string>
using namespace std;

class Rectangle {
	int width;
	int height;

public:
	Rectangle(int width, int height) {
		this->width = width;
		this->height = height;
	}
	void area() {                  //���: int area(){ return width*height;}
		cout << width * height;
	}

};

int main() {
	int width_in, height_in;
	cout << "�簢���� ���ο� ���� ���̸� �Է����ּ���.(����� ����)";
	cin >> width_in;
	cin >> height_in;
	Rectangle Rectangle1(width_in, height_in);
	cout << "���̴�: ";
	Rectangle1.area(); //���: cout << Rectangle1.area();

}