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
	cout << "����, ���� ���̸� �Է��ϼ���.";
	cin >> r.width;
	cin >> r.height;
	cout << "���̴� : " << r.width * r.height;

}