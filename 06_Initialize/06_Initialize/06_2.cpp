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
	cout << "사각형의 가로와 세로 길이를 입력해주세요.(띄어쓰기로 구분)";
	cin >> width_in;
	cin >> height_in;

	Rectangle Rectangle1;
	Rectangle1.setWidth(width_in);
	Rectangle1.setHeight(height_in);

	cout << "넓이는: ";
	cout << Rectangle1.area();
}