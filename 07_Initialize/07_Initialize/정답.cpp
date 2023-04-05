#include<iostream>
using namespace std;

class Shape {

protected: // 자식클래스에서 사용가능
	int line_num;   
	int length;

public:
	
	Shape(int line_num, int length) { //방법 2때문에 필요
		this->line_num = line_num;
		this->length = length;
	}

	void printInfo(){
		cout << "변의 개수는: " << line_num << "\n";
		cout << "밑변의 길이는: " << length << "\n";
	}
};


class Rectangle :public Shape {
	int height;

public:
	/*방법 1
	Rectangle(int length, int height): Shape(){
		this->line_num = 4;
		this->length = length;
		this->height = height;
	}
	*/

	//방법2
	Rectangle(int length, int height) : Shape(4,length) {
		this->height = height;
	}

	void area() {
		cout << "넓이는: " <<  height * length<<endl;
	}

};

class Triangle :public Shape {
	int height;//Retangle에 있는 변수와는 다르다.

public:
	Triangle(int length, int height) :Shape(3, length) {
		this->height = height;
	}

	void area() {
		cout << "넓이는: " << (double)height * length/(double)2 << endl;
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