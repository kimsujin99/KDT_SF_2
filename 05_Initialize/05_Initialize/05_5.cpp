#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Rectangle {
	double width = 0;
	double height = 0;
};

int main(){
	Rectangle r;
	cout << "가로, 세로 길이를 입력하세요.";
	cin >> r.width;
	cin >> r.height;
	cout << "넓이는 : " << r.width * r.height;

}