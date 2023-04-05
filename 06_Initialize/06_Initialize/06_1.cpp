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
	void area() {                  //경우: int area(){ return width*height;}
		cout << width * height;
	}

};

int main() {
	int width_in, height_in;
	cout << "사각형의 가로와 세로 길이를 입력해주세요.(띄어쓰기로 구분)";
	cin >> width_in;
	cin >> height_in;
	Rectangle Rectangle1(width_in, height_in);
	cout << "넓이는: ";
	Rectangle1.area(); //경우: cout << Rectangle1.area();

}