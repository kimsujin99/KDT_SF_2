#include <iostream>
#include<string>
using namespace std;

class Rectangle {
	int width;
	int height;

public:
	
	int getWidth() {
		return  width;
	}
	int getHeight() {
		return height;
	}

	void setWidth(int width) {
		this->width = width;
	}

	void setHeight(int height) {
		this->height = height;
	}
	
int area(){
		return width*height;
	}
};

int main() {
	int width_in, height_in;
	cout << "�簢���� ���ο� ���� ���̸� �Է����ּ���.(����� ����)";
	cin >> width_in;
	cin >> height_in;

	Rectangle Rectangle1;
	Rectangle1.setWidth(width_in);
	Rectangle1.setHeight(height_in);

	cout << "���̴�: ";
	cout << Rectangle1.area();
}